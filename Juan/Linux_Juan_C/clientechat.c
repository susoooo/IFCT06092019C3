#include <sys/types.h>
#include <sys/socket.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h> /* gethostbyname() necesita esta cabecera */


#define PORTNUMBER 12543

	int main(void)
	{
		int n;
		int s;
		int len;
		int contador;
		char bufdebug[1024];
		char buf[1024];
		char hostname[64];
		struct hostent *hp;
		struct sockaddr_in server_addr;

		memset(buf,0,1024);
		memset(bufdebug,0,1024);
		/* nombre del host local*/
		gethostname(hostname,sizeof(hostname));

		/* dirección de red del host local*/
		hp = gethostbyname(hostname);

		/* se crea el socket */
		s=socket(PF_INET, SOCK_STREAM, 0);
		server_addr.sin_family = AF_INET;
		server_addr.sin_port = htons(PORTNUMBER);
		/* copiamos la dirección IP del equipo al que nos vamos a conectar */
		memcpy(&server_addr.sin_addr, hp->h_addr_list[0], hp->h_length);
		len = sizeof(struct sockaddr_in);
		
		/* Se conecta al servidor */
		connect(s, (struct sockaddr *) &server_addr, len);
		
		/* Se leen caracteres del teclado */
		while((n=read(0, buf, sizeof(buf)))>0)
		{
			/* Se copian los datos al socket, envia al servidor */
			send(s, buf, n, 0);
			printf("Debug:: Mensaje enviado\n");
			
			if(strcmp(buf,"GOODBYE\n")==0)
			   {
				printf("Debug:: Goodbye encontrado\n");
				fflush(stdout);
	   			sleep(1);
			/* Se reciben datos del socket y se copian al buffer, se recibe del servidor */
				n = recv(s, buf, sizeof(buf), 0);
				if(strcmp(buf,"Ok")==0)
				   {
					printf("Debug:: Goodbye + ok encontrado\n");
					fflush(stdout);
   					printf("Desconectado del servidor \n");
					close(s);
					exit(1);
				   }
			   }
			sleep(1);
			/* Se reciben datos del socket y se copian al buffer */
			n = recv(s, buf, sizeof(buf), 0);
			sleep(1);
			/* Se escriben los datos del buffer en pantalla */
			write(1, buf, n);
			/*limpio el buffer para recibir el siguiente mensaje*/
			memset(buf,0,1024);
			/*
			printf("\nbuf:\n");
			for(contador=0;contador<strlen(buf);contador++)
			{printf("%X",buf[contador]);}
			printf("\n");

 			printf("bufDEBUG:\n");
			memset(bufdebug,0,1024);
			strcpy(bufdebug,"Desconecta");
			for(contador=0;contador<strlen(bufdebug);contador++)
			{printf("%X",bufdebug[contador]);}
			printf("\n");
			
			if(strncmp(buf, "Servidor: Desconecta",21)==0)
				{
					printf("Desconectado del servidor \n");
					fflush(stdout);
					close(s);
					exit(1);
				}
			*/
		}
		/* Se cierra el socket */
			
	}
