#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>


main()
{
			printf ("El proceso duerme 10 segundos");
			sleep (10);				
			kill (getpid(), SIGTERM);
}

