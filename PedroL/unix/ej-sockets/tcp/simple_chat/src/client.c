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

    char buf[BUFLEN];
    int connerr, bs, br;
    
    s = socket(AF_INET, SOCK_STREAM, 0);
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    inet_aton(SERVRADDR, &saddr.sin_addr);
    addrlen = sizeof(struct sockaddr);
    
    connerr = connect(s, (const struct sockaddr*)&saddr, addrlen);
    
    while (!connerr)
    {
        memset(buf, 0, BUFLEN);
        br = write(0, buf, BUFLEN);
        bs = send(s, buf, br, 0);

        memset(buf, 0, BUFLEN);
        br = recv(s, buf, BUFLEN, 0);
        read(1, buf, br);
        
        if (!strncmp(buf, "GOODBYE", 7))
        {
            connerr = 1; /* exit */
            br = recv(s, buf, BUFLEN, 0);
        }
    }
	
    close(s);
}