#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int
main(int argc, char** argv)
{
	pid_t pid;
	int i, sig;

	printf("client: ");
	if (argc < 2) {
		printf("need 2 args: pid, sig\n");
	} else {
		if (argc > 3) {
			printf("ignoring last %d args\n", argc - 3);
		}
		
		pid = atoi(argv[1]);
		sig = atoi(argv[2]);
		printf("going to send 1000 signals '%d' to process '%d' in 2 seconds.\n", sig, pid);
		sleep(2);
		for (i = 0; i < 1000; i++)
			kill(pid, sig);
	}
	return 0;
}
