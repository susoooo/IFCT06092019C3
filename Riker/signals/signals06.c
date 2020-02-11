/* 3.- Realizar un programa que cree un proceso hijo que realizara un ciclo de espera por señal, el proceso padre debe permanente enviar cada 5 segundo la señal SIGUSR1 al proceso hijo. El proceso hijo, debe escribir un mensaje por pantalla cada vez que reciba la señal. Cuando el proceso hijo haya recibido 3 veces consecutivas la señal SIGUSR1 provocará la muerte del padre y su propia terminación.  */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int signals_counter;

void handleSignals(int s);

int main() {

  pid_t pf;

  signals_counter = 0;
  pf = fork();

  switch(pf){
  case -1:
    perror("Error creating new process!!\n");
    break;
  case 0:
    signal(SIGUSR1, handleSignals);
    while(1){
      pause();
    }
    break;
  default:
    while(1) {
      sleep(5);
      kill(pf,  SIGUSR1);
    }
  }
}

void handleSignals(int s) {
  signals_counter++;

  printf("Process %d has received SIGUSR1 from %d signal\n", getpid(), getppid());
  if (signals_counter == 3) {
    printf("Ending processes.. %d & %d\n", getppid(), getpid());
    kill(getppid(), SIGTERM);
    exit(0);
  }
}
