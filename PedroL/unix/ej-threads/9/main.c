#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

#define ARRSIZE 1000
#define PRINTSTEP 10

pthread_t thrd[2];
int smphr, arr[ARRSIZE];

void *RunTheArray(void *direction);

int main(int argc, char** argv[]) 
{
  int i, direction[2];
  
  //rellenar array con numeros aleatorios
  for (i = 0; i < ARRSIZE; i++) {
    arr[i] = rand() % 100;
  }

  //crear threads para recorrer e imprimir el array
  smphr = 1;
  for (i = 0; i < 2; i++) {
    direction[i] = i;
    pthread_create(&thrd[i], NULL, RunTheArray, (void*)&direction[i]);
  }
  smphr = 0;
  for (i = 0; i < 2; i++) {
    pthread_join(thrd[i], (void**)NULL);
  }

  printf("\n\tticks: %ld\n", clock());
  return 0;
}

void *RunTheArray(void *direction) 
{
  pthread_t selfid = pthread_self();
  int op;

  op = *(int*)direction;
  printf("ID:%ld op:%d\n", selfid, op);

  switch (op) {
    case 0:
    while(smphr != 0);
    for (int i = 0; i < ARRSIZE; i++) {
      if (!(i % PRINTSTEP))
        printf(" ID:%ld Pos:%d Val:%d\n", selfid, i, arr[i]);
    }
    break;

    case 1:
    while(smphr != 0);
    for (int i = ARRSIZE - 1; i > -1; i--) {
      if (!(i % PRINTSTEP))
        printf("#ID:%ld Pos:%d Val:%d\n", selfid, i, arr[i]);
    }
  }
  
  pthread_exit((void*)NULL);
}
