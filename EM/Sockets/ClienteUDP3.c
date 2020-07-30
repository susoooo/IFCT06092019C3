/*2-Haz una calculadora remota utilizando un cliente y un servidor que se comuniquen via sockets. 
Cuando el cliente envíe un 0 estará solicitando hacer una suma. 
CUando envíe un 1 estará solicitando hacer un factorial. En el caso de solicitar hacer una suma, 
el cliente enviará el primer número, luego el segundo, y finalmente el servidor devolverá el resultado. 
En el caso de solicitar hacer un factorial, el cliente enviará el número del que quiere que el servidor le 
calcule el factorial y el servidor le devolverá el resultado del cálculo.
	0 -> hago una suma
		me enviar el primer número
		me envia el segundo número
		devuelvo el resultado
	1 -> hago un factorial
		me envio el primer número
		devuelvo el resultado*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>

#define PORTNUMBER 12543


int mensajeBienvenida() 
{
	printf("Hola soy Calcu+\n");
	printf("Version 1.0\n");
	printf("Programador por: Elvis CopyRight 2020\n");
	
	return(0);
}

int imprimirMenu()
{
	printf("\n----------Introduce la operacion-----------\n");
	printf("1-Suma\n");
	printf("2-Factorial\n ");
	printf("3-Salir\n");
	return(0);
}

int seleccionarOpcion()
{	
	int operacion;
	
	operacion= 0;
	
	printf("Numero de la operacion: ");
	scanf("%d",&operacion);
	return(operacion);
}

int mensajeDespedida()
{
	printf("--------------Hasta pronto-------------------\n");

}


int main(int argc, char *argv[])
{
	int n, s, len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;
	int opcion;
	int Resultado=0;
	int Factorial;
	mensajeBienvenida();
	int numero=0;
	
	
/* Nombre del host local. */
    gethostname(hostname, sizeof (hostname));

    /* Dirección de red del host local */
    hp = gethostbyname (hostname);

    /* Se crea el socket */
    s = socket (AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons (PORTNUMBER);

    /* Se asigna dirección IP */
    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);
	
do{	
	imprimirMenu();
	opcion=seleccionarOpcion();
	
	if(opcion==1)
	{
		
		 printf("Introduzca un numero ...: ");
    	scanf(" %d", &numero);
		sendto(s, &numero, sizeof(numero), 0, (struct sockaddr*) &name, len);
		sleep(2);
		printf("Introduzca un segundo numero ...: ");
    	scanf(" %d", &numero);
		sendto(s, &numero, sizeof(numero), 0, (struct sockaddr*) &name, len);
		sleep(2);
		recvfrom(s, &numero, sizeof(numero),0,(struct sockaddr*) &name, &len);
		printf("Resultado de la adicion es: %d",numero);
	}
	
	else
	{
		if(opcion==2)
		{
			
    
    printf("Introduzca No. para calcular el factorial ...: ");
    scanf(" %d", &Factorial);
    
	sendto(s, &Factorial, sizeof(Factorial), 0, (struct sockaddr*) &name, len);
			sleep(2);
	recvfrom(s, &Factorial, sizeof(Factorial),0,(struct sockaddr*) &name, &len);
    
    printf(" 1 = %d\n\n",Factorial);
		}
	}
}
	while(opcion!=3);
	mensajeDespedida();	  
	return(0);
}







