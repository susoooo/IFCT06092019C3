/* 2.Crea un programa que defina dos matrices de enteros de 100x100. Haz que las pueble de forma aleatoria. Luego calcula el producto de dichas matrices. Sugerencia: utiliza tres matrices como variables globales para la implementación. */

/* 2.1-Haz el cálculo sin utilizar threads */

// M=N=1000 :: ./threads10-1  8,58s user 0,03s system 99% cpu 8,618 total
// M=n=1000000 :: threads10-1.c:(.text+0x28): relocation truncated to fit: R_X86_64_PC32 against symbol `matrixA' defined in COMMON section in /tmp/ccWTb4ti.o

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

#define M 1000000
#define N 1000000

long matrixA[M][N];
long matrixB[M][N];
long matrixP[M][N];

void loadMatrix(long array[M][N], int size);
void multiplyMatrix();
void printMatrix();

int main(int argc, char *argv[])
{

  srand(time(NULL));

  /* load random numbers in matrix */
  loadMatrix(matrixA, M);
  loadMatrix(matrixB, M);

  /* multiply matrix */
  multiplyMatrix();

  return 0;
}

void loadMatrix(long array[M][N], int size){
  int row;
  int col;
  for (col=0; col<size; col++) {
    for (row=0; row<size; row++) {
      array[col][row] = rand() % size; //*10);
    }
  }
}

void multiplyMatrix(){
  int col;
  int row;
  int iter;
  int size;
  long total;

  size = M;
  total = 0;
  for (row=0; row<size; row++) {
    for (col=0; col<size; col++) {
      for(iter=0; iter<size; iter++){
        total += matrixA[row][iter] * matrixB[iter][col];
      }
      matrixP[row][col] = total;
      total = 0;
    }
  }
}

void printMatrix(long array[M][M], int size){
 int row;
 int col;
 for (col=0; col<size; col++) {
   for (row=0; row<size; row++) {
     printf("%ld ", array[col][row]);
   }
   printf("\n");
 }
}
