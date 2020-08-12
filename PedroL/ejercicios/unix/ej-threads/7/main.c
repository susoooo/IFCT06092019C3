#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

int ThreadedFactorialLauncher(int calcnum, int thnum);
void *ThreadedFactorialCalc(void *boundstrct);

struct boundstrct {
  int upbound, interval, result;
};

int main(int argc, char** argv) 
{
  int calcnum, thnum, result;

  if (argc == 1) {
    printf("Numero a calcular: ");
    scanf("%d", &calcnum);
    printf("Numero de threads: ");
    scanf("%d", &thnum);
  } else if (argc == 2) {
    calcnum = atoi(argv[1]);
    printf("Numero de threads: ");
    scanf("%d", &thnum);
  } else {
    calcnum = atoi(argv[1]);
    thnum = atoi(argv[2]);
  }

  if (thnum < calcnum) {
    printf("\nEl factorial de %d es %d\n", calcnum, ThreadedFactorialLauncher(calcnum, thnum));
    printf("\tticks: %ld\n", clock());
  } else {
    printf("El numero de threads no puede ser mayor al numero a calcular.\n");
  }

  return 0;
}

int ThreadedFactorialLauncher(int calcnum, int thnum) 
{
  pthread_t thrd[thnum];

  struct boundstrct Split;
  Split.upbound = calcnum - 1;
  Split.interval = calcnum / thnum;
  Split.result = calcnum;

  for (int i = 0; i < thnum; i++) {
    if (i == (thnum - 1)) {
      Split.interval += calcnum % thnum - 1; 
    }
    pthread_create(&thrd[i], NULL, ThreadedFactorialCalc, &Split);
    usleep(1000);
  }

  return Split.result;
}

void *ThreadedFactorialCalc(void *boundstrct) 
{
  struct boundstrct* Split = boundstrct;
  
  if (Split->interval != 0) {  
    for (int i = 0; i < Split->interval; i++) {
      Split->result = Split->result * Split->upbound;
      Split->upbound -= 1; 
    }
  }

  pthread_exit((void*)NULL);
}
