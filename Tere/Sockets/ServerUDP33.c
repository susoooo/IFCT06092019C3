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



    char buf[1024];
    int s, n, len;

    struct sockaddr_in name;

    numero1= 0;
    numero2= 0;
    suma= 0;
    factorial= 1;

     /* Se crea el socket */

    s = socket (AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    name.sin_addr.s_addr = htonl (INADDR_ANY);
    len = sizeof(struct sockaddr_in);


    /* Se asigna direccin al socket */

    bind(s, (struct sockaddr *) &name, len);





    recvfrom(s, buf, sizeof(buf),0);

    suma= numero1 + numero2;



    for(contador=numero1;contador>1;contador--)
        {
            factorial= factorial* contador;
        }




    /* Se lee del socket hasta final del fichero */
    while ((n = recvfrom(s, buf, sizeof(buf),0, (struct sockaddr*) &name, &len))>0)
{



  /* Se imprime los datos leídos */

    write (1, buf, n);




     /* Se copian los datos al socket */
sendto(s, buf, n, 0, (struct sockaddr*) &name, len);

}



  /* Se cierra el socket */
    close(s);
    }










/*
main()
{
int numero1;
int numero2;
int contador;
int suma;
int factorial;
int operacion;


numero1= 0;
numero2= 0;
suma= 0;
factorial= 1;



printf("Introduce la operacion\n");
printf("0 - Suma\n");
printf("1 - Factorial\n ");


printf("Numero de la operacion: ");
scanf("%d",&operacion);


do
{
    if(operacion==0)
    {
        printf("Escriba el primer numero\n");
        scanf("%d",&numero1);


        printf("Escriba el segundo numero\n");
        scanf("%d",&numero2);

        suma= numero1 + numero2;

        printf("La suma es: %d\n",suma);
    }

   if(operacion==1)
    {
        printf("Escriba el primer numero\n");
        scanf("%d",&numero1);


        for(contador=numero1;contador>1;contador--)
        {
            factorial= factorial* contador;
        }


        printf("El factorial es: %d\n",factorial);
    }
}

while(operacion!=0 && operacion!=1);

}
*/

