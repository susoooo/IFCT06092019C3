#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


#define YES 1
#define NO 0


int main(int argc, char *argv[]){

  int p_number = argc;
  int counter;
  pid_t pf;
  int child_pid;
  char **p_argv = malloc( 2 * sizeof(char*));
  char command[20];
  int father_pid;
  char process_number[12];

  father_pid = getpid();

  counter = 0;
  pf = fork();
  while(counter < p_number) {
    switch(pf) {
    case -1: {
      printf("E: Error creating process %d\n", counter);
      break;
    }
    case 0: {
      child_pid = getpid();
      printf("-> %d: Proccess number %d with pid %d created\n", counter, counter, child_pid);
      sprintf(command, "./%s", argv[counter+1]);

      if (counter < (p_number-2))
        pf = fork();

      if(child_pid == getpid ()) {
        sprintf(command, "./%s", argv[counter+1]);
        p_argv[0] = malloc(strlen(argv[counter+1]));
        memcpy(p_argv[0], argv[counter+1], strlen(argv[counter+1]));
        sprintf(process_number, "%d", counter);
        p_argv[1] = malloc(strlen(process_number));
        memcpy(p_argv[1], process_number, strlen(process_number));
        if (execv(command, p_argv) < 0) {
          printf("E: Error execv with process pid: %d\n ", getpid());
          exit(1);
        }
        printf("E: There's some problem!\n");
      } else {
        if (counter == (p_number-1))
          exit(0);
      }
      break;
    }
    default:{
      printf("I: father_pid: %d, child_pid:%d\n",father_pid, pf);
      printf("<- Father quitting\n");
      exit(0);
    }
    }
    counter++;
  }

  printf("E: Quitting??? Who am I?? %d\n", getpid());

  return 0;
}
