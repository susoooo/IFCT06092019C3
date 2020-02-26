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

void close_and_exit();

int s, ns;
struct sockaddr_in saddr;

struct User {
    int id;
    char name[64];
    struct sockaddr_in usraddr;
};

int
main(void)
{
    struct sockaddr_in nsaddr;
    socklen_t addrlen;

    char buf[BUFLEN];
    int br, bs;
    struct User user;
    const char cmmnd[2][15] =
    {
        "NAME",
        "GOODBYE",
    };
    enum Cmmnd_I {
        NAME,
        GOODBYE,
    } cmmnd_i;

    memset(buf, 0, BUFLEN);

    signal(SIGINT, close_and_exit);

    s = socket(AF_INET, SOCK_STREAM, 0);
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    saddr.sin_addr.s_addr = htonl(INADDR_ANY);
    addrlen = sizeof(struct sockaddr_in);
    
    bind(s, (const struct sockaddr*)&saddr, addrlen);
    listen(s, 1);
    /* perror */ perror("listen");
    ns = accept(s, (struct sockaddr*)&nsaddr, &addrlen);
    /* perror */ perror("accept");
    
    while (br = recv(ns, buf, BUFLEN, 0))
    {
        printf("%d\n", br);

        if (!(strncmp(buf, cmmnd[NAME], 4)))
        {
            user.id = 1;
            strcpy(user.name, (buf + 5));
            /* perror */ perror("NAME strcpy"); fflush(stdout);
            user.usraddr = nsaddr;
        } 
        else
        if (!(strncmp(buf, cmmnd[GOODBYE], 7)))
        {
            user.id = 0;
            memset(user.name, 0, sizeof(user.name));
            /* perror */ perror("GOODBYE"); fflush(stdout);
            break; /* exit session loop */
        }

        memset(buf, 0, BUFLEN);
        strcpy(buf, "OK");
        bs = send(ns, buf, BUFLEN, 0);

        memset(buf, 0, BUFLEN);
    }

    close(s);
}

void
close_and_exit(int sig)
{
    close(s);
    exit(0);
}