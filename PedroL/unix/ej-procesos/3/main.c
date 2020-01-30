#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <wait.h>

typedef unsigned int u_int;

int main(int argc, char* argv[]) {
  pid_t ogpid;
  pid_t chldid;
  u_int chldrntomake, chldrnleft, chldrank;
  
  ogpid = getpid(); //get main parent's ID
  chldid = 0;

  if (argc == 1) { //no arguments (besides main)
    printf("not an argument\n");
  } else {
    chldrntomake = argc - 1;
    chldrnleft = chldrntomake;
    chldrank = 0;
    
    while (chldid == 0 && chldrnleft > 0) {
      chldid = fork();
      chldrnleft--;      
      if (chldid == 0) chldrank++;
    }

    if (getpid() == ogpid) {
      while(wait(0) != -1);
    } else {
      wait(0);
      //argv[arithmetic to execute args in reverse order]
      printf("\tchild %d: '%s'\n", getpid(), argv[argc - chldrank]);
      execlp(argv[argc - chldrank], argv[argc - chldrank], (char*)NULL);
    }
  }

  exit(0);
}
