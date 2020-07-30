/*2.- Realizar un programa en C que, ante las siguientes señales, responda de la siguiente manera:

Al recibir una señal SIGUSR1 muestre el mensaje “He recibido la señal SIGUSR1”
Al recibir una señal SIGUSR2 muestre el mensaje “He recibido la señal SIGUSR2”
Al recibir una señal SIGTERM muestre el mensaje “Fin de ejecución” y termine su ejecución
Al recibir una señal SIGINT, la ignore.

Nuestro proceso en ejecución deberá quedar pendiente de recibir una señal cualquiera, 
terminando al recibir la señal SIGTERM o SIGKILL.*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>


void manejador(int signum)
{
	switch (signum)
	{
	
		case SIGUSR1:
		printf("He recibido la senal SIGUSR1\n");
	
		break;
		case SIGUSR2:
		printf("He recibido la senal SIGUSR2\n");
		break;

		case SIGTERM:
		printf("Fin de Ejecucion\n");

}
	
}

	int main(int argc, char *argv[]) 
	{
	
		if (signal(SIGUSR1, manejador) == SIG_ERR) {
		perror("error en la senal SIGUSR1");
exit(EXIT_FAILURE);
	}
		
	if (signal(SIGUSR2, manejador) == SIG_ERR) 
	{
	perror("error en la senal SIGUSR2");
exit(EXIT_FAILURE);
	}

	if (signal(SIGTERM, manejador) == SIG_ERR) 
	{
		perror("error en SIGTERM");
exit(EXIT_FAILURE);
	}

		if (signal(SIGINT, SIG_IGN) == SIG_ERR) 
		{
	perror("error en SIGINT");
exit(EXIT_FAILURE);
	
			
	}
		kill(getpid(),SIGINT);
		kill(getpid(),SIGUSR2);
		kill(getpid(),SIGUSR1);
		kill(getpid(),SIGTERM);
		while (1) pause();
	}
	






