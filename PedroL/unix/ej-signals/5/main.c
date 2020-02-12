#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void sigusr1_hndlr(int sig);

int
main(void)
{
	int i, test;
	pid_t chldpid;

	chldpid = fork();

	switch (chldpid) {
	case -1:
		perror("Failure to fork\n");
		break;
	case 0:
		signal(SIGUSR1, sigusr1_hndlr);
		for (i = 0; i < 3; i++) {
			pause();
			printf("[%d]\n", i);
		}
		test = kill(getppid(), SIGTERM);
		usleep(1000);
		exit(0);
		break;
	default:
		for (int j = 0; j < 3; j++) {
			printf("child pid: %d\n", chldpid);
			sleep(1);
			printf("\nSending sigusr1 to child\n");
			kill(chldpid, SIGUSR1);
		}
		
	}

	return 0;
}

void
sigusr1_hndlr(int sig)
{
	printf("Received sigusr1 signal from parent \n");
	fflush(stdout);
}

