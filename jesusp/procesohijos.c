#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void main()
{
pid_t rf;
pid_t rf1;
pid_t rf2;

rf = fork();

if(rf == 0)
    {
        printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
		sleep(5); //suspende el proceso 5 segundos
		exit(0);
    }
    rf1 = fork();
    if(rf1 == 0)
    {
        printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
		sleep(5); //suspende el proceso 5 segundos
		exit(0);
    }
    rf2 = fork();
    if(rf2 == 0)
    {
        printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
		sleep(5); //suspende el proceso 5 segundos
		exit(0);
    }
    sleep(30);
    printf("proceso padre: %d\n", getpid());
    exit(0);
}

