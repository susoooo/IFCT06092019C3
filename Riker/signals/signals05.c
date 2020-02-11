/* 2.- Realizar un programa en C que, ante las siguientes señales, responda de la siguiente manera: */

/* Al recibir una señal SIGUSR1 muestre el mensaje “He recibido la señal SIGUSR1” */
/* Al recibir una señal SIGUSR2 muestre el mensaje “He recibido la señal SIGUSR2” */
/* Al recibir una señal SIGTERM muestre el mensaje “Fin de ejecución” y termine su ejecución */
/* Al recibir una señal SIGINT, la ignore. */

/* Nuestro proceso en ejecución deberá quedar pendiente de recibir una señal cualquiera, terminando al recibir la señal SIGTERM o SIGKILL. */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void handleSignal(int s);

int main() {
  signal(SIGUSR1, handleSignal);
  signal(SIGUSR2, handleSignal);
  signal(SIGTERM, handleSignal);
  signal(SIGINT, handleSignal);

  while(1) {
    pause();
  }

  return 0;
}

void handleSignal(int s) {
   switch(s){
   case SIGUSR1:
     printf("SIGUSR1!!\n");
     break;
   case SIGUSR2:
     printf("SIGUSR2!!\n");
     break;
   case SIGTERM:
     printf("SIGTERM received. Process %d ended!\n",  getpid());
     exit(0);
     break;
   case SIGINT:
     printf("SIGINT ignored!!\n");
     break;
   default:
     printf("WTF!! don't touch me with that signal!!!\n");
   }
}
