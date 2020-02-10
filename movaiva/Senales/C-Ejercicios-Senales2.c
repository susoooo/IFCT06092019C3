/* Realizar un programa en C que, ante las siguientes señales, responda de la siguiente manera:

Al recibir una señal SIGUSR1 muestre el mensaje “He recibido la señal SIGUSR1”
Al recibir una señal SIGUSR2 muestre el mensaje “He recibido la señal SIGUSR2”
Al recibir una señal SIGTERM muestre el mensaje “Fin de ejecución” y termine su ejecución
Al recibir una señal SIGINT, la ignore.

Nuestro proceso en ejecución deberá quedar pendiente de recibir una señal cualquiera, 
terminando al recibir la señal SIGTERM o SIGKILL. */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void tratarSenhal(int s);

void main ()
{
    signal(SIGUSR1,tratarSenhal);
    signal(SIGUSR2,tratarSenhal);
    signal(SIGTERM,tratarSenhal);
    signal(SIGINT,tratarSenhal);
    while(1) pause();
}

void tratarSenhal(int numSenhal)
{
    
    switch (numSenhal)
    {
        case SIGUSR1: 
            printf("He recibido una senal SIGUSR1\n");
            break;

        case SIGUSR2: 
            printf("He recibido una senal SIGUSR2\n");
            break;

        case SIGTERM: 
            printf("Fin de ejecucion\n");        
            exit(0);
            break;

        case SIGINT:
            printf("SIGINT ignorado\n");
            break;

        default:
            printf("Cualquier otra cosa\n");
            break;
    }
}