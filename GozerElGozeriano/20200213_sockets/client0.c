/*
 * Socket Client
 */

#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#define NUMBEROFTHEBEAST 1666
#define DEBUG 0


int main(void)
{
	char buff[1024];
	char hostname[64];
	int socketHandler;
	int readCount;
	struct hostent *hp;
	struct sockaddr_in socketInf;
	
	gethostname(hostname,sizeof(hostname));
	hp=gethostbyname(hostname);
	
	// Create socket
	socketHandler = socket(PF_INET,SOCK_DGRAM,0);
	socketInf.sin_family = AF_INET;
	socketInf.sin_port = htons(NUMBEROFTHEBEAST);

	// IP Address assignation
	memcpy(&socketInf.sin_addr,hp->h_addr_list[0],hp->h_length);
	
	// Read keyboard
	while((readCount = read(0,buff,sizeof(buff)))>0)
	{
		if(DEBUG) printf("readCount = %d\n",readCount);
		if(sendto(socketHandler,buff,readCount,0,(struct sockaddr *)&socketInf,sizeof(struct sockaddr_in))==-1)
			perror("sendto KO");
	}
	close(socketHandler);
}
