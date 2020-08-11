#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <wait.h>

void PrintEndSignature(){
  printf("pid: %d | ticks: %ld\n", getpid(), clock());
}

int main(int argc, char* argv[]) {
  pid_t	  chldid;
  char**  outargv;

  printf("argcount: %d\n", argc);

  //alloc mem for argc - 1 number of strings 
  outargv = (char**)malloc(sizeof(char) * 64 * (argc - 1));
  perror("malloc");

  //copy argv[] to outargv[] except for first string
  for (int i = 0; i < (argc - 1); i++) {
    strcpy(outargv[i], argv[i + 1]);
    perror("strcpy");
  }

  for (int i = 0; i < (argc); i++) {
    printf("%s", argv[i]);
  }

  exit(0);

  //child runs cmd with prepared args, parent waits for child to end
  if (chldid == 0) {
    execvp(argv[2], outargv);

    perror("");
    PrintEndSignature();
    exit(0);
  } else {
    wait(0);
    PrintEndSignature();
  }

  exit(0);
}
