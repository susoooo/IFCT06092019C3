/*
4.- Diseñar un programa que trate la señal SIGINT ( CTRL-C) y se quede a la espera por una señal. Cada vez que reciba la señal SIGINT debe abrir para añadir en el fichero señales.txt, y escribir su número de proceso y el número de señal Recibida. Terminar el proceso enviándole cualquier otra señal.
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define SAVEFILE "SAVE.TXT"

void writeSenyal(int);
void exitSenyal(int);

int main(void)
{
	pid_t idProceso;
	idProceso = fork();
    switch(idProceso)
    {
		case -1:
			perror("No se puede lanzar proceso");
			break;
		 case 0:
			signal(SIGINT,SIG_IGN);
			sleep(10);
			kill(getppid(), SIGUSR1);
			break;
		default:
			signal(SIGINT,writeSenyal);
			signal(SIGUSR1,exitSenyal);
			while(1) pause;
	}
	return(0);
}

void exitSenyal(int snyl)
{
	exit(0);
}

void writeSenyal(int snyl)
{
	int contador;
	
	FILE * saveFile;
	
	saveFile = fopen(SAVEFILE,"a");
	if(saveFile!=0)
	{
		fprintf(saveFile,"PID: %d SEÑAL: %d\n", getpid(),snyl );
		fclose(saveFile);
	}
	
}
