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


#define PORTNUMBER 33333
#define BUFLEN 1024
#define MAXUSRS 3
#define MSGTXTLEN 128
#define MSGLOGLEN 100
#define CHARSINLOG (MSGTXTLEN * MSGLOGLEN)


void init_sock();
int next_user_slot();
void handle_connections();
void *handle_commands();
void init_user();
void dein_user();
void push_msg_to_log();
void send_msg_log();
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


int
main(void)
{
    memset(messages, 0, CHARSINLOG);
    init_sock();
    signal(SIGINT, close_and_exit);
    
    perror("initialization");

    while (1)
    {
        handle_connections();
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

void
handle_connections(void)
{
    int nxtslot;
    struct User *nxtuser;

    
    nxtslot = next_user_slot(1);
        
    if (nxtslot != -1)
    {
        nxtuser = &user[nxtslot];
        nxtuser->usrsock = accept(s, (struct sockaddr*)&nxtuser->usraddr, 
                                  &nxtuser->addrlen);
        slot[nxtslot] = 0;
        openslots--;

        pthread_create(&thrd[nxtslot], NULL, handle_commands, (void*)nxtuser);
        perror("pthread_create");
    }
    else
    {
        perror("Rejected connection: no user slots left");
    }

        usleep(100000);
}

void*
handle_commands(void *arg)
{
    char buf[BUFLEN], *cmd;
    int br, bs, op;
    struct User *userin;
    const char cmdtxt[4][15] =
    {
        "NAME",
        "GOODBYE",
        "MESSAGE",
    };

    userin = (struct User*)arg;

    memset(buf, 0, BUFLEN);

    while ((br = recv(userin->usrsock, buf, BUFLEN, 0)) > 0)
    {
        printf("client msg: %s - len: %d", buf, br);

        for (int i = 0 ; i < 4 ; i++)
        {
            cmd = strtok(buf, " ");

            if (! (strcmp(cmdtxt[i], cmd)) )
            {
                op = i;
                i = 4;
            }
            else
            {
				op = -1;
			}
        }

        switch (op)
        {
            case 0:
            printf("command: NAME\n");
            init_user(userin, (buf + strlen(cmd) + 1) );
            /* perror */ perror("\tNAME");
            break;

            case 1:
            printf("command: GOODBYE\n");
            dein_user(userin);
            /* perror */ perror("\tGOODBYE");
            break;

            case 2:
            printf("command: MESSAGE\n");
            push_msg_to_log(buf + strlen(cmd) + 1); /* USERIN ARG TO ID MSG IN LOG */
            /* perror */ perror("\tMESSAGE");
            break;

            case 3:
            printf("command: UPDATE\n");
            send_msg_log(userin); /* WIP */
            /* perror */ perror("\tUPDATE");
            break;
            
            default:
            printf("not a command\n");
        }

        /* double OK */
        memset(buf, 0, BUFLEN);
        strcpy(buf, "OK");
        bs = send(userin->usrsock, buf, BUFLEN, 0);
        printf("OK sent - len: %d\n", bs);
        
        memset(buf, 0, BUFLEN);
        br = recv(userin->usrsock, buf, BUFLEN, 0);
        printf("client msg: %s - len: %d\n", buf, br);
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
	/* char scratch[MSGTXTLEN]; */
	
    for (int i = MSGLOGLEN - 1 ; i < 0 ; i--)
    {
        strcpy(messages[i], messages[i - 1]);
    }

    /* CLIP MSGSTR AND ID MSG (SPRINTF WITH PADDING FOR ID NUM) */
    strncpy(messages[0], msgstr, MSGTXTLEN);
    memset(&messages[0][MSGTXTLEN - 8], 0, 7);
}

void
send_msg_log(struct User* userin)
{
    /* 
     * EXPECT ID NUMBER AT START OF EACH ENTRY
     * USE IT TO SEND FIRST THE USER NAME AND THEN THE MSG TEXT
     */
	
	
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
