/*
 * Socket Client
 * 2-Haz una calculadora remota utilizando un cliente y un servidor que se comuniquen via sockets. Cuando el cliente envíe un 0 estará solicitando hacer una suma. CUando envíe un 1 estará solicitando hacer un factorial. En el caso de solicitar hacer una suma, el cliente enviará el primer número, luego el segundo, y finalmente el servidor devolverá el resultado. En el caso de solicitar hacer un factorial, el cliente enviará el número del que quiere que el servidor le calcule el factorial y el servidor le devolverá el resultado del cálculo.
	0 -> hago una suma
		me enviar el primer número
		me envia el segundo número
		devuelvo el resultado
	1 -> hago un factorial
		me envio el primer número
		devuelvo el resultado
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

void printMenu(void);

int main(void)
{
	char hostname[64];
	int socketHandler;
	struct hostent *hp;
	struct sockaddr_in socketInf;
	int option;
	int num;
	uint32_t nToSend;
	int readCount;
	
	option=0;
	num=0;
	
	printf("Calculadora remota. Cliente.\n");
	
	gethostname(hostname,sizeof(hostname));
	hp=gethostbyname(hostname);
	
	// Create socket
	socketHandler = socket(PF_INET,SOCK_DGRAM,0);
	socketInf.sin_family = AF_INET;
	socketInf.sin_port = htons(NUMBEROFTHEBEAST);

	// IP Address assignation
	memcpy(&socketInf.sin_addr,hp->h_addr_list[0],hp->h_length);
	
	do
	{
		printMenu();
		scanf("%d",&option);
		nToSend=htonl(option);
		
		if(sendto(socketHandler,&nToSend,sizeof(uint32_t),0,(struct sockaddr *)&socketInf,sizeof(struct sockaddr_in))==-1)
			perror("sendto KO");
		switch(option)
		{
			case 1: // Sumar
				printf("Número 1 a sumar: ");
				scanf("%d",&num);
				nToSend=htonl(num);
				if(sendto(socketHandler,&nToSend,sizeof(uint32_t),0,(struct sockaddr *)&socketInf,sizeof(struct sockaddr_in))==-1)
					perror("sendto KO");
				printf("Número 2 a sumar: ");
				scanf("%d",&num);
				nToSend=htonl(num);
				if(sendto(socketHandler,&nToSend,sizeof(uint32_t),0,(struct sockaddr *)&socketInf,sizeof(struct sockaddr_in))==-1)
					perror("sendto KO");
				break;
			case 2: // factorial
				printf("Número a calcular: ");
				scanf("%d",&num);
				nToSend=htonl(num);
				if(sendto(socketHandler,&nToSend,sizeof(uint32_t),0,(struct sockaddr *)&socketInf,sizeof(struct sockaddr_in))==-1)
					perror("sendto KO");
				break;
		}
		readCount = recv(socketHandler,&nToSend,sizeof(uint32_t),0);
		if(readCount<0)
			perror("recvfrom ko\n");
		printf("Resultado: %d\n",ntohl(nToSend));

	}while(option>0);
	close(socketHandler);
}

void printMenu(void)
{
	printf("Cálculo a realizar?\n");
	printf("\t1) Suma.\n");
	printf("\t2) Factorial.\n");
	printf("\t0) Salir.\n");
	printf("Opción: ");
}
