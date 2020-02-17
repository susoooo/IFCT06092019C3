/*
 * Socket Server
 */

#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#define NUMBEROFTHEBEAST 1666
#define DEBUG 0


int main(void)
{
	char buff[1024];
	int socketHandler;
	int readCount;
	struct sockaddr_in socketInf;
	struct sockaddr_in socketClientInf;
	socklen_t sockClLen;
	
	// Create socket
	socketHandler = socket(PF_INET,SOCK_DGRAM,0);
	socketInf.sin_family = AF_INET;
	socketInf.sin_port = htons(NUMBEROFTHEBEAST);
	socketInf.sin_addr.s_addr = htonl(INADDR_ANY);

	// Socket Address asignation
	if(bind(socketHandler,(struct sockaddr *) &socketInf, sizeof(struct sockaddr_in))==-1)
		perror("BIND KO");
	
	// Read socket until EOF
	sockClLen = sizeof(struct sockaddr_in);
	while((readCount = recvfrom(socketHandler,buff,sizeof(buff),0,(struct sockaddr *) &socketClientInf,&sockClLen))>0)
	{
		if(DEBUG) printf("readCount = %d\n",readCount);
		write(1,buff,readCount); // print!
		if(sendto(socketHandler,buff,readCount,0,(struct sockaddr *)&socketClientInf,sizeof(struct sockaddr_in))==-1)
			perror("sendto KO");
	}
	close(socketHandler);
}
