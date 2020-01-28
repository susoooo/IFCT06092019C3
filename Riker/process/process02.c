#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

#define YES 1
#define NO 0

int main(int argc, char *argv[]) {
  int counter;
  int father_pid;
  int n_process;
  int wstatus;
  char process_number[12];
  int child;
  char **p_argv = malloc( 2 * sizeof(char*));
  char command[20];

  n_process = argc - 2;
  pid_t p[n_process];

  father_pid = getpid();
  child = NO;

  if (argc > 2) {
    for (counter = 0; counter < n_process; counter++) {
      if (child != YES) {
        p[counter] = fork();
        switch (p[counter]) {
        case -1: {
          printf("Error creating child %d\n", counter);
          break;
        }
        case 0: {
          printf("Child %d with pid %d executing command '%s'.\n", counter, getpid(), argv[counter + n_process - 1]);

          sprintf(process_number, "%d", counter);
          sprintf(command, "./%s", argv[counter + n_process - 1]);

          p_argv[0] = malloc(strlen(argv[counter+n_process-1]));
          memcpy(p_argv[0], argv[counter+n_process-1], strlen(argv[counter+n_process-1])+1);

          p_argv[1] = malloc(strlen(process_number));
          memcpy(p_argv[1], process_number, strlen(process_number));

          if (execv(command, p_argv)<0){
            printf("ERROR");
          }
          printf("THIS IS NOT EXECUTED!!! (if you see this, you have a problem.)\n");
          exit(0);
        }
        default:
          printf("Parent creating child: %d\n", counter);
          break;
        }
      }
    }

    for (counter = 0; counter < argc; counter++) {
      waitpid(p[counter], &wstatus, 0);
    }

    if (getpid() == father_pid)
      printf("Father quit, %d\n", getpid());
    else
      printf("not father, %d\n", getpid());

  } else {
    printf("No enough arguments have been passed to %s", argv[0]);
  }

  return 0;
}
