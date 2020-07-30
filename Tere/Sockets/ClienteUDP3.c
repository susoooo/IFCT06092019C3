#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>

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


    int n, s, len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    numero1= 0;
    numero2= 0;
    suma= 0;
    factorial= 1;
    resultado=0;

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


     /* Se copian los datos al socket */
   

    printf("Introduce la operacion\n");
    printf("0 - Suma\n");
    printf("1 - Factorial\n ");


    printf("Numero de la operacion: ");
    scanf("%d",&operacion);
 
    sendto(s, &operacion, sizeof(operacion), 0, (struct sockaddr*) &name, len);

    do
    {
        if(operacion==0)
        {
            printf("Escriba el primer numero\n");
            scanf("%d",&numero1);
		
	    sendto(s, &numero1, sizeof(numero1), 0, (struct sockaddr*) &name, len);

	
            printf("Escriba el segundo numero\n");
            scanf("%d",&numero2);


	    sendto(s, &numero2, sizeof(numero2), 0, (struct sockaddr*) &name, len);
		
	    sleep(2);
		
            recvfrom(s, &suma, sizeof(suma),0,(struct sockaddr*) &name, &len);

	printf("La suma es: %d\n",suma);

        }

        if(operacion==1)
        {
            printf("Escriba el primer numero\n");
            scanf("%d",&numero1);
	  sendto(s, &numero1, sizeof(numero1), 0, (struct sockaddr*) &name, len);
 	   sleep(2);
		
            recvfrom(s, &factorial, sizeof(factorial),0,(struct sockaddr*) &name, &len);
		
  	printf("El factorial es: %d\n",factorial);
          
    	}

    }
	while(operacion!=0 && operacion!=1);

}


