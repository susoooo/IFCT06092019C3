/*
 * Hilos. Ejercicio 2.
 * Realizar un programa que cree un thread que suma los valores que se le pasan
 * como parámetro en un array de 10 enteros y cuando termina devuelve el valor
 * calculado.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

struct sumatorio
{
	int toSuma[10];
	int resultado;
};

void *suma(void *args)
{
	int contador;
	struct sumatorio *p;
	
	p = (struct sumatorio *)args;
	p->resultado=0;
	for(contador=0;contador<10;contador++)
		p->resultado=p->resultado+p->toSuma[contador];
	pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
	struct sumatorio asumar;
	int contador;
	pthread_t sumar;
	
	for(contador=0;contador<10;contador++)
		asumar.toSuma[contador]=contador;
	pthread_create(&sumar,NULL,suma,(void *)&asumar);
	pthread_join(sumar,NULL);
	printf("Total: %d\n",asumar.resultado);
	return(0);
}
