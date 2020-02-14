#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define PORTNUMBER 12354

int
main(void)
{
	char buf[1024];
	char hostname[64];
	int s, n, len;
	struct sockaddr_in Name;
	struct hostent *hp;

	gethostname(hostname, sizeof(hostname));

	hp = gethostbyname(hostname);

	s = socket(AF_INET, SOCK_DGRAM, 0);
	Name.sin_family = AF_INET;
	Name.sin_port = htons(PORTNUMBER);
	len = sizeof(struct sockaddr_in);

	bind(s, (struct sockaddr*)&Name, len);
	memcpy(&Name.sin_addr, hp->h_addr_list[0], hp->h_length);

	while ((n = read(0, buf, sizeof(buf))) > 0)
		sendto(s, buf, sizeof(buf), 0, 
		       (const struct sockaddr*)&Name, 
		       sizeof(struct sockaddr_in));
	
	close(s);

	return 0;
}
