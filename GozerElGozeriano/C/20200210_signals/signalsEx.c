#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void trataSenhal(int);
void agur(int);

void main(void)
{
	pid_t idProceso;
	idProceso = fork();
    switch(idProceso)
    {
		case -1:
			perror("No se puede lanzar proceso");
			break;
		 case 0:
			signal(SIGUSR1, trataSenhal);
			signal(SIGINT,agur);
			while(1) pause();
			break;
		default:
			signal(SIGINT,agur);
			while (1)
			{
				sleep(1);
				kill(idProceso, SIGUSR1);
			}
	}
}
void trataSenhal(int numeroSenhal)
{
	printf("%d - Recibida señal del padre\n", numeroSenhal);
}

void agur(int numSenhal)
{
	printf("Au!\n");
	sleep(1);
	signal(numSenhal, SIG_DFL);
}
