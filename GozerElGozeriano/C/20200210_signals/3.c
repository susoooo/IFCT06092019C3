/*
3.- Realizar un programa que cree un proceso hijo que realizara un ciclo de espera por señal, el proceso padre debe permanente enviar cada 5 segundo la señal SIGUSR1 al proceso hijo. El proceso hijo, debe escribir un mensaje por pantalla cada vez que reciba la señal. Cuando el proceso hijo haya recibido 3 veces consecutivas la señal SIGUSR1 provocará la muerte del padre y su propia terminación.
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#define MAX 3

void msg(int);
int contador;

int main(void)
{
	pid_t idProceso;
	
	contador=0;
	idProceso = fork();
    switch(idProceso)
    {
		case -1:
			perror("No se puede lanzar proceso");
			break;
		case 0:
			signal(SIGUSR1,msg);
			while(1) pause();
			break;
		default:
			while (1)
			{
				sleep(5);
				kill(idProceso, SIGUSR1);
			}
	}
	return(0);
}

void msg(int snyl)
{
	printf("Awake %d\n",contador);
	contador++;
	if(contador>=MAX) kill(getppid(),SIGTERM);
}
