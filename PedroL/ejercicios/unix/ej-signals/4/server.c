#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

void sigusr1_hndlr(int uhh);
void sigusr2_hndlr(int uhh);
void sigterm_hndlr(int uhh);

int
main(void)
{
	printf("Server listening at: pid %d.\n", getpid());

	signal(SIGUSR1, sigusr1_hndlr);
	signal(SIGUSR2, sigusr2_hndlr);
	signal(SIGTERM, sigterm_hndlr);
	signal(SIGINT, SIG_IGN);

	while (1) pause();
}

void
sigusr1_hndlr(int uhh)
{
	printf("He recibido la señal SIGUSR1.\n");
	sleep(1);
	printf("uhh == %d\n", uhh);
}

void
sigusr2_hndlr(int uhh)
{
	printf("He recibido la señal SIGUSR2. %d\n", uhh);
}

void
sigterm_hndlr(int uhh)
{
	printf("Fin de ejecución. %d\n", uhh);
	exit(0);
}
