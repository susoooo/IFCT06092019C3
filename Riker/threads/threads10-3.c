/* 2.Crea un programa que defina dos matrices de enteros de 100x100. Haz que las pueble de forma aleatoria. Luego calcula el producto de dichas matrices. Sugerencia: utiliza tres matrices como variables globales para la implementación. */
/* 2.1-Haz el cálculo sin utilizar threads */
// M=N=1000 :: ./threads10-1  8,58s user 0,03s system 99% cpu 8,618 total
// M=n=1000000 :: threads10-1.c:(.text+0x28): relocation truncated to fit: R_X86_64_PC32 against symbol `matrixA' defined in COMMON section in /tmp/ccWTb4ti.o

/* 2.2-Haz el cálculo utilizando un solo un thread para hacer toda la multiplicación */
// M=N=1000 :: ./threads10-2  8,60s user 0,02s system 99% cpu 8,628 total
// M=N=1000000 :: threads10-2.c:(.text+0x28): relocation truncated to fit: R_X86_64_PC32 against symbol `matrixA' defined in COMMON section in /tmp/ccbt2qtq.o

/* 2.3-Haz el cálculo utilizando un thread diferente para calcular los valores de cada una de las filas */
// M=N=1000 :: ./threads10-3  17,21s user 0,15s system 360% cpu 4,818 total
// M=N=1000000 :: threads10-3.c:(.text+0x31): relocation truncated to fit: R_X86_64_PC32 against symbol `matrixA' defined in COMMON section in /tmp/cck3IAXM.o

/* 2.4-Haz el cálculo utilizando un thread diferente para calcular los valores de cada una de las columnas */
/* 2.5-Haz el cálculo utilizando un thread diferente para calcular cada uno de los valores */

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
void* threadRow(void *r);
void printMatrix();

int main(int argc, char *argv[])
{
  pthread_t threads[M];
  long total;
  long row;
  long *res;
  srand(time(NULL));

  /* load random numbers in matrix */
  loadMatrix(matrixA, M);
  loadMatrix(matrixB, M);

  /* multiply matrix */
  for (row=0; row<M; row++) {
    if (pthread_create(&threads[row], NULL, threadRow, (void*) &row)){
      printf("Error creating thread. Quit!!");
      exit(1);
    }

  }
  for (row=0; row<M; row++) {
    pthread_join(threads[row], NULL);
  }

  return 0;
}

void loadMatrix(long array[M][N], int size){
  int row;
  int col;
  for (col=0; col<size; col++) {
    for (row=0; row<size; row++) {
      array[col][row] = rand() % size;
    }
  }
}

void * threadRow(void *r){
  int *row = (int *) r;
  int col;
  int iter;
  int size;
  long total;

  size = M;
  total = 0;
  for (col=0; col<size; col++) {
    for(iter=0; iter<size; iter++){
      total += matrixA[*row][iter] * matrixB[iter][col];
    }
    matrixP[*row][col] = total;
    total = 0;
  }
}
