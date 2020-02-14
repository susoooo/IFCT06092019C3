#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void
controlador (int numberosenhal)
{
  printf("No me salgo\nIntentalo otra vez\n");
  signal(SIGINT, SIG_DFL);
}

int
main()
{
  if (signal(SIGINT, controlador) == SIG_ERR) {
    perror("No se puede cambiar SIGINT");
  }

  while (1)
    pause();
}
