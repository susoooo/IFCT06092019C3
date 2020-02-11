#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void productor(int);
void consumidor(int);

int
main(int argc, char** argv)
{	
	pid_t pid;
	int pd[2];

	pipe(pd);
	if ((pid = fork()) == 0) {
		close(pd[1]);
		consumidor(pd[0]);
	} else {
		close(pd[0]);
		productor(pd[1]);
	}

	return 0;
}

void
productor(int wr)
{
	int i;

	for (i = 1; i <= 10; i++) {
		write(wr, &i, sizeof(i));
		printf("\nSent:%d\n", i);
		usleep(500000);
	}

	exit(0);
}

void
consumidor(int rd)
{
	int bread, buf;

	while ((bread = read(rd, &buf, sizeof(buf))) > 0) {
		printf("\tReceived: %d\n", buf);
	}

	exit(0);
}
