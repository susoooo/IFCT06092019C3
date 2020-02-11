#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void senhal(int);

main()
{
int i;
i=0;
pid_t idProceso;
idProceso = fork();
switch(idProceso){
        case -1: perror ("No se puede lanzar proceso");
			break;
		case 0: signal (SIGUSR1, senhal);
           for (i=0;i<3;i++)
                {
                     senhal(i);
                }
                kill (idProceso, SIGUSR1);
                printf("Esto se acabo papi\n");
                exit(0);
			break;
		default:
			while (1)
			{
				usleep (5000);
				kill (idProceso, SIGUSR1);
			}
	}

}

void senhal(int numsen)
{
printf("Soy el hijo mi pid es %d y ppid es %d\n",getppid(),getpid());
}


