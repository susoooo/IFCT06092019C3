#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void controlador (int);

struct datos
{
    int pid;
    char guion;
    int senhal;
};

void main()
{
	signal (SIGINT, controlador);

	while (1) pause ();
}

void controlador (int numeroSenhal)
{
    int id;

    int seguir;

    struct datos * info;

    size_t escrito;

	FILE * indice;

	indice = fopen("señales.txt", "a");

	info = malloc(sizeof(struct datos));

	info->pid = getpid();
	info->guion = '-';
	info->senhal = numeroSenhal;

	printf("\nPid: %d - Senhal: %d.", info->pid, info->senhal);

	fflush(stdout);

    escrito = fwrite(info, sizeof(struct datos), 1, indice);

    free(info);
	fclose(indice);

    printf("\n1. Continuar.");
    printf("\n0. Salir.\n");
    scanf("\n%d", &seguir);

    if (seguir == 0)
    {
        kill (getpid(), SIGTERM);
    }

}
