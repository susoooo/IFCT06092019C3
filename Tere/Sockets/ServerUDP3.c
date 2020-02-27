/*2-Haz una calculadora remota utilizando un cliente y un servidor que se comuniquen via sockets.
Cuando el cliente envíe un 0 estará solicitando hacer una suma.
CUando envíe un 1 estará solicitando hacer un factorial.
En el caso de solicitar hacer una suma, el cliente enviará el primer número,
luego el segundo, y finalmente el servidor devolverá el resultado.
En el caso de solicitar hacer un factorial,
el cliente enviará el número del que quiere que el servidor le calcule el factorial
y el servidor le devolverá el resultado del cálculo.
	0 -> hago una suma
		me enviar el primer número
		me envia el segundo número
		devuelvo el resultado
	1 -> hago un factorial
		me envio el primer número
		devuelvo el resultado   */


#include<stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>

#define PORTNUMBER 12543


int main (void)
{

    int numero1;
    int numero2;
    int contador;
    int suma;
    int factorial;
    int operacion;
    int resultado;

    char buf[1024];
    int s, n, len;

    struct sockaddr_in name;

    numero1= 0;
    numero2= 0;
    suma= 0;
    factorial= 1;
    resultado= 0;

     /* Se crea el socket */

    s = socket (AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    name.sin_addr.s_addr = htonl (INADDR_ANY);
    len = sizeof(struct sockaddr_in);


    /* Se asigna direccin al socket */

    bind(s, (struct sockaddr *) &name, len);



 /* Recibimos datos */
   

    recvfrom(s, &operacion, sizeof(operacion),0,(struct sockaddr*) &name, &len);


	switch(operacion)
	{
		case 0: 
			recvfrom(s, &numero1, sizeof(numero1),0,(struct sockaddr*) &name, &len);
			sleep(2);
			recvfrom(s, &numero2, sizeof(numero2),0,(struct sockaddr*) &name, &len);

			suma= numero1 + numero2;
			
			printf("\nCalculando\n");
			sendto(s, &suma, sizeof(suma), 0, (struct sockaddr*) &name, len);

			
		break; 

		case 1:
			recvfrom(s, &numero1, sizeof(numero1),0,(struct sockaddr*) &name, &len);

			
			for(contador=numero1;contador>1;contador--)
        		{
            			factorial= factorial* contador;
        		}
			
			printf("\nCalculando\n");
			sendto(s, &factorial, sizeof(factorial), 0, (struct sockaddr*) &name, len);

		break;
		
				
		default: printf("ERROR\n"); //si no coincide  con 1, 2  saldría lo que ponga aquí
}


  /* Se cierra el socket */
    close(s);
    }






