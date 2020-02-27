/***************************
 * Server
 ***************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <pthread.h>
#include "incldef.h"
#define PORT 1666
#define MAXCONNECTIONS 32
#define MAXMESSAGES 128
#define DEBUG 1

void error(const char *);
void registerClient();
int startsWith(const char *, const char *);
void * connectionHandler(void * );
void closeConn(int);

int sockfd;

/*struct message
{
	char autor[MAXNICK];
	char msg[128];
};*/

/*struct clientnfo
{
	char nick[MAXNICK];
	struct message msgs[MAXMESSAGES];
};*/

struct contn
{
	int freeslot;
	pthread_t t;
};

int main(int argc, char *argv[])
{
	int newsockfd;
	socklen_t clilen;
	char buffer[BUFFERSIZE];
	struct sockaddr_in serv_addr, cli_addr;
	int rwReturn;
	//struct clientnfo clientsnfo[MAXCONNECTIONS];
	struct contn connections[MAXCONNECTIONS];
	int connection;
	int connected;
	
	connection=0;
	connected=0;
	rwReturn=0;
	
	signal(SIGINT, closeConn);
	
	/* Initialize conections */
	for(connection=0;connection<MAXCONNECTIONS;connection++)
		connections[connection].freeslot = 1;
	
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd < 0) error("ERROR opening socket");
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(PORT);
	if(bind(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
		error("ERROR on binding");
	listen(sockfd,5);
	clilen = sizeof(cli_addr);
	while(newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr,&clilen))
	{
		if(DEBUG) printf("ACCEPT\n");
		if(newsockfd < 0) error("ERROR on accept");
		connection=0;
		connected=0;
		while(!connected && connection<MAXCONNECTIONS)
		{
			if(connections[connection].freeslot)
			{
				connections[connection].freeslot = 0;
				connected=1;
				if(pthread_create(&connections[connection].t, NULL, connectionHandler, (void *)&newsockfd)<0)
					error("Could not create thread");
			}
			else
				connection++;
		}
		sleep(1);
	}
	/*
	if(DEBUG) printf("Here is the message: %s\n",buffer);
	rwReturn = write(newsockfd,"I got your message",18);
	if (rwReturn < 0) error("ERROR writing to socket");
	*/
	close(newsockfd);
	close(sockfd);
	return(0); 
}

void error(const char *msg)
{
    perror(msg);
    exit(1);
}

int startsWith(const char *pre, const char *str)
{
    size_t lenpre = strlen(pre),
           lenstr = strlen(str);
    return lenstr < lenpre ? 0 : memcmp(pre, str, lenpre) == 0;
}

void * connectionHandler(void * socket)
{
	if(DEBUG) printf("ACCEPT * \n");
	int rwReturn;
	char buffer[BUFFERSIZE];
	int sockfd;
	char name[MAXNICK];
	char message[MESSAGESIZE];
	
	sockfd = *(int*)socket;
	bzero(buffer,BUFFERSIZE);
	while(rwReturn = read(sockfd,buffer,BUFFERSIZE)>0)
	{
		if(startsWith(NICKMSG,buffer))
		{
			strcpy(name,buffer+strlen(NICKMSG));
			printf("Nuevo cliente: %s\n",name);
			bzero(buffer,BUFFERSIZE);
			strcpy(buffer,REPLYMSG);
			rwReturn = write(sockfd,buffer,BUFFERSIZE);
			if(rwReturn<0) error("ERROR writing to socket");
		}
		else
			if(startsWith(MSGMSG,buffer))
			{
				strcpy(message,buffer+strlen(MSGMSG));
				printf("%s says: %s\n",name);
			}
		}
	}
	if(rwReturn < 0) error("ERROR reading from socket");
	if(rwReturn == 0) printf("Client %s disconnected\n", name);
	close(sockfd);
}

void registerClient()
{
}

void closeConn(int snyl)
{
	close(sockfd);
	exit(0);
}
