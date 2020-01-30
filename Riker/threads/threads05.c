/* Realizar un programa que cree 10 threads para sumar los datos de un fichero “números.dat” que */
/* contiene 1000 números enteros. Cada thread debe sumar 100 números del fichero. El thread n */
/* sumará los números entre n*100 y (n*100)+99 del array (n varía de 0 a 9). Cuando terminen el */
/* programa principal escribirá la suma total. */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

struct Data {
  FILE *fp;
  int numbers_to_read;
  int current_pos;
};

void * read_and_sum(void * data) {
  struct Data *d = (struct Data*) data;

  int counter;
  char *line = NULL;
  size_t len;
  ssize_t nread;
  int *total; 

  total = malloc(sizeof(int));

  *total = 0;
  for (counter=0; counter<d->numbers_to_read; ++counter) {
    nread = getline(&line, &len, d->fp);
    *total = *total + atoi(line);
  }

 pthread_exit((void*) total);
}


int main(int argc, char *argv[])
{
  FILE *fp;
  struct Data data;
  pthread_t threads[10];
  int counter;
  char filename[] = "numbers.dat";
  int *results;
  long total_sum;

  total_sum = 0;
  /* open file */
  fp = fopen(filename, "r");

  data.fp = fp;
  data.numbers_to_read = 10;
  data.current_pos = 0;

  for (counter=0; counter<10; counter++) {
    pthread_create(&threads[counter], NULL, read_and_sum,(void*) &data);
  }

  for (counter=0; counter<10; counter++) {
    pthread_join(threads[counter], (void *)&results);
    total_sum += *results;
  }

  printf("Total sum: %ld\n", total_sum);

  fclose(fp);
  return 0;
}
