#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>






#define PORTNUMBER 12543

void main(void)
{
    int numero1;
    int numero2;
    int contador;
    int suma;
    int factorial;
    int operacion;
    int resultado;

    char buf[1024];
    int s;
    int n;
    int len;
    int ns;
    struct sockaddr_in name;

    numero1= 0;
    numero2= 0;
    suma= 0;
    factorial= 1;
    resultado= 0;

    /* Se crea el socket */
    s = socket(AF_INET, SOCK_STREAM, 0);

    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);

    len = sizeof(struct sockaddr_in);

    /* Se publica la dirección y el puerto por el que se va a escuchar */
    bind (s, (struct sockaddr *) &name, len);

    /* Escucha de peticiones */
    listen(s, 5);

    /* Acepta conexiones */
    ns = accept(s, (struct sockaddr *) &name, &len);
    perror("accept");

    /* Se lee del socket hasta final del fichero*/
  recv(ns, operacion, sizeof(operacion), 0);

        switch(operacion)
	{
		case 0:
			recv(ns, &numero1, sizeof(numero1),0);
			sleep(2);

			recv(ns, &numero2, sizeof(numero2),0);

			suma= numero1 + numero2;

			printf("\nCalculando\n");
			send(s, &suma, sizeof(suma), 0);


		break;

		case 1:
			recv(ns, &numero1, sizeof(numero1),0);


			for(contador=numero1;contador>1;contador--)
        		{
            			factorial= factorial* contador;
        		}

			printf("\nCalculando\n");
			send(s, &factorial, sizeof(factorial), 0);

		break;


		default: printf("ERROR\n"); //si no coincide  con 1, 2  saldría lo que ponga aquí



    }

    /* Se cierra el socket */
    close(ns);
    close(s);
}
