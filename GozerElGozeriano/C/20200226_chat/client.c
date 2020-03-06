/****************************
 * Client
 ****************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <signal.h>
#include "incldef.h"
#define PORT 1666
#define DEBUG 1

void error(const char *msg);
int CreateSocket(void);
int ConnectSocket(int);
//int SendSocket(int,char*,int);
void writeText(char *);
void closeConn(int);
//void waitConfirm(void);
void waitConfirm(const char *);

int sockfd;

int main(int argc, char *argv[])
{
	int rwReturn;
	//struct sockaddr_in serv_addr;
	char nickname[MAXNICK];
	char message[MESSAGESIZE];
	//struct hostent *server;

	char buffer[BUFFERSIZE];

	sockfd = CreateSocket();
	if(sockfd < 0) error("ERROR opening socket");
	signal(SIGINT, closeConn); // Close connection before interrupt
    if(ConnectSocket(sockfd)<0) error("ERROR connecting");

    /* My Nickname */
    printf("Introduce tu nickname: ");
	writeText(nickname);

	/* Send Hello to server */
	bzero(buffer,BUFFERSIZE);
	strcat(buffer, NICKMSG);
	strcat(buffer, nickname);
	rwReturn = write(sockfd,buffer,BUFFERSIZE);
	if(rwReturn<0) error("ERROR writing to socket");
	/* End send Hello */
	
	/* Get connection ok */
	waitConfirm("Connection linked.\n");
	/* End */
	
	while(1)
	{
		/* Send text */
		printf("Mensaje: ");
		writeText(message);
		bzero(buffer,BUFFERSIZE);
		strcat(buffer, MSGMSG);
		strcat(buffer, message);
		rwReturn = write(sockfd,buffer,BUFFERSIZE);
		//rwReturn=SendSocket(sockfd,buffer,BUFFERSIZE); /*No diff*/ 
		if(rwReturn<0) error("ERROR writing to socket\n");
		/* Wait send ok from server */
		waitConfirm("");
	}
    close(sockfd);
    return(0);
}

void error(const char *msg)
{
    perror(msg);
    exit(0);
}

int CreateSocket(void)
{
	return(socket(AF_INET, SOCK_STREAM, 0));
}

int ConnectSocket(int hSocket)
{
	char hostname[64];
	struct hostent *hp;
	struct sockaddr_in remote;
	gethostname(hostname,sizeof(hostname));
	hp=gethostbyname(hostname);
	
	remote.sin_family = AF_INET;
	remote.sin_port = htons(PORT);

	// IP Address assignation
	memcpy(&remote.sin_addr,hp->h_addr_list[0],hp->h_length);
	
	return(connect(hSocket,(struct sockaddr *)&remote,sizeof(struct sockaddr_in)));
}

/*int SendSocket(int hSocket, char* buff, int lenbuff)
{
	int retVal;
	retVal=-1;
	return(send(hSocket,buff,lenbuff,0));
}*/

void writeText(char * text)
{
	//fgets(text,sizeof(text),stdin); /* KO: Divide el mensaje */
	scanf("%s",text);
	if(text[strlen(text)-1]=='\n')
		text[strlen(text)-1]='\0';
}

void closeConn(int snyl)
{
	close(sockfd);
	exit(0);
}

void waitConfirm(const char * msg)
{
	char buffer[BUFFERSIZE];
	if(read(sockfd,buffer,BUFFERSIZE)<0)
		error("ERROR reading socket");
	if(DEBUG) printf("%s\n",buffer);
	if(strcmp(buffer,REPLYMSG)!=0)
		printf("Bad return\n");
	else
		printf("%s",msg);
}
