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
    char bufraw[BUFLEN], bufcln[BUFLEN], bufscr[BUFLEN];
    int s, ns, br, num[2], eval;
    struct sockaddr_in saddr, nsaddr;
    socklen_t addrlen;
	
    s = socket(AF_INET, SOCK_STREAM, 0);

    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORTNUMBER);
    saddr.sin_addr.s_addr = htonl(INADDR_ANY);
    addrlen = sizeof(struct sockaddr_in);
    
    bind(s, (const struct sockaddr*)&saddr, addrlen);
    	
    listen(s, 1);
    ns = accept(s, (struct sockaddr*)&nsaddr, &addrlen);
    perror("accept");
    		
    while (1) {
	br = recv(ns, bufraw, BUFLEN, 0);

	printf("bufraw: %s\n", bufraw);
	memset(bufraw, 0, BUFLEN);
	    perror("recv");

	eval = atoi(bufraw);
	printf("string to number: %d\n", eval);

	if (eval == 0) {
		perror("if 0");

	    for (int i = 0; i < 2; i++) {
		sprintf(bufscr, "num %d: \n", i);
	        send(ns, bufscr, BUFLEN, 0);
		memset(bufscr, 0, BUFLEN);
		    perror("send");

		recv(ns, bufraw, BUFLEN, 0);
		num[i] = atoi(bufraw);
		memset(bufraw, 0, BUFLEN);
		    perror("recv");

		printf("num %d: %d\n", i, num[0]);
	    }

	    sprintf(bufscr, "suma: %d\n", (num[0] + num[1]));
	    send(ns, bufscr, BUFLEN, 0);
	    memset(bufscr, 0, BUFLEN);
		perror("send");

	    break;
	} else if (eval == 1) {
	    
	    /* WIP */
	}

	usleep(100);
    }

    perror("closing");
    close(s);
}
