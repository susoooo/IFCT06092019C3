#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct argumentos
	{
		int rango[10];
		int resultado;
	};
	
void *suma(void *rango)
{
    struct argumentos * pepe;
    int i=0;
    int suma;
    suma=0;
    
    pepe = (struct argumentos*) rango;
	
	for(i=0;i<10;i++)
	{
		suma=suma+pepe->rango[i];
	}
	
	printf("\tThread Suma : %d\n",suma);
	pepe->resultado=suma;
	pthread_exit(0);	
}

int main(int argc, char argv[])
{
	pthread_attr_t attr;
	pthread_t thread;
	int contador;
	
	struct argumentos A1;
	for(contador=0; contador<10; contador++)
		{
			A1.rango[contador]=contador+1;
		}
	A1.resultado=0;	
	
	pthread_attr_init(&attr);
	pthread_create(&thread, NULL, suma, (void*)&A1);
	pthread_join(thread, NULL);
	printf("\nSuma en Prog. Principal: %d\n",A1.resultado);
	return(0);
}
