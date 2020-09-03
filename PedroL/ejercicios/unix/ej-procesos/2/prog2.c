#include <stdlib.h>
#include <stdio.h>

#define N 5

int main() {
  int j = 0;
  for (int i = 0; i < N; i++) {
    printf("prog2: %d\n", j);
    j += 2;
  }
  
  exit(0);
}
