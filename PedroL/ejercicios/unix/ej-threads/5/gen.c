#include <stdio.h>
#include <stdlib.h>

#define NUMCOUNT 1000

int main() {
  FILE* f = fopen("numeros.dat", "w");
  int num;

  for (int i = 0; i < NUMCOUNT; i++) {
    num = rand() % 100;
    fwrite(&num, sizeof(int), 1, f);
    if (!(i % 100)) printf("%d ", i % 99);
  }

  printf("\n");
  
  return 0;
}
