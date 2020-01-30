/* Realizar un programa que sume valores en concurrencia usando threads. El programa declara una */
/* variable global suma_total y un procedimiento que sumar que incrementa suma_total en 100 usando */
/* una variable local intermedia, se duerme un segundo y asigna la variable interna a suma_total. A */
/* continuación el principal crea 10 threads sumar, espera a que terminen, imprime el valor de suma */
/* calculado y termina */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>


static int total_sum;

void * sum(void *_);

int main(int argc, char *argv[])
{
  int counter;
  pthread_t threads[10];
  total_sum = 0;


  for (counter=0; counter<10; counter++) {
    pthread_create(&threads[counter], NULL, sum, NULL);
    pthread_join(threads[counter], NULL);
  }

  printf("Total Sum: %d\n", total_sum);

  return 0;
}

void * sum(void * numbers) {
  int local_variable; 

  local_variable = 100;

  sleep(1);

  total_sum += local_variable;
}
