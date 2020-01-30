/*
*  Hilos. Ejercicio 1.
*  Realizar un programa que cree un thread llamado “imprimir” que imprime 3
*  veces el mensaje: “Thread says hi!”, duerme 1 segundo entre cada mensaje
*  y luego indica que termina. El programa padre del thread debe esperar
*  hasta que termine el thread hijo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *imprimir(void *arg)
{
	int contador;
	for(contador=0;contador<3;contador++)
	{
		printf("Thread says hi!\n");
		sleep(1);
	}
	printf("Thread says bye!\n");
	return NULL;
}


int main(int argc, char *argv[])
{
	pthread_t h1;
	
	pthread_create(&h1,NULL,imprimir,NULL);
	pthread_join(h1,NULL);
	
	exit(0);
}
