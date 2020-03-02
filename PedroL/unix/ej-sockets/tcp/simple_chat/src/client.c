#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#define BUFLEN 1024
#define SERVRADDR "127.0.0.1"


int s;


int
main(void)
{
    int portnum;
    struct sockaddr_in saddr;
    socklen_t addrlen;

    char bufs[BUFLEN], bufr[BUFLEN];
    int connerr, bs, br;

    printf("Port number: \n");
    scanf("%d", &portnum);
    
    s = socket(AF_INET, SOCK_STREAM, 0);
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(portnum);
    inet_aton(SERVRADDR, &saddr.sin_addr);
    addrlen = sizeof(struct sockaddr);
    
    connerr = connect(s, (const struct sockaddr*)&saddr, addrlen);
    /* perror */ perror("\tconnect");
    
    while (!connerr)
    {
        memset(bufs, 0, BUFLEN);
        printf("write:\n");
        br = read(0, bufs, BUFLEN);
        bs = send(s, bufs, BUFLEN, 0);
        /* perror */ perror("\tsend");

        if (!strncmp(bufs, "GOODBYE", 7))
        {
            connerr = 1; /* exit */
        }

        do
        {
            memset(bufr, 0, BUFLEN);
            br = recv(s, bufr, BUFLEN, 0);  
            printf("server msg: %s\n", bufr);

            memset(bufs, 0, BUFLEN);
            strcpy(bufs, "OK");
            bs = send(s, bufs, BUFLEN, 0);

        } while (strcmp(bufr, "OK"));
    }
	
    close(s);
}
