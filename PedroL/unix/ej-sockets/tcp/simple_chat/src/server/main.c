#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORTNUMBER 2401
#define BUFLEN 1024

struct User {
    int id;
    char name[64];
};

int
main(void)
{
    char buf[BUFLEN];
    int s, ns, br;
    struct sockaddr_in saddr, nsaddr;
    socklen_t addrlen;
	
    memset(buf, 0, BUFLEN);
    s = socket(AF_INET, SOCK_STREAM, 0);

    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    saddr.sin_addr.s_addr = htonl(INADDR_ANY);
    addrlen = sizeof(struct sockaddr_in);
    
    bind(s, (const struct sockaddr*)&saddr, addrlen);
    listen(s, 1);
    
    while (ns = accept(s, (struct sockaddr*)&nsaddr, &addrlen)) {
        perror("accept");

        recv(ns, &buf, BUFLEN, 0);
        if (strcmp(&buf, "CONNECT")) {

        }
    }
}