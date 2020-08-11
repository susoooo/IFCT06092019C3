#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void
tratasenhal(int arg)
{
  printf("recibida señal del padre\n");
}

int
main()
{
  pid_t pid;
	
  pid = fork();
	
  switch(pid) {
  case -1:
    perror("No se puede lanzar prcoeso");
    break;
  case 0:
    signal(SIGUSR1, tratasenhal);
    while (1) pause();
    break;
  default:
    while (1) {
      sleep(1);
      kill(pid, SIGUSR1);
    }
  }
}
