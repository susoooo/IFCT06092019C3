/*
2.- Realizar un programa en C que, ante las siguientes señales, responda de la siguiente manera:

Al recibir una señal SIGUSR1 muestre el mensaje “He recibido la señal SIGUSR1”
Al recibir una señal SIGUSR2 muestre el mensaje “He recibido la señal SIGUSR2”
Al recibir una señal SIGTERM muestre el mensaje “Fin de ejecución” y termine su ejecución
Al recibir una señal SIGINT, la ignore.

Nuestro proceso en ejecución deberá quedar pendiente de recibir una señal cualquiera, terminando al
recibir la señal SIGTERM o SIGKILL.
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <stdlib.h>
#define DEBUG 1

void msg1(int);
void msg2(int);
void endMe(int);
void * doSomething(void *);

int main(void)
{
	pthread_t h;
	signal(SIGUSR1, msg1);
	signal(SIGUSR2, msg2);
	signal(SIGTERM, endMe);
	signal(SIGINT, SIG_IGN);
	srand((unsigned int)time(NULL));
	
	pthread_create(&h,NULL,doSomething,NULL);
	
	while(1) pause();
	
	return(0);
}

void msg1(int nsnyl)
{
	printf("He recibido la señal SIGUSR1\n");
}

void msg2(int nsnyl)
{
	printf("He recibido la señal SIGUSR2\n");
}

void endMe(int nsnyl)
{
	printf("Fin de ejecución\n");
	exit(0);
}

void * doSomething(void * args)
{
	while(1)
	{
		usleep(500);
		int waitTime;
		int option;
		waitTime=rand()%5+1;
		option=rand()%3;
		if(DEBUG) printf("Waiting %d s to option %d\n",waitTime,option);		
		sleep(waitTime);
		switch(option)
		{
			case 0:
				kill(getpid(),SIGUSR1);
				break;
			case 1:
				kill(getpid(),SIGUSR2);
				break;
			case 2:
				kill(getpid(),SIGTERM);
				break;
		}
	}
}
