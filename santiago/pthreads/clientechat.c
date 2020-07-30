#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define PORTNUMBER 12543

int main (void)
{
	int n, s, len, m, contador;
	char comandos[7];
    char buf[30];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;
    
    n=0;
    for(contador=0; contador<30; contador++)
    	buf[contador]=0;

    gethostname(hostname, sizeof(hostname));

    hp = gethostbyname(hostname);
    s = socket(PF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);
    
    connect(s, (struct sockaddr *)&name, len);
    
	read(0,buf,sizeof(buf));
	send(s, &buf, strlen(buf), 0);
	printf("array buffer: %s\n", buf);
	fflush(stdout);
	for(contador=0; contador<30; contador++)
		buf[contador]=0;
	recv(s, &buf, sizeof(buf),0);
	printf("%s\n",buf);
}
