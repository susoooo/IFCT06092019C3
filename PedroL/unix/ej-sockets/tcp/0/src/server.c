#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

#define PORTNUMBER 12345
#define BUFLEN 1024

int
main(void)
{
	char buf[BUFLEN], cbuf[BUFLEN];
	int s, ns, bn, eval;
	struct sockaddr_in saddr, nsaddr;
	socklen_t addrlen;
	pid_t chpid;

	eval = 0;
	
	s = socket(AF_INET, SOCK_STREAM, 0);
	
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(PORTNUMBER);
	saddr.sin_addr.s_addr = htonl(INADDR_ANY);
	addrlen = sizeof(struct sockaddr_in);
	
	bind(s, &saddr, addrlen);
	listen(s, 5);
	
	while (eval != 1) {
		ns = accept(s, &nsaddr, &addrlen);
		chpid = fork();
		
		switch (chpid) {
		case -1:
			perror("fork");
			break;
		case 0:
			bn = read(ns, buf, sizeof(buf));
			memcpy(cbuf, buf, bn);
			write(1, buf, bn);

			if (atoi(cbuf) == 0) {
			    eval = 1;
			}
			break;
		default:
			break;
		}
	}

	close(s);
}
