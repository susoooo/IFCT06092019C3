#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <dirent.h>
#include <pthread.h>
#include <signal.h>
#define PORTNUMBER 12543
// #define PORTNUMBER 33333
#define LISTEN_BACKLOG 5


// char usuarios[1000][1024];	
int **usuarios;
**usuarios=NULL;


void *conectar(void *s)
{
	char buf[1024]; /* Puntero al buffer donde se amacenarán los datos recibidos*/
	int sock= *(int*) s;
	int n=0;
	int fil;
	int col;
	int i;
	int j;
	
	
	printf("Now allocate with your NAME \n");
	fflush(stdout);
	/* Se lee del socket hasta el final del fichero */
		while((n=recv(sock, buf, sizeof(buf), 0))>0)
		{
		/* Se imprime lo que se va leyendo */
			perror("recv");
			write(1, buf, n);
			if(strncmp(buf, "NAME", 4)==0)
			{
				send(sock, "Servidor: Ok", 13, 0);
				perror("send");
				printf("User connected \n");
				fflush(stdout);
			}
			if(strcmp(buf, "MESSAGE")==0)
			{
				for(i=0;i<fil;i++)
				{
					for(j=0;j<col;j++)
					{
						usuarios[i][j]=;
					}
				}		
			}
			if(strncmp(buf, "GOODBYE", 7)==0)
				{
					send(sock, "Ok", 3, 0);
					close(sock);
					printf("User disconnected \n");
				}
			sleep(1);
			
		}
	return(NULL);
}

	int main(void)
	{
		int s; 
		int ns; /* Identificadores de socket para la recepción de datos*/
		int len; /* Longitud de los datos en bytes*/
		len = sizeof(struct sockaddr_in);
		struct sockaddr_in server;
		struct sockaddr_in client;
		matrix=(int **) malloc(fil*sizeof(int*));
		if(matrix==NULL)
		{
		perror("");	
		}
		
	/* Se crea el socket */
		s=socket(PF_INET,SOCK_STREAM,0);
		if(s==-1)
		{
			perror("Could not create server socket");
			exit(1);
		}
		printf("Server socket created\n");
		fflush(stdout);
		memset(&server, 0, len); /* Clear structure */
		server.sin_family = AF_INET;
		server.sin_port = htons(PORTNUMBER);
		server.sin_addr.s_addr = htonl(INADDR_ANY);

		
		if(bind(s, (struct sockaddr *) &server, len)<0)
		{
			perror("\n Error: Bind Failed \n");
			close(s);
			exit(1);
		}
		printf("Bind created\n");
		
	/* Escucha de peticiones */
		if(listen(s, LISTEN_BACKLOG)<0)
		{
			perror("\n Error: Listen Failed \n");
			exit(1);			  
		}
	    printf("Listen created\n");  
		
		/* Aceptar conexiones */
		while(1)
		{
			ns= accept(s, (struct sockaddr *) &client, (socklen_t*) &len);
			if(ns<0)
			{
				perror("\n Error: Accept client Failed\n");
				exit(1);
			}
			printf("Client accepted\n");	

			pthread_t hid;
			if((pthread_create(&hid, NULL, conectar, (void*) &ns))<0)
			{
				perror("Could not create thread\n");
				exit(1);
			}
			printf("Thread created\n");
			pthread_join(hid,NULL);
		}
    exit(0);
	}
