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
			break;
		case 0:
			printf("Asociando senhales\n");
			signal(SIGUSR1, controlador_s1);
			signal(SIGUSR2, controlador_s2);
			signal(SIGTERM, contralador_termina);
			signal(SIGINT, controlador_ignora);
			signal(SIGINT, SIG_IGN);
			
			while (1)	pause ();
			break;
		default:
			while (1)
			{
				printf("El proceso pasa por aquí");
				sleep(1);
				kill(idProceso, SIGUSR1);
				kill(idProceso, SIGUSR2);
				if(kill(idProceso, SIGTERM)
				{
				
				}
				;
				kill(idProceso, SIGINT);
			}
	}
}

void controlador_s1 (int numero)
{printf("He recibido la señal SIGUSR1\n");}

void controlador_s2 (int numero)
{printf("He recibido la señal SIGUSR2\n");}

void controlador_termina(int numero)
{
printf("Fin de ejecución\n");
}

void controlador_ignora(int numero)
{}

