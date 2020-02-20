#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf[1024];
    int s, n, len;
	int opcion;
	int numero1=0;
	int numero2=0;
	int Factorial=1; 
	int suma=0; 
	int contador=0;
	int Resultado; 

    struct sockaddr_in name;

    /* Se crea el socket */

    s = socket (AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    name.sin_addr.s_addr = htonl (INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    /* Se asigna direccin al socket */

    bind(s, (struct sockaddr *) &name, len);

    /* Se lee del socket hasta final del fichero */
 	
	recvfrom(s, &opcion, sizeof(opcion),0,(struct sockaddr*) &name, &len);

	switch(opcion)
	{
	
		case 1: 
			recvfrom(s, &numero1, sizeof(numero1),0,(struct sockaddr*) &name, &len);
			sleep(2);
			recvfrom(s, &numero2, sizeof(numero2),0,(struct sockaddr*) &name, &len);
			
			suma= numero1+numero2;
			sendto(s, &suma, sizeof(suma), 0, (struct sockaddr*) &name, len);
		break;	 
			
		case 2: 
			recvfrom(s, &Factorial, sizeof(Factorial),0,(struct sockaddr*) &name, &len);
			
			Resultado = 1;
    
	while(Factorial > 1) 
	{
       Resultado *= Factorial;
       /*printf(" %ld x",Factorial);*/
       Factorial--;
    }
			sendto(s, &Resultado, sizeof(Resultado), 0, (struct sockaddr*) &name, len);
		break;
		default:printf("Error\n");
			
	
	}


    close(s);
    }
