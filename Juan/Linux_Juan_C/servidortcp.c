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
		int s; /* Identificador de socket para la recepción de datos*/
		int n;
		int ns;
		int len; /* Longitud de los datos en bytes*/
		struct sockaddr_in name;
		struct sockaddr_in client;
		
	/* Se crea el socket */
		s=socket(PF_INET,SOCK_STREAM,0);
		name.sin_family = AF_INET;
		name.sin_port = htons(PORTNUMBER);
		name.sin_addr.s_addr = htonl(INADDR_ANY);
		len = sizeof(struct sockaddr_in);
		
		bind(s, (struct sockaddr *) &name, len);
		
	/* Escucha de peticiones */
		listen(s, 5);
		
	/* Aceptar conexiones */
		ns= accept(s, (struct sockaddr*) &client, &len);
	/* Se lee del socket hasta el final del fichero */
		while((n=recv(ns, buf, sizeof(buf), 0))>0)
		{
		/* Se imprime lo que se va leyendo */
			write(1, buf, n);
			// Se envían los datos de vuelta
			send(ns, buf, n, 0, (struct sockaddr*) &client,len);
			sleep(2);
		}
			/* Se cierran las conexiones */
		close(ns);
		close(s);
	}
