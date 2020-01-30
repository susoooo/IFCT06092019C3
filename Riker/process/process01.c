#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


#define ON 1
#define OFF 0

int main(int argc, char *argv[])
{
  pid_t p[3];
  int counter;
  int status;
  int father_pid;
  int child;

  father_pid = getpid();


  for(counter=0; counter<3; counter++){
    if(child!=ON){
      p[counter] = fork();
      switch (p[counter]) {
      case -1: {
        printf("Child number %d not created!\n", counter);
        break;
      }
      case 0: {
        child = ON;
        printf("Child number %d with pid %d, created!\n", counter, getpid());
        /* sleep(1); */
        printf("Child number %d with pid %d, quitting!\n", counter, getpid());
        exit(0);
        break;
      }
      default:
        printf("Father cycle %d\n", counter);
        /* sleep(2); */
        break;
      }
    }
  }

  for (counter=0; counter<3; counter++) {
    waitpid(p[counter], &status, 0);
  }


  if(getpid() == father_pid)
    printf("Father quit, %d\n", getpid());
  else
    printf("not father, %d\n", getpid());

  return 0;
}
