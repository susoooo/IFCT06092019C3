#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlUSR1 (int);
void controlUSR2 (int);
void controlTERM (int);
void controlINT (int);

void main()
{
    int senhal;

    signal (SIGUSR1, controlUSR1);
    signal (SIGUSR2, controlUSR2);
    signal (SIGTERM, controlTERM);
    signal (SIGKILL, controlTERM);
    signal (SIGINT, controlINT);

    do
    {
        printf("\n1. Enviar SIGUSR1.");
        printf("\n2. Enviar SIGUSR2.");
        printf("\n3. Enviar SIGTERM.");
        printf("\n4. Enviar SIGKILL.\n");
        scanf("\n%d", &senhal);

        switch (senhal)
        {
            case 1:
                kill (getpid(), SIGUSR1);
            break;

            case 2:
                kill (getpid(), SIGUSR2);
            break;

            case 3:
                kill (getpid(), SIGTERM);
            break;
            case 4:
                kill (getpid(), SIGKILL);
            break;

            default:
                printf("\n.\n");
        }

    } while (1);
}

void controlUSR1 (int numeroSenhal)
{
	printf ("He recibido la señal SIGUSR1.\n");
}

void controlUSR2 (int numeroSenhal)
{
	printf ("He recibido la señal SIGUSR2.\n");
}

void controlTERM (int numeroSenhal)
{
    printf("\nEnviada señal de suicidio....\n");
    signal (SIGTERM, SIG_DFL);
    kill (getpid(), SIGTERM);
}

void controlINT(int numeroSenhal)
{
	printf ("No me salgo \n");
	printf ("Inténtalo otra vez\n");
}
