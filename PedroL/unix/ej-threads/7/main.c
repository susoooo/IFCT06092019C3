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

int main(int argc, char** argv) {
  int calcnum, thnum, result;

  if (argc == 1) {
    printf("Numero a calcular: ");
    scanf("%d", &calcnum);
    printf("Numero de threads: ");
    scanf("%d", &thnum);
  } else if (argc == 2) {
    calcnum = atoi(argv[1]);

    printf("Numero de threds: ");
    scanf("%d", &thnum);
  } else {
    calcnum = atoi(argv[1]);
    thnum = atoi(argv[2]);
  }

  printf("\nEl factorial de %d es %d\n", calcnum, ThreadedFactorialLauncher(calcnum, thnum));
  printf("\tticks: %ld\n", clock());

  return 0;
}

int ThreadedFactorialLauncher(int calcnum, int thnum) {
  pthread_t thrd[thnum];
  struct boundstrct Split[thnum];
  int lefttosplit, interval, result;
  
  lefttosplit = calcnum;
  interval = calcnum / thnum;
  result = 0;

  for (int i = 0; i < thnum; i++) { 
    Split[i].upbound = lefttosplit;
    Split[i].interval = interval;
    Split[i].result = lefttosplit;
    lefttosplit -= interval;

    printf("Split[%d].upbound = %d\n", i, Split[i].upbound);    
  } 
  Split[thnum - 1].interval -= (calcnum % thnum) + 1;

  printf("\ncalcnum %% thnum = %d\n", calcnum % thnum);
  printf("Split[%d].interval = %d\n", thnum - 2, Split[thnum - 2].interval);
  printf("Split[%d].interval = %d\n\n", thnum - 1, Split[thnum - 1].interval);

  for (int i = 0; i < thnum; i++) {
    pthread_create(&thrd[i], NULL, ThreadedFactorialCalc, &Split[i]);
	usleep(10000);
  }

  result = Split[0].result;
  printf("Split[0].result = %d\n", result);
  for (int i = 1; i < thnum; i++) {
    printf("Split[%d].result = %d\n", i, Split[i].result);
    result = result * Split[i].result;
  }

  return result;
}

void *ThreadedFactorialCalc(void *boundstrct) {
  struct boundstrct* Split = boundstrct;
  
  if (Split->interval != 0) {  
    for (int i = 1; i <= (Split->interval); i++) {
     Split->result = (Split->result) * ((Split->upbound) - i); 
    }
  }

  pthread_exit(NULL);
}
