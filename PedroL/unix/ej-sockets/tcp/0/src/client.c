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
	int s, n;
	struct sockaddr_in saddr;
	socklen_t addrlen;
	
	s = socket(AF_INET, SOCK_STREAM, 0);
	
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(PORTNUMBER);
	inet_aton("127.0.0.1", &saddr.sin_addr);
	addrlen = sizeof(struct sockaddr);
	
	connect(s, &saddr, addrlen);
	
	while ((n = read(0, buf, sizeof(buf))) > 0) {
		write(s, buf, n);
	}
	
	close(s);
}
