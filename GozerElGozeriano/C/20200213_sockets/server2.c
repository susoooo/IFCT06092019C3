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

int factorial(int);
int getIntFromSkt(int,uint32_t * ,struct sockaddr *,socklen_t *);

int main(void)
{
	//char buff[1024];
	int socketHandler;
	int readCount;
	struct sockaddr_in socketInf;
	struct sockaddr_in socketClientInf;
	socklen_t sockClLen;
	uint32_t nValue;
	int option;
	int exit;
	int n1, n2;
	
	exit = 0;
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
	while(!exit)
	{
		option=getIntFromSkt(socketHandler, &nValue, (struct sockaddr *) &socketClientInf,&sockClLen);
		if(DEBUG) printf("readCount = %d\n",readCount);
		switch(option)
		{
			case 1:
				printf("Opción escogida: Sumar.\n");
				n1=getIntFromSkt(socketHandler, &nValue, (struct sockaddr *) &socketClientInf,&sockClLen);
				if(DEBUG) printf("num1=%d\n",n1);
				n2=getIntFromSkt(socketHandler, &nValue, (struct sockaddr *) &socketClientInf,&sockClLen);
				nValue=htonl(n1+n2);
				break;
			case 2:
				printf("Opción escogida: Factorial.\n");
				n1=getIntFromSkt(socketHandler, &nValue, (struct sockaddr *) &socketClientInf,&sockClLen);
				nValue=htonl(factorial(n1));
				break;
			case 0:
				printf("Salir.\n");
				exit = 1;
		}
		/*******************************************
		 * Return result to client
		 *******************************************/
		if(sendto(socketHandler,&nValue,sizeof(uint32_t),0,(struct sockaddr *)&socketClientInf,sizeof(struct sockaddr_in))==-1)
			perror("sendto KO");
	}
	close(socketHandler);
}

int factorial(int num)
{
	if(num>1) return num*factorial(num-1);
	if(num==0) return 0;
	return 1;
}

int getIntFromSkt(int socket,uint32_t * buff,struct sockaddr *src_addr, socklen_t *addrlen)
{
	int readCount;
	readCount = recvfrom(socket,buff,sizeof(uint32_t),0,src_addr,addrlen);
	if(readCount<0)
		perror("recvfrom ko\n");
	return(ntohl(*buff));
}
