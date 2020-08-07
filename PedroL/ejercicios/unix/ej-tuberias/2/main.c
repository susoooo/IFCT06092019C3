#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define RD 0
#define WR 1

int
main(int argc, char** argv)
{
	int pd[2];

	if (argc != 3) {
		printf("Wrong argument format.\n  %s if of\n", argv[0]);
		exit(1);
	}

	pipe (pd);

	if (fork() == 0) {
		close(pd[RD]);
		dup2(pd[WR], 1);
		close(pd[RD]);
		execlp(argv[1], argv[1], NULL);
		perror(argv[0]);
	} else {
		close(pd[WR]);
		dup2(pd[WR], 0);
		close(pd[WR]);
		execlp(argv[2], argv[2], NULL);
		perror(argv[0]);
	}

	return 0;
}
