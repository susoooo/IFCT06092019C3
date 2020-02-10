/* Realizar un programa que cree un proceso hijo que realizara un ciclo de espera por señal, 
el proceso padre debe permanente enviar cada 5 segundo la señal SIGUSR1 al proceso hijo. 
El proceso hijo, debe escribir un mensaje por pantalla cada vez que reciba la señal. Cuando el 
proceso hijo haya recibido 3 veces consecutivas la señal SIGUSR1 provocará la muerte del padre 
y su propia terminación.  */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>

void tratarSenhal(int);
int contador;

void main ()
{
    pid_t idProceso;
    idProceso = fork();
    contador=1;
    switch (idProceso)
    {   
		case -1: perror ("No se puede lanzar proceso");
			break;
		case 0: 
            signal (SIGUSR1, tratarSenhal);
			while (1)	
            {
                pause ();
            }
			break;
		default: 
			while (1)
			{
				sleep (5);
				kill (idProceso, SIGUSR1);
			}
	}
}

void tratarSenhal (int numeroSenhal)
{
    printf ("Recibida señal del padre\n");
    if(contador==3){
        kill(getppid(),SIGTERM);
        exit(0);
    }
    contador++;

    
}