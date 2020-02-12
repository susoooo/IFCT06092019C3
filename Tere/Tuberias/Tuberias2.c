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

	int fac;
	char caracteres[500];
	int fildes[2];

	pipe(fildes);



/*preguntar por pantalla el número*/

printf("Ingresa numero para calcular su factorial:  ");
scanf("%d",&fac);





int eleccion(int N, int R)
{
int contador;


contador=0;
fac=1;


for(contador=N;contador>1;contador--)
	{
	fac= fac*contador;
	}
printf("El factorial de %d es: %d \n", N,fac);
