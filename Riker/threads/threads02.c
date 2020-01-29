/* Realizar un programa que cree un thread que suma los valores que se le pasan como parámetro en */
/* un array de 10 enteros y cuando termina devuelve el valor calculado. */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

struct SumData {
  int result;
  int *numbers;
  int size; 
};


void * sum_func(void * sum_data);

int main(int argc, char *argv[])
{
  int counter;
  pthread_t t_sum;

  struct SumData sum_data;
  sum_data.result = 0;
  sum_data.size = 10;
  sum_data.numbers = malloc(sizeof(int)*sum_data.size);

  for(counter=0;counter<sum_data.size;counter++){
    *(sum_data.numbers+counter) = counter+3;
  }

  pthread_create(&t_sum, NULL, sum_func, (void *)&sum_data);
  pthread_join(t_sum, NULL);

  printf("res: %d\n", sum_data.result);

  return 0;
}

void * sum_func(void * sum_data){

  struct SumData *s = (struct SumData *) sum_data;

  int res;
  int counter;

  for (counter=0; counter<s->size; ++counter) {
    s->result = s->result + *s->numbers;
    s->numbers++;
  }

  pthread_exit((void*) 1);
}
