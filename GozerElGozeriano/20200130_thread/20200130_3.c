/*
Hilos. Ejercicio 3.
Realizar un programa que declare una función multiplicar y que le pase como parámetros 2
números. A continuación el programa principal debe preparar los parámetros del thread y lanzar 1
thread con multiplicar, escribir su propiedad identidad y terminar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct operation
{
	float x;
	float y;
	float resultado;
};

void *multiplicar(void *args)
{
	struct operation *p;
	p=(struct operation *)args;
	p->resultado=p->x*p->y;
	pthread_exit(NULL);
}

float main(int argc, char * argv[])
{
	struct operation newOper;
	newOper.x=atof(argv[1]);
	newOper.y=atof(argv[2]);
	pthread_t h;
	
	pthread_create(&h,NULL,multiplicar,(void *)&newOper);
	pthread_join(h,NULL);
	printf("%f\n",newOper.resultado);
	return(0);
}

