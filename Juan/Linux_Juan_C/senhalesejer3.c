#include <signal.h>
#include <unistd.h>
#include <stdio.h>

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
			printf("Esperando una señal\n");
			
			while (1)	pause ();
			break;
		default:
			while (1)
			{
				printf("Enviando señal al proceso hijo");
				sleep(5);
				kill(idProceso, SIGUSR1);
			}
	}
}

