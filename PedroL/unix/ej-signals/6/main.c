#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define LOG_FILEPTH "señales.txt"

void hndlr_logfilewrite(int);

int
main(void)
{
	int i;

	i = 0;

	printf("\nEntering signal logging loop. Send a '1' to end\n");
	while (!(i == 1)) {
		signal(SIGINT, hndlr_logfilewrite);
		scanf("%d", &i);
		usleep(1000);
	}

}

void
hndlr_logfilewrite(int sig)
{
	FILE* logfl = fopen(LOG_FILEPTH, "a");
	size_t written, entrylen;
	time_t timer;
	char logentry[80], *timestmp;

	timer = time(NULL);
	timestmp = ctime(&timer);
	timestmp[strlen(timestmp) - 1] = '\0';

	sprintf(logentry, "%s >> PID: %d | SIG: %d\n", timestmp, getpid(), sig);
	entrylen = strlen(logentry);
	written = fwrite(logentry, sizeof(char), entrylen, logfl);

	printf("\nWrote %ld bytes into logfile:\n", written);
	printf("%s\n", logentry);

	fclose(logfl);

}
