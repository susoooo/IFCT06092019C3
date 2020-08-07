#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

void sig_hndlr(int);

int
main(int argc, char** argv)
{
	int i;
	char insult[8][15] = {
		"can't",
		"think",
                "of",
                "anything",
                "that",
                "isn't",
                "too",
		"rude"
	};

	signal(SIGUSR1, sig_hndlr);
	for (i = 0; i < 8; i++) {
		write(1, insult[i], sizeof(insult));
		kill(getppid(), SIGUSR1);
		pause();
	}
	close(1);
	kill(getppid(), SIGUSR1);

	return 0;
}

void
sig_hndlr(int sig)
{
	return;
}
