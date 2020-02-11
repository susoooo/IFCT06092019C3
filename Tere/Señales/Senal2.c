/*2.- Realizar un programa en C que, ante las siguientes señales, responda de la siguiente manera:

Al recibir una señal SIGUSR1 muestre el mensaje “He recibido la señal SIGUSR1”
Al recibir una señal SIGUSR2 muestre el mensaje “He recibido la señal SIGUSR2”
Al recibir una señal SIGTERM muestre el mensaje “Fin de ejecución” y termine su ejecución
Al recibir una señal SIGINT, la ignore.

Nuestro proceso en ejecución deberá quedar pendiente de recibir una señal cualquiera, terminando al recibir la señal SIGTERM o SIGKILL.*/


#include <signal.h>
#include <unistd.h>
#include <stdio.h>


void mensaje (int);
void mensaje2 (int);
void mensaje3 (int);

main()
{
    int numero;

    signal(SIGUSR1,mensaje);
	signal(SIGUSR2, mensaje2);
	signal(SIGTERM, mensaje3);
	signal(SIGINT,SIG_IGN);


    do
    {

    printf("\n1-recibir una señal SIGUSR1");
    printf("\n2-recibir una señal SIGUSR2");
    printf("\n3-recibir una señal SIGTERM");
    printf("\n4-recibir una señal SIGKILL\n");
    scanf("\n%d",&numero);

    switch(numero)

        {
            case 1: kill(getpid(),SIGUSR1);
            break;

            case 2: kill(getpid(),SIGUSR2);
            break;

            case 3: kill(getpid(),SIGTERM);
            break;

            case 4: kill(getpid(),SIGKILL);
            break;

            default: printf ("\nError");

        }
    }
    while (1);

}

void mensaje (int senal)
{
    printf("\nHe recibido la señal SIGUSR1");
    fflush(stdout);
}

void mensaje2 (int senal)
{
    printf("\nHe recibido la señal SIGUSR2");
      fflush(stdout);
}

void mensaje3 (int senal)
{
    printf("\nFin de ejecución");
      fflush(stdout);
    signal (senal, SIG_DFL);
    kill(getpid(),SIGTERM);

}


