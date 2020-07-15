#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
/*
Para compilar un código con hilos se hace con "lpthread" de la siguiente manera:
gcc -Wall -o Nombre_del_ejecutable Nombre_del_archivo.c -lpthread
*/
pthread_t thread1;
pthread_t thmain;
pthread_attr_t attr;

//TO_DO: definir la estructura necesaria
struct datos
{
	int dato1;
	int dato2;
};

void *multiplicar (void *arg)
{
	int a,b;
	struct datos *p;
	p= (struct datos *) (arg);
	pthread_t tid = pthread_self();
	
	a=(p->dato1);
	b=(p->dato2);
	printf("Soy el thread 1 y voy a multiplicar \n");
	printf("La multiplicación es %d\n",a*b);
	printf("Soy el thread 1 y he terminado de multiplicar \n");
	pthread_exit (NULL);
}

int main(int argc, char* argv[])
{
	struct datos param;
	printf("Introduce dos números\n");
	scanf("%s", argv);
	param.dato1=atoi(argv[1]);
	param.dato2=atoi(argv[2]);
	
	thmain = pthread_self();
	
	pthread_attr_init (&attr);
	printf("Soy la función main y voy a lanzar el thread \n");
	pthread_create (&thread1, NULL,multiplicar,(void *) &param);
	printf("Soy main: he lanzado el thread y termino\n");
	pthread_exit (NULL);
}

