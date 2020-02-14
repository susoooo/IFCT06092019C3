#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

int factorial_of(int);

int
main(int argc, char** argv)
{
	pid_t chldpid;
	int pd[2], numw, numr;

	pipe(pd);
	chldpid = fork();

	switch (chldpid) {
	case -1:
		perror("fork fail");
		exit(-1);
		break;
	case 0:
		printf("\tchild ready to calculate\n");
		read(pd[0], &numr, sizeof(int));
		printf("\tchild calculates\n");
		numr = factorial_of(numr);
		write(pd[1], &numr, sizeof(int));
		printf("\tclose child\n");
		exit(0);
	default:
		usleep(1000);
		printf("number to calculate factorial of: \n");
		scanf("%d", &numw);
		printf("\tsend number to child\n");
		write(pd[1], &numw, sizeof(int));
		printf("\twait for child to end\n");
		waitpid(chldpid,NULL,0);
		read(pd[0], &numw, sizeof(int));
		printf("factorial result is: %d\n", numw);
		printf("\tclose parent\n");
		exit(0);
	}
}

int
factorial_of(int num)
{
	int res, i;

	res = num;
	for (i = 1; i < num; i++) {
		res = res * (num - i);
	}

	return res;
}
