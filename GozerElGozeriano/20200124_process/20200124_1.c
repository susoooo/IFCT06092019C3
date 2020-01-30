/*1. Implementa un programa en C que cree tres procesos hijos. El proceso padre
debe esperar a que acaben los procesos hijos e imprimir un mensaje indicándolo.
No es necesario que utilices un bucle for.*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	pid_t son1;
	pid_t son2;
	pid_t son3;

	son2=-1;
	son3=-1;

	son1=fork();
	if(son1>0)
	{
		son2=fork();
		if(son2>0) son3=fork();
	}

	if(son1>0 && son2>0 && son3>0)
	{
		sleep(3);
		printf("Los hijos han terminado.\n");
	}
	else
	{
		sleep(1);
		printf("El hijo %d va a terminar.\n",getpid());
	}

	exit(0);
}
