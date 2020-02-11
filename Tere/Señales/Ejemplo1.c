#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlador (int);

main()
{
	if (signal (SIGINT, controlador) == SIG_ERR)
	{
		perror ("No se puede cambiar signal");
	}

	while (1) pause ();
}

void controlador (int numeroSenhal)
{
	printf ("Pues no me salgo \n");
	printf ("Inténtalo otra vez\n");
	/* Se pone controlador por defecto para ctrl-c */
	signal (SIGINT, SIG_DFL);
}
