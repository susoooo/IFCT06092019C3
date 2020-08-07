#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define PORTNUMBER 12354

int
main(void)
{
	char buf[1024];
	int s, n, len;
	struct sockaddr_in Name;

	s = socket(AF_INET, SOCK_DGRAM, 0);
	Name.sin_family = AF_INET;
	Name.sin_port = htons(PORTNUMBER);
	Name.sin_addr.s_addr = htonl(INADDR_ANY);
	len = sizeof(struct sockaddr_in);

	bind(s, (struct sockaddr*)&Name, len);

	while ((n = recv(s, buf, sizeof(buf), 0)) > 0)
		write(1, buf, n);
	
	close(s);

	return 0;
}
