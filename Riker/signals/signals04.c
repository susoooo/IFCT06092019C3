/* 1.- Realizar un programa que tras dormir 10 segundo envíe la señal SIGTERM a si mismo.  */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void endMe(int s);

int main() {

  int counter;

  counter = 10;
  while(1) {
    printf("%d seconds for be terminated!!\n", counter);
    fflush(stdout);
    sleep(1);
    counter--;
    if(counter == 0)
      kill(getpid(), SIGTERM);
  }

  return 0;
}
