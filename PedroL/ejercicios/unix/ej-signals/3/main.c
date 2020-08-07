#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

void sigusr1_hndlr(void);
void sigusr2_hndlr(void);
void sigterm_hndlr(void);

int
main(void)
{
	signal(SIGUSR1, sigusr1_hndlr);
	signal(SIGUSR2, sigusr2_hndlr);
	signal(SIGTERM, sigterm_hndlr);
	signal(SIGINT, SIG_IGN);

	while (1) pause();
}

void
sigusr1_hndlr(void)
{
	printf("He recibido la señal SIGUSR1\n");		
}

void
sigusr2_hndlr(void)
{
	printf("He recibido la señal SIGUSR2\n");
}

void
sigterm_hndlr(void)
{
	printf("Fin de ejecución");
	exit(0);
}
