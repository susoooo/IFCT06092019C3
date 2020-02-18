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
    char buf0[BUFLEN], buf1[BUFLEN];
    int s, ns, bn, eval, num[2];
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
    		
    ns = accept(s, &nsaddr, &addrlen);
    
    while(bn = recv(ns, buf0, BUFLEN, 0) > 0) {
	if (buf0 == "0") {
	    for (int i = 0; i < 2; i++) {
		memset(buf0, 0, BUFLEN);
		sprintf(buf0, "num %d:\n", i);
		bn = strlen(buf0);
		send(ns, buf0, bn, 0);

		recv(ns, buf0, BUFLEN, 0);
		memset(buf1, 0, BUFLEN);
		strcpy(buf1, buf0);
		printf("%d\n", buf1);
		num[i] = atoi(buf1);
	    }

	    sprintf(buf0, "ok\n");
	    bn = strlen(buf0);
	    send(ns, buf0, bn, 0);
	}
    }

    close(s);
}
