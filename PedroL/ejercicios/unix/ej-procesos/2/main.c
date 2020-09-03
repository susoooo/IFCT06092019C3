#include <unistd.h>
#include <wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) 
{
  int chldnum;
  pid_t chld[chldnum];

  if (argc == 1) {
    printf("specify number of children as first parameter");
  } else {
    chldnum = atoi(argv[1]);

    if (chldnum == 1) {
      printf("make 1 child\n");
    } else {
      printf("make %d children\n", chldnum);
    }    
  }
  

  //child making loop
  for (int i = 0; i < chldnum; i++) {
    printf("making child %d | PID: %d\n", i, chld[i]);
    chld[i] = fork();
    if (chld[i] == 0) i = chldnum; //quit loop if newborn
  } 

  for (int i = 0; i < chldnum; i++) {
    if (chld[i] == 0) {
      printf("child %d to run command: %s\n", i, argv[i + 2]);
      execlp(argv[i + 2], argv[i + 2], (char*)NULL);
      perror("ree");

      exit(0);
    }
  }

  while(wait(0) != -1);

  printf("dad gone\n");
  exit(0);
}
