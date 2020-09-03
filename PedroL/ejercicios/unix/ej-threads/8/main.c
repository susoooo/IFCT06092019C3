#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

#define FILLTHRDNUM 2
#define CALCTHRDNUM 10
#define RANDNUMMAX 100

struct arrargs {
  int *arr, *sum, index, interval, op;
};

void *ArrayOps(void *arrargs);
void FillArray (int *arr, int index, int interval);
void SumArray (int *arr, int *sum, int index, int interval);

int main (int argc, char** argv) 
{
  pthread_t thrd[CALCTHRDNUM];
  int i, *arr, *sum, asize, result;
  struct arrargs Faargs;

  result = 0;

  if (argc < 2) {
    printf("Tamano del array de enteros: ");
    scanf("%d", &asize);
  } else {
    asize = atoi(argv[1]);
  }
  arr = (int*)malloc(sizeof(int) * asize);
  sum = (int*)malloc(sizeof(int) * CALCTHRDNUM);
  Faargs.arr = arr;
  Faargs.sum = sum;

  //threaded array fill
  Faargs.interval = (asize / FILLTHRDNUM);
  Faargs.op = 0;
  for (i = 0; i < FILLTHRDNUM; i++) {
    if (i == (FILLTHRDNUM - 1)) {
      Faargs.interval += asize % FILLTHRDNUM;
    }
    Faargs.index = i;
    pthread_create(&thrd[i], NULL, ArrayOps, &Faargs);
    usleep(100);
  }
  for (i = 0; i < FILLTHRDNUM; i++) {
    pthread_join(thrd[i], (void**)NULL);
  }

  printf("\n");

  //threaded array sum
  Faargs.interval = (asize / CALCTHRDNUM);
  Faargs.op = 1;
  for (i = 0; i < CALCTHRDNUM; i++) {
    if (i == (CALCTHRDNUM - 1)) {
      Faargs.interval += asize % FILLTHRDNUM;
    }
    Faargs.index = i;
    pthread_create(&thrd[i], NULL, ArrayOps, &Faargs);
    usleep(100);
  }
  for (i = 0; i < CALCTHRDNUM; i++) {
    pthread_join(thrd[i], (void**)NULL);
    result += Faargs.sum[i];
    printf("%d ", Faargs.sum[i]);
  }

  printf("\nLa suma del array de %d enteros es: %d\n", asize, result);

  free(arr);
  free(sum);

  printf("\tticks: %ld\n", clock());
  return 0;
}

void *ArrayOps (void *arrargs) 
{
  struct arrargs *Faargs = arrargs;
  int *arr, *sum, index, interval;
  
  arr = Faargs->arr;
  sum = Faargs->sum;
  index = Faargs->index;
  interval = Faargs->interval;
 
  switch (Faargs->op) {
    case 0:
    FillArray(arr, index, interval);
    break;

    case 1:
    SumArray(arr, sum, index, interval);
    break;
  }  
  
  pthread_exit((void*)NULL);
}

void FillArray (int *arr, int index, int interval) 
{
  int start, count;

  start = index * interval;
  count = start + interval;
  for (int i = start; i < count; i++) {
    arr[i] = (rand() % RANDNUMMAX);
    printf("%d ", arr[i]);
  }
}

void SumArray (int *arr, int *sum, int index, int interval) 
{
  int start, count;
   
  start = index * interval;
  count = start + interval;
  for (int i = start; i < count; i++) {
    sum[index] += arr[i];
  }

  pthread_exit((void*)NULL);
}
