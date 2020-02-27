#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORTNUMBER 12345
#define BUFLEN 1024

int
main(void)
{
    char buf[BUFLEN];
    int s, n, bs, br;
    struct sockaddr_in saddr;
    socklen_t addrlen;
    
    s = socket(AF_INET, SOCK_STREAM, 0);
	
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    inet_aton("127.0.0.1", &saddr.sin_addr);
    addrlen = sizeof(struct sockaddr);
    
    connect(s, (const struct sockaddr*)&saddr, addrlen);
    sleep(1);
    
    while (1) {
        n = read(STDIN_FILENO, buf, BUFLEN);
        bs = send(s, buf, n, 0);
	perror("send");
        br = recv(s, buf, BUFLEN, 0);
	perror("recv");
	
	usleep(100);
    }
	
    close(s);
}
