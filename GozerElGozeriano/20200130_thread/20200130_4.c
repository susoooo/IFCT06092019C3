/*
Hilos. Ejercicio 4
Realizar un programa que sume valores en concurrencia usando threads. El programa declara una
variable global suma_total y un procedimiento que sumar que incrementa suma_total en 100 usando
una variable local intermedia, se duerme un segundo y asigna la variable interna a suma_total. A
continuación el principal crea 10 threads sumar, espera a que terminen, imprime el valor de suma
calculado y termina.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#define THRNUM 10

int suma_total = 0;

void * sumar(void * args)
{
	int result;
	result = suma_total+100;
	sleep(1);
	suma_total=result;
	pthread_exit(NULL);
}

int main(int argc, char * argv[])
{
	pthread_t h[THRNUM];
	int contador;
	
	for(contador=0;contador<THRNUM;contador++)
		pthread_create(&h[contador],NULL,sumar,NULL);
		
	for(contador=0;contador<THRNUM;contador++)
		pthread_join(h[contador],NULL);
		
	printf("%d\n",suma_total);
}
