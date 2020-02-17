#include <stdio.h>
#include <netdb.h>   /* gethostbyname() necesita esta cabecera */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>


#define PORTNUMBER 12543

	int main(void)
	{
		int s;
		int n;
		int len;
	    char buf[1024];
		char hostname[64];
		struct hostent *hp;
		struct sockaddr_in name;
	
		/* Nombre del host local */
		gethostname(hostname, sizeof(hostname));
		
		/* Dirección de red del host local */
		hp = gethostbyname(hostname);

		/* Se crea el socket */
		s= socket(PF_INET, SOCK_DGRAM, 0);
		name.sin_family = AF_INET;
		name.sin_port = htons(PORTNUMBER);
		
		/* Se asigna dirección IP */
		memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
		len = sizeof(struct sockaddr_in);
		
		/* Se leen los carateres del teclado */
		while((n=read(0,buf,sizeof(buf)))>0)
		
		/* Se copian los datos al socket */
		sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
			
		/* Se cierra el socket */
		close(s);
	}