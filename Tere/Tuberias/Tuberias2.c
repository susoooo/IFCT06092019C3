/*2.Escribir un programa que cree un proceso para calcular un factorial.
El programa preguntará por pantalla el número del cual se quiere calcular el factorial,
lo enviará por una tubería al proceso que ha creado,
y esperará a que este le envía de vuelta el resultado del cálculo.
 Tras recibirlo, el programa imprimirá el resultado del cálculo.*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void main()
{

	int numero;
	int factorial;
	int contador;

	int fildes[2];

	contador=0;
	factorial=1;

	pid_t idProceso;

	pid_t idProceso2;

	pipe(fildes);

	idProceso = fork();

	switch(idProceso)
	{

		case-1: perror ("No se puede lanzar proceso");
			break;

		 case 0:

		 /*preguntar por pantalla el número*/

            printf("Ingresa numero para calcular el factorial:  ");
            scanf("%d",&numero);

			write(fildes[1], &numero, sizeof(numero));

			sleep(1);

			read(fildes[0], &factorial, sizeof(factorial));

            printf("\nEl factorial de %d es: %d \n", numero,factorial);


			exit(0);
			break;

		default:
			read(fildes[0], &numero, sizeof(numero));

			for(contador=numero;contador>1;contador--)
            {
            factorial= factorial* contador;
            }
             write(fildes[1], &factorial, sizeof(factorial));

           /* printf("El factorial de %d es: %d \n", numero,factorial);*/

	}



}






