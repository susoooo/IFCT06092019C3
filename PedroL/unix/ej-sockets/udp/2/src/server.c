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

void netcalc();

char buf[BUFSIZE];
int s, n;
struct sockaddr_in name;
socklen_t len;

int
main(void)
{
	len = sizeof(struct sockaddr_in);

	s = socket(AF_INET, SOCK_DGRAM, 0);
	name.sin_family = AF_INET;
	name.sin_port = htons(PORTNUMBER);
	name.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(s, (const struct sockaddr*)&name, len);

	while (1) {
		netcalc();
		perror("");
	}

	close(s);

	return 0;
}

void netcalc()
{
	char res[BUFSIZE];
	int rlen;

	n = recvfrom(s, buf, sizeof(buf), 0,
	        (struct sockaddr*)&name,
		&len);
	printf("%s\n", buf);

	if (buf == "0") {
		strcpy(res, "introduzca 2 numeros a sumar");
		rlen = strlen(res);
		sendto(s, res, rlen, 0,
		      (const struct sockaddr*)&name,
		      len);

		
		n = recvfrom(s, buf, sizeof(buf), 0,
		        (struct sockaddr*)&name,
			&len);
		/* buf to int[0] */
		/* buf to int[1] */
		/* calc and send out */
	}

}
