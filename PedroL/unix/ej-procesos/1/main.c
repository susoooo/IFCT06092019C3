#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  pid_t child1, child2, child3;
 
  child2 = 0; 
  child1 = fork();

  if (child1 != 0)
    child2 = fork();

  if (child2 !=0)
    child3 = fork();

  if (child1 == 0 || child2 == 0 || child3 == 0) {
    printf("child output\n");
    exit(0);
  }
  
  printf("parent output\n");
  
  return 0;
}
