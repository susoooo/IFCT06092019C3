/* 4.- Diseñar un programa que trate la señal SIGINT ( CTRL-C) y se quede a la espera por una señal. Cada vez que reciba la señal SIGINT debe abrir para añadir en el fichero señales.txt, y escribir su número de proceso y el número de señal Recibida. Terminar el proceso enviándole cualquier otra señal. */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>


void handleSignals(int s);

FILE *fp;

int main() {
  signal(SIGINT, handleSignals);
  signal(SIGTERM, handleSignals);

  fp = fopen("signals.txt", "w");

  while(1)
    pause();

  return 0;
}

void handleSignals(int s) {
  if(s == SIGINT)
    fprintf(fp, "Process %d has received SIGINT signal.\n", getpid());
  else {
    fclose(fp);
    exit(0);
  }
}
