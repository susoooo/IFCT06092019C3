/*
 * Socket Server
 */

#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
//#include <stdlib.h>
#define NUMBEROFTHEBEAST 12543
#define DEBUG 0

int main(void)
{
	char buff[1024];
	int socketHandler;
	int readCount;
	struct sockaddr_in socketInf;
	
	// Create socket
	socketHandler = socket(PF_INET,SOCK_DGRAM,0);
	socketInf.sin_family = AF_INET;
	socketInf.sin_port = htons(NUMBEROFTHEBEAST);
	socketInf.sin_addr.s_addr = htonl(INADDR_ANY);

	// Socket Address asignation
	if(bind(socketHandler,(struct sockaddr_in *) &socketInf, sizeof(struct sockaddr_in))==-1)
		perror("BIND KO");
	
	// Read socket until EOF
	while((readCount = recv(socketHandler,buff,sizeof(buff),0))>0)
	{
		if(DEBUG) printf("readCount = %d\n",readCount);
		write(1,buff,readCount); // print!
	}
	close(socketHandler);
}
