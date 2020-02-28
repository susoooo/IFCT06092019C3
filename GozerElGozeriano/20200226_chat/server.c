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
#define DEBUG 1

void error(const char * str);
void registerClient(int socket);
int startsWith(const char *, const char *);
int endsWith(const char * str, const char * suffix);
void * connectionHandler(void * );
void closeConn(int);
void sendOK(int);
void scheduleString(const char * str, int sender);


struct mssg
{
	int ready;
	char msg[255];
};

struct contn
{
	int freeslot;
	pthread_t t;
	struct mssg messages[MAXMESSAGES];
};

struct clientnfo
{
	int socket;
	int connection;
};

int sockfd;
struct contn connections[MAXCONNECTIONS];


int main(int argc, char *argv[])
{
	int connection;
	int newsockfd;
	socklen_t clilen;
	char buffer[BUFFERSIZE];
	struct sockaddr_in serv_addr, cli_addr;
	int rwReturn;
	//struct clientnfo clientsnfo[MAXCONNECTIONS];

	rwReturn=0;
	
	signal(SIGINT, closeConn);
	
	/* Iniciar conection */
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
	printf("Server ready.\n");
	while(newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr,&clilen))
	{
		if(newsockfd < 0) error("ERROR on accept");
		registerClient(newsockfd);
		
		sleep(1);
	}
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

int endsWith(const char * str, const char * suffix)
{
	int str_len = strlen(str);
	int suffix_len = strlen(suffix);

	return (str_len >= suffix_len) && (0 == strcmp(str + (str_len-suffix_len), suffix));
}

void * connectionHandler(void * clinfo)
{
	/*******************************************************************
	 * thread de control del cliente
	 ******************************************************************/
	int rwReturn;
	char buffer[BUFFERSIZE];
	//int sockfd;
	char name[MAXNICK];
	char message[MESSAGESIZE];
	int doit;
	struct clientnfo clntnfo;
	printf("OK");
	doit = 1;
	clntnfo = *(struct clientnfo*)clinfo;
	//sockfd = *(int*)socket; /* pre struct de parametro */
	while(doit)
	{
		bzero(buffer,BUFFERSIZE);
		bzero(message,MESSAGESIZE);
		rwReturn = read(clntnfo.socket,buffer,BUFFERSIZE)>0;
		if(rwReturn < 0) error("ERROR reading from socket");
		else
			if(rwReturn == 0)
			{
				printf("Client %s disconnected.\n", name);
				doit=0;
			}
			else
				if(startsWith(NICKMSG,buffer))
				{
					strcpy(name,buffer+strlen(NICKMSG));
					printf("Nuevo cliente: %s\n",name);
					sendOK(clntnfo.socket);
				}
				else
					if(startsWith(MSGMSG,buffer))
					{
						strcat(message,name);
						strcat(message, " says: ");
						strcat(message,buffer+strlen(MSGMSG));
						strcat(message, "\n");
						printf("%s",message);
						scheduleString(message,clntnfo.connection);
						sendOK(clntnfo.socket);
						
						/* Before save all string
						strcat(message,buffer+strlen(MSGMSG));
						printf("%s says: %s\n",name,message);
						scheduleString()
						sendOK(sockfd);*/
					}
					else
						if("UPDATE MESSAGES")
	}
	close(clntnfo.socket);
}

void registerClient(int socket)
{
	int connection;
	int connected;
	struct clientnfo clinfo;
	
	connection=0;
	connected=0;
	while(!connected && connection<MAXCONNECTIONS)
	{
		if(connections[connection].freeslot)
		{
			connections[connection].freeslot = 0;
			connected=1;
			clinfo.socket=socket;
			clinfo.connection=connection;
			if(pthread_create(&connections[connection].t, NULL, connectionHandler, (void *)&clinfo)<0)
				error("Could not create thread");
		}
		else
			connection++;
	}
}

void closeConn(int snyl)
{
	close(sockfd);
	exit(0);
}

void sendOK(int socket)
{
	char buffer[BUFFERSIZE];
	bzero(buffer,BUFFERSIZE);
	strcpy(buffer,REPLYMSG);
	if(write(socket,buffer,BUFFERSIZE)<0)
		error("ERROR writing to socket");
}

void scheduleString(const char * str, int sender)
{
	/*******************************************************************
	 * Inserta el mensaje en cada cliente.
	 * Si la cola está llena mueve los mensajes y lo coloca al final
	 * eliminando el primero.
	 ******************************************************************/
	int connection;
	int message;
	int saved;
	saved=0;
	for(connection=0;connection<MAXCONNECTIONS;connection++)
	{
		if(!connections[connection].freeslot && connection != sender)
		{
			for(message=0;message<MAXMESSAGES;message++)
				if(!connections[connection].messages[message].ready && !saved)
				{
					strcpy(connections[connection].messages[message].msg,str);
					connections[connection].messages[message].ready = 1;
					saved=1;
				}
			if(!saved)
			{
				for(message=0;message<MAXMESSAGES-1;message++)
					strcpy(connections[connection].messages[message].msg,connections[connection].messages[message+1].msg);
				strcpy(connections[connection].messages[MAXMESSAGES-1].msg,str);
			}
		}
		saved=0;
	}
}
