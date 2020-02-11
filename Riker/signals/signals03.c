#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


void handleSignal(int s);

int main() {

  signal(SIGINT, handleSignal);
  signal(SIGUSR1, handleSignal);

  while(1){
    pause();
  }

  return 0;
}


void handleSignal(int s) {

   switch(s){
   case SIGINT:
     printf("C-c pressed. Exiting!!!\n");
     exit(0);
     break;
   case SIGUSR1:
     printf("Hey Dude!!\n");
     break;
   default:
     printf("WTF!! don't touch me with that signal!!!\n");
   }
}
