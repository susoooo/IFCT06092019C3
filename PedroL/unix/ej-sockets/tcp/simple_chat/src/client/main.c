#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORTNUMBER 2401
#define BUFLEN 1024
#define SERVRADDR "127.0.0.1"

int
main(void)
{
    int s, n, bs, br;
    struct sockaddr_in saddr;
    socklen_t addrlen;
    
    s = socket(AF_INET, SOCK_STREAM, 0);
	
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    inet_aton(SERVRADDR, &saddr.sin_addr);
    addrlen = sizeof(struct sockaddr);
    
    connect(s, (const struct sockaddr*)&saddr, addrlen);
    sleep(1);
    
    while (1) {
    }
	
    close(s);
}