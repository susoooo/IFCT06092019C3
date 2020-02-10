#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlador (int);

void main()
{
    sleep(10);
    printf("\nEnviando señal de suicidio....\n");
	kill (getpid(), SIGTERM);

}
