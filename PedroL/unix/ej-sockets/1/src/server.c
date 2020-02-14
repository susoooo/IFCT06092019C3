#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define PORTNUMBER 12354
#define BUFSIZE 1024

int
main(void)
{
	char buf[BUFSIZE];
	int s, n, len;
	struct sockaddr_in Name;

	memset(buf, 0, BUFSIZE);

	s = socket(AF_INET, SOCK_DGRAM, 0);
	Name.sin_family = AF_INET;
	Name.sin_port = htons(PORTNUMBER);
	Name.sin_addr.s_addr = htonl(INADDR_ANY);
	len = sizeof(struct sockaddr_in);

	bind(s, (struct sockaddr*)&Name, len);

	while ((n = recv(s, buf, sizeof(buf), 0)) > 0) {
		/* strcat(buf, "\n\0"); */
		printf("%s", buf);
		memset(buf, 0, BUFSIZE);
	}
	
	close(s);

	return 0;
}
