#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

int
main(int argc, char** argv)
{
	int fd[2];
	char buffer[30];
	pid_t pid;

	pipe(fd);
	pid = fork();

	switch (pid) {
	case -1:
		perror("Fork failed");
		exit(-1);
		break;
	case 0:
		close(fd[0]);
		printf("Child writes in pipe.\n");
		write(fd[1], "Yo.", 4);
		break;
	default:
		close(fd[1]);
		wait(NULL);
		printf("Parent reads from pipe\n");
		read(fd[0], buffer, 10);
		printf("\tMessage: %s\n", buffer);
	}

	return 0;
}
