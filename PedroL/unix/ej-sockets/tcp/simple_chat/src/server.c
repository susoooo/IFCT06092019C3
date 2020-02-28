#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>


#define PORTNUMBER 34201
#define BUFLEN 1024
#define MAXUSRS 3
#define MSGTXTLEN 128
#define MSGLOGLEN 100
#define CHARSINLOG (MSGTXTLEN * MSGLOGLEN)


void init_sock();
int next_user_slot();
void *handle_commands();
void init_user();
void dein_user();
void push_msg_to_log();
void close_and_exit();


struct User 
{
    int id;
    char name[64];
    int usrsock;
    struct sockaddr_in usraddr;
    socklen_t addrlen;
};


pthread_t thrd[MAXUSRS];

int s;
struct sockaddr_in saddr;
socklen_t addrlen;

int openslots = MAXUSRS;
int slot[MAXUSRS] = { 1, 1, 1 };
struct User user[MAXUSRS];

char messages[MSGLOGLEN][MSGTXTLEN];


void
main(void)
{
    int nxtslot;
    struct User *nxtuser;

    memset(messages, 0, CHARSINLOG);
    init_sock();
    signal(SIGINT, close_and_exit);

    while (1)
    {
        nxtslot = next_user_slot(1);
        
        if (nxtslot != -1)
        {
            nxtuser = &user[nxtslot];
            nxtuser->usrsock = accept(s, (struct sockaddr*)&nxtuser->usraddr, 
                                      &nxtuser->addrlen);
            slot[nxtslot] = 0;
            openslots--;

            pthread_create(&thrd[nxtslot], NULL, handle_commands, (void*)nxtuser);
        }
        else
        {
            printf("Rejected connection: no user slots left\n");
        }

        usleep(100000);
    }
}

void
init_sock(void)
{
    s = socket(AF_INET, SOCK_STREAM, 0);
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    saddr.sin_addr.s_addr = htonl(INADDR_ANY);
    addrlen = sizeof(struct sockaddr_in);
    
    bind(s, (const struct sockaddr*)&saddr, addrlen);
    listen(s, MAXUSRS);
}

int
next_user_slot(int val)
{
    int ret;

    if (!openslots)
    {
        ret = -1;
    }
    else
    {
        for (int i = 0 ; i < MAXUSRS ; i++)
        {
            if (slot[i] == val)
            {
                ret = slot[i];
            }
        } 
    }

    return ret;
}

void*
handle_commands(void *arg)
{
    char buf[BUFLEN], *cmd;
    int br, bs, op;
    struct User *userin;
    const char cmdtxt[3][15] =
    {
        "NAME",
        "GOODBYE",
        "MESSAGE",
    };

    userin = (struct User*)arg;

    memset(buf, 0, BUFLEN);

    while (br = recv(userin->usrsock, buf, BUFLEN, 0) > 0)
    {
        printf("client msg: %s | len: %d", buf, br);

        for (int i = 0 ; i < 3 ; i++)
        {
            cmd = strtok(buf, " ");

            if (! (strcmp(cmdtxt[i], cmd)) )
            {
                op = i;
                i = 3;
            }
        }

        switch (op)
        {
            case 0:
            init_user(userin, (buf + strlen(cmd) + 1) );
            /* perror */ perror("\tNAME");
            break;

            case 1:
            dein_user(userin);
            /* perror */ perror("\tGOODBYE");
            break;

            case 2:
            push_msg_to_log(buf + strlen(cmd) + 1);
            /* perror */ perror("\tMESSAGE");
            break;
        }

        memset(buf, 0, BUFLEN);
        strcpy(buf, "OK");
        bs = send(userin->usrsock, buf, BUFLEN, 0);
        printf("OK sent | len: %d", buf, bs);
        memset(buf, 0, BUFLEN);
    }

    /* connection drop */
    openslots++;
    slot[next_user_slot(0)] = 1;

    pthread_exit(NULL);
}

void
init_user(struct User *userin, char *namestr)
{
    userin->id = MAXUSRS - openslots;
    strncpy(userin->name, namestr, 64);
}

void
dein_user(struct User *userin)
{
    memset(userin, 0, sizeof(struct User));
}

void
push_msg_to_log(char *msgstr)
{
    for (int i = MSGLOGLEN - 1 ; i < 0 ; i--)
    {
        strcpy(messages[i], messages[i - 1]);
    }

    strncpy(messages[0], msgstr, MSGTXTLEN);
    memset(&messages[0][MSGTXTLEN - 8], 0, 7);
}

void
close_and_exit(int sig)
{
    for (int i = 0 ; i < MAXUSRS; i++)
    {
        close(user[i].usrsock);
    }

    close(s);
    exit(sig);
}