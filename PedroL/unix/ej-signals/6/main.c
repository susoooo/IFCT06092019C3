#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int
main(void)
{
	kill(getpid(), SIGTERM);	
}
