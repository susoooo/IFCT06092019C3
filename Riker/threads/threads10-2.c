/* 2.Crea un programa que defina dos matrices de enteros de 100x100. Haz que las pueble de forma aleatoria. Luego calcula el producto de dichas matrices. Sugerencia: utiliza tres matrices como variables globales para la implementación. */
/* 2.1-Haz el cálculo sin utilizar threads */
// M=N=1000 :: ./threads10-1  8,58s user 0,03s system 99% cpu 8,618 total
// M=n=1000000 :: threads10-1.c:(.text+0x28): relocation truncated to fit: R_X86_64_PC32 against symbol `matrixA' defined in COMMON section in /tmp/ccWTb4ti.o

/* 2.2-Haz el cálculo utilizando un solo un thread para hacer toda la multiplicación */
// M=N=1000 :: ./threads10-2  8,60s user 0,02s system 99% cpu 8,628 total
// M=N=1000000 :: threads10-2.c:(.text+0x28): relocation truncated to fit: R_X86_64_PC32 against symbol `matrixA' defined in COMMON section in /tmp/ccbt2qtq.o

/* 2.3-Haz el cálculo utilizando un thread diferente para calcular los valores de cada una de las filas */
/* 2.4-Haz el cálculo utilizando un thread diferente para calcular los valores de cada una de las columnas */
/* 2.5-Haz el cálculo utilizando un thread diferente para calcular cada uno de los valores */
/* Para cada una de las opciones obten el tiempo que tarda el programa en realizar las operaciónes. Repite las operaciones para dos matrices de 1000x1000 y para dos matrices de 1000000x1000000. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

#define M 1000
#define N 1000

long matrixA[M][N];
long matrixB[M][N];
long matrixP[M][N];

void loadMatrix(long array[M][N], int size);
void* multiplyMatrix();
void printMatrix();

int main(int argc, char *argv[])
{

  pthread_t thread;

  srand(time(NULL));

  /* load random numbers in matrix */
  loadMatrix(matrixA, M);
  loadMatrix(matrixB, M);

  /* multiply matrix */
  if (pthread_create(&thread,NULL, multiplyMatrix, NULL)){
      printf("Error creating thread. Quit!!");
      exit(1);
  }

  pthread_join(thread, NULL);

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

void * multiplyMatrix(){
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
