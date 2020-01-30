#include <stdio.h>

int main(int argc, char *argv[]) {

  printf("C: Hi!! I'm %s and my process number in parent is %s\n", argv[0], argv[1]);
  printf("C: Bye! I'm %s and my process number in parent is %s\n", argv[0], argv[1]);

  return 0;

}
