#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#define PORTNUMBER 34201
#define BUFLEN 1024
#define SERVRADDR "127.0.0.1"


int s;


int
main(void)
{
    struct sockaddr_in saddr;
    socklen_t addrlen;

    char bufs[BUFLEN], bufr[BUFLEN];
    int connerr, keepprint, bs, br;
    
    s = socket(AF_INET, SOCK_STREAM, 0);
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    inet_aton(SERVRADDR, &saddr.sin_addr);
    addrlen = sizeof(struct sockaddr);
    
    connerr = connect(s, (const struct sockaddr*)&saddr, addrlen);
    /* perror */ perror("\tconnect");
    
    while (!connerr)
    {
        memset(bufs, 0, BUFLEN);
        br = read(0, bufs, BUFLEN);
        bs = send(s, bufs, BUFLEN, 0);
        /* perror */ perror("\tsend");
        memset(bufr, 0, BUFLEN);

        do
        {
            br = recv(s, bufr, BUFLEN, 0);  
            printf("%s\n", bufr);

        } while (strcmp(bufr, "OK"));

        if (!strncmp(bufs, "GOODBYE", 7))
        {
            connerr = 1; /* exit */
        }
    }
	
    close(s);
}