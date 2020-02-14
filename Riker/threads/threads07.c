/* 2.Crea un programa que calcule el factorial de un número usando threads. El programa pedirá el número del que se quiere calcular el factorial, y el número de threads que se desean utilizar para el cálculo. Creará tantos threads como se le indiquen y dividirá el calculo del factorial entre los threads indicados. */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

struct Range {
  int limit;
  int step;
  int current;
};

void * calc_factorial(void *r);

int main(int argc, char *argv[])
{
  pthread_t *threads;
  int factorial_number;
  int threads_number;
  int counter;
  long *res;
  long total;

  struct Range range;

  printf("Factorial of? ");
  scanf("%d", &factorial_number);
  printf("How many threads? ");
  scanf("%d", &threads_number);

  threads = malloc(sizeof(pthread_t) * threads_number);

  range.limit = factorial_number;
  range.step = factorial_number / threads_number;
  range.current = 1;

  for (counter=0; counter<threads_number; counter++) {
    pthread_create(&threads[counter], NULL, calc_factorial, (void *)&range);
  }

  total = 1;
  for (counter = 0; counter < threads_number; counter++) {
    pthread_join(threads[counter], (void *)&res);
    total *= *res;       /* TODO:? */
  }

  printf("TOTAL: %ld\n", total);

  return 0;
}

void * calc_factorial(void *r) {
  struct Range *range = (struct Range*) r;
  int *total;
  int counter; 
  int until; 

  total = malloc(sizeof(int));


  printf("range.limit: %d\n", range->limit);
  printf("range.step: %d\n", range->step);
  printf("range.current: %d\n", range->current);

  counter = range->current;
  *total = 1;

  if ((range->limit - range->current) >= range->step)
    until = range->current+range->step;
  else
    until = range->limit;

  while ((counter <= until) && (counter<=range->limit)){
    /* printf("counter: %d,, (range->current+range->step): %d\n", counter, (range->current+range->step)); */
    *total = *total * counter;
    counter++;
  }

  range->current = counter;

  pthread_exit((void *) total);
}
