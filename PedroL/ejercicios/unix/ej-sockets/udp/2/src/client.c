#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define PORTNUMBER 12354
#define BUFSIZE 1024

int
main(void)
{
	char buf[BUFSIZE], hostname[64];
	int s, n, len;
	struct sockaddr_in name;
	struct hostent *hp;

	gethostname(hostname, sizeof(hostname));
	hp = gethostbyname(hostname);
	len = sizeof(struct sockaddr_in);

	s = socket(AF_INET, SOCK_DGRAM, 0);
	name.sin_family = AF_INET;
	name.sin_port = htons(PORTNUMBER);
	memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);

	while ((n = read(0, buf, sizeof(buf))) > 0) {
		sendto(s, buf, n, 0,
		      (const struct sockaddr*)&name,
		      len);
		perror("send");

		recv(s, buf, sizeof(buf), 0);
		printf("%s", buf);
		perror("recv");
		fflush(stdout);
	}

	close(s);

	return 0;
}
