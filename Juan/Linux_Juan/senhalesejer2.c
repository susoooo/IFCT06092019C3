#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlador_s1 (int);
void controlador_s2 (int);
void controlador_termina (int);
void controlador_ignora (int);

main()
{
	pid_t idProceso;
	idProceso = fork();
	
    switch(idProceso)
    {   
		case -1: 
			perror("No se puede lanzar proceso");
			fflush(stdout);
			break;
		case 0:
			printf("Hijo: Asociando senhales\n");
			fflush(stdout);
			signal(SIGUSR1, controlador_s1);
			signal(SIGUSR2, controlador_s2);
			signal(SIGTERM, controlador_termina);
			signal(SIGINT, SIG_IGN);
			
			while (1)	pause ();
			break;
		default:
			while (1)
			{
				printf("Padre: El proceso pasa por aquí");
				fflush(stdout);
				sleep(1);
				kill(idProceso, SIGUSR1);
				usleep(1000);
				kill(idProceso, SIGUSR2);
				usleep(1000);
				kill(idProceso, SIGINT);
				usleep(1000);
				kill(idProceso, SIGTERM);
				usleep(1000);
				kill(getpid(), SIGINT);
			}
	}
}

void controlador_s1 (int numero)
{printf("Hijo: He recibido la señal SIGUSR1\n");
fflush(stdout);
}

void controlador_s2 (int numero)
{printf("Hijo: He recibido la señal SIGUSR2\n");
fflush(stdout);
}

void controlador_termina(int numero)
{
printf("Hijo: Fin de ejecución\n");
fflush(stdout);
signal(SIGTERM, SIG_DFL);
usleep(1000);
kill(getpid(),SIGTERM);
}


