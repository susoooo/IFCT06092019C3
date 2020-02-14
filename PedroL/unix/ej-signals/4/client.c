#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int
main(int argc, char** argv)
{
	pid_t pid;
	int sig;

	printf("client: ");
	if (argc < 2) {
		printf("need 2 args: pid, sig\n");
	} else {
		if (argc > 3) {
			printf("ignoring last %d args\n", argc - 3);
		}
		
		pid = atoi(argv[1]);
		sig = atoi(argv[2]);
		kill(pid, sig);
		printf("sent signal %d to process %d\n", sig, pid);
	}
	return 0;
}
