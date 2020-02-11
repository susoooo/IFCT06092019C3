#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void controlador (int);

int main() {
	if (signal (SIGINT, controlador) == SIG_ERR)
          perror ("No se puede cambiar signal");

	while (1) pause ();
}

void controlador (int numeroSenhal) {
  printf("Push the button and try again!!\n");
  signal (SIGINT, SIG_DFL);
}

