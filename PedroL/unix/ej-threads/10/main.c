#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

/*
  TO-DO:
  - one thread for dot product loop
  - one thread per row loop
  - one thread per col loop
  - one thread per cell
  - try bigger matrix
*/

int matrix[3][100][100];

int main(int argc, char** argv)
{
  int i, j, k, part;

  part = 0;
  
  //fill and print
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 100; j++) {
      for (k = 0; k < 100; k++) {
	matrix[i][j][k] = rand() % 10;
      }
    }
  }  
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 100; j++) {
      if (!(j % 10)) {
        for (k = 0; k < 100; k++) {
	  if (!(k % 10)) printf("%d ", matrix[i][j][k]);
	}
      printf("\n");
      }
    }
    printf("\n");
  }  
  
  //dot product and print
  for (i = 0; i < 100; i++) {
    for (j = 0; j < 100; j++) {
      for (k = 0; k < 100; k++) {
	part += matrix[0][i][k] * matrix[1][k][j];
      }
      matrix[2][i][j] = part;
      part = 0;
    } 
  }
 for (j = 0; j < 100; j++) {
   if (!(j % 10)) {
     for (k = 0; k < 100; k++) {
       if (!(k % 10)) printf("%d ", matrix[2][j][k]);
     }
   printf("\n");
   }
 }
  
  return 0;
}
