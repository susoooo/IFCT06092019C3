#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
#include <signal.h>
#include <sys/types.h>

void sig_hndlr(int);

int
main(int argc, char** argv)
{
	pid_t chldpid;
	int pd[2];
	char rbuf[15];
	size_t readb;
	
	pipe(pd);
	
	/*
	 * fork
	 */
	chldpid = fork();

	switch (chldpid) {
	case -1:
		perror("fork");
		exit(0);
		break;

	case 0:
		close(pd[0]);

		//usleep(10000);
		printf("executing insultator...\n");

		dup2(pd[1], 1);
		execlp("./insultator.out", "insultator.out", NULL);
		
		/* reached if exec fails */
		perror("exec");
		exit(-1);

	default:
		close(pd[1]);
		
		printf("ready to print from: %d\nsize of buffer: %ld\n\n", chldpid, sizeof(rbuf));
		
		signal(SIGUSR1, sig_hndlr);
		do {
			pause();

			printf("?\n");
			readb = read(pd[0], &rbuf, sizeof(rbuf));
			printf("received string: %s\n\n", rbuf);

			kill(chldpid, SIGUSR1);
		} while (readb > 0);
		
		close(pd[0]);
		kill(chldpid, SIGTERM);
		exit(0);
	}
}

void
sig_hndlr(int sig)
{
	return;
}
