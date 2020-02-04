#include <stdlib.h>
#include <stdio.h>

#define N 5

int main() {
  int j = 1;
  for (int i = 0; i < N; i++) {
    printf("prog3: %d\n", j);
    j += 2;
  }
  
  exit(0);
}
