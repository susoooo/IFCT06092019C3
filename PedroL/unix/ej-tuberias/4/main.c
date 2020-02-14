#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

void print_from_pipe(int);
void send_from_user_to_pipe(int);

int
main(int argc, char** argv)
{
	pid_t chldpid;
	int pd[2];

	pipe(pd);
	chldpid = fork();

	switch (chldpid) {
	case -1:
		perror("fork fail");
		exit(-1);
		break;
	case 0:
		close(pd[1]);
		printf("\tchild ready to read\n");
		print_from_pipe(pd[0]);
		printf("\tclose child\n");
		exit(0);
	default:
		close(pd[0]);
		printf("\tparent ready to write\n");
		send_from_user_to_pipe(pd[1]);
		printf("\twait for child to end\n");
		waitpid(chldpid,NULL,0);
		printf("\tclose parent\n");
		exit(0);
	}
}

void
print_from_pipe(int rpipe)
{
	size_t readb;
	int num;

	readb = read(rpipe, &num, sizeof(int));
	printf("child receives number:\n%d\n", num);
}

void
send_from_user_to_pipe(int wpipe)
{
	size_t writtn;
	int num;
	
	printf("write a number to send: ");
	scanf("%d", &num);
	writtn = write(wpipe, &num, sizeof(int));
}
