#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


#define YES 1
#define NO 0

int main(int argc, char *argv[]){
  int counter;
  pid_t child;
  int *wstatus;
  char **child_argv = malloc(sizeof(char*)*(argc-1));
  char command[strlen(argv[1])];

  child = fork();

  switch (child)
    {
    case -1: {
      printf("E: Error creating child process\n");
      break;
    }
    case 0: {
      sprintf(command, "%s", argv[1]);
      /* copying arguments to 'child_argv' */
      for(counter=1; counter<argc;counter++){
        child_argv[counter-1] = malloc(strlen(argv[counter]));
        memcpy(child_argv[counter-1], argv[counter], strlen(argv[counter]));
      }
      if(execv(command, child_argv)<0){
        printf("E: Error execv with childprocess.");
      }
    }
    default:
      break;
  }
  waitpid(child, wstatus, 0);

  return 0;
}
