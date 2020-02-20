/*3.- Realizar un programa que cree un proceso hijo que realizara un ciclo de espera por señal, 
el proceso padre debe permanente enviar cada 5 segundo la señal SIGUSR1 al proceso hijo. 
El proceso hijo, debe escribir un mensaje por pantalla cada vez que reciba la señal. 
Cuando el proceso hijo haya recibido 3 veces consecutivas la señal SIGUSR1 provocará la muerte del padre 
y su propia terminación. */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>

void trataSenhal (int);

int contUSR1;

void main()
{
	contUSR1 = 1;

	pid_t idProceso;
	idProceso = fork();

    switch (idProceso)
    {
		case -1:
            perror ("No se puede lanzar proceso");
        break;

		case 0:
            signal (SIGUSR1, trataSenhal);

			while (1) pause ();
		break;

		default:
			while (1)
			{
				sleep (5);
				kill (idProceso, SIGUSR1);
			}
	}
}

void trataSenhal (int numeroSenhal)
{

    printf ("Recibida señal del padre %d - %d \n", numeroSenhal, contUSR1);

    if (numeroSenhal == 10)
    {
        contUSR1++;
    }

    if (contUSR1 > 3)
    {
        printf("\nHuy papi, me estas estresando...MUERE PERRO!!!!!");

        fflush(stdout);

        kill(getppid(), SIGTERM);
    }
}