#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * thread_function(void *arg) 
{
	printf("Creado el hilo imprimir\n");
	int i;
	for ( i=0 ; i < 3 ; i++ ) {
	printf("Thread says hi!\n");
	sleep(1);
	printf("Duerme 1 segundo\n");
	}
	printf("Thread exists\n");
	return NULL;
}

int main(int argc, char ** argv) 
{

	pthread_t mihilo;
	printf("Creando un nuevo hilo\n");
	if (pthread_create(&mihilo, NULL, thread_function, NULL) )
	{
	printf("Error creando el hilo.");
	abort();
	}

	printf("Waiting on join\n");
//TO_DO: controlar el error con el JOIN
	pthread_join(mihilo, NULL);
	printf("Fin\n");
exit(0);
}
