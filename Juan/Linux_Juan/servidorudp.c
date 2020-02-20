#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>


#define PORTNUMBER 12543

	int main(void)
	{
		char buf[1024]; /* Puntero al buffer donde se amacenarán los datos recibidos*/
		int sockfd; /* Identificador de socket para la recepción de datos*/
		int n;
		int len; /* Longitud de los datos en bytes*/
		struct sockaddr_in name;
	memset(buf, 0, sizeof(buf));
		/* Se crea el socket */
		sockfd=socket(PF_INET,SOCK_DGRAM,0);
		name.sin_family = AF_INET;
		name.sin_port = htons(PORTNUMBER);
		name.sin_addr.s_addr = htonl(INADDR_ANY);
		len = sizeof(struct sockaddr_in);
		
		/* Se asigna dirección al socket */
		
		bind(sockfd, (struct sockaddr *) &name, len);
		
		/* Se lee del socket hasta el final del fichero*/	
		while((n=recvfrom(sockfd, buf, sizeof(buf), 0, (struct sockaddr*) &name, &len))>0)
		{
			// Se imprimen los datos leídos
			write(1, buf, n);
			// Se envían los datos de vuelta
			sendto(sockfd, buf, n, 0, (struct sockaddr*) &name,len);
			sleep(2);
		}
		
		// Se cierra el socket
			close(sockfd);
	}
