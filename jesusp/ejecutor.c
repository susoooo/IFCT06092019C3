#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void senhal(int);

main()
{
pid_t idProceso;
idProceso = fork();
switch(idProceso){
        case -1: perror ("No se puede lanzar proceso");
			break;
		case 0: signal (SIGUSR1, senhal);
			while (1)	pause ();
			if (senhal==3)
                {
                   printf("Esto se acabo papi");
                   exit(0);
                }
			break;
		default:
			while (1)
			{
				sleep (1);
				kill (idProceso, SIGUSR1);
			}
	}
}

void senhal(int numsen)
{
printf("Recibida la señal del hijo");

}
