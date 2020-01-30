#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_t thread1, thmain;
pthread_attr_t attr;

struct datos
{
    float dato1;
    float dato2;
};

void *multiplicar (void *arg)
{
    int a,b;
    struct datos *p=(struct datos*)(arg);
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
    param.dato1=atoi(argv[1]);
    param.dato2=atoi(argv[2]);
	
	printf("hola");
    thmain = pthread_self();
    pthread_attr_init (&attr);
    printf("Soy la función main y voy a lanzar el thread \n");
	fflush (stdout);
    pthread_create (&thread1, NULL, multiplicar, (void*)&param);
    printf("Soy main: he lanzado el thread y termino\n");
    pthread_exit (NULL);
	
}

