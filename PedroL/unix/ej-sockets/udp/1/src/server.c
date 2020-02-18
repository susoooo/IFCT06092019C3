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
	char buf[BUFSIZE];
	int s, n;
	struct sockaddr_in name;
	socklen_t len;

	len = sizeof(struct sockaddr_in);

	s = socket(AF_INET, SOCK_DGRAM, 0);
	name.sin_family = AF_INET;
	name.sin_port = htons(PORTNUMBER);
	name.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(s, (const struct sockaddr*)&name, len);

	while ((n = recvfrom(s, buf, sizeof(buf), 0,
		            (struct sockaddr*)&name,
			    &len)) > 0) {
		perror("recv");
		printf("%s\n", buf);

		usleep(1000);
		sendto(s, buf, sizeof(buf), 0,
		      (const struct sockaddr*)&name,
		      len);
	}

	close(s);

	return 0;
}
