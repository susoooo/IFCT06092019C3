#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_t thread1, thmain;
pthread_attr_t attr;

struct factorsth {
    int num1, num2, result;
};

void *multiplicar (void *arg)
{
  int a, b;
  struct factorsth *p_Datos = arg;
  pthread_t thid = pthread_self();

  a = (p_Datos->num1);
  b = (p_Datos->num2);

  printf("Soy el thread 1 y voy a multiplicar \n");
  printf("La multiplicación es %d\n",a * b);
  printf("Soy el thread 1 y he terminado de multiplicar \n");

  pthread_exit(NULL);
}

int main(int argc, char** argv)
{
  struct factorsth Datos;

  if (argv[1] == (char*)NULL || argv[2] == (char*)NULL) {
    printf("not enough arguments\n");
    exit(0);
  }

  Datos.num1 = atoi(argv[1]);
  Datos.num2 = atoi(argv[2]);

  thmain = pthread_self();

  pthread_attr_init(&attr);
  printf("Soy la función main y voy a lanzar el thread \n");
  pthread_create (&thread1, NULL, multiplicar, (void*)&Datos);
  printf("Soy main: he lanzado el thread y termino\n");

  pthread_exit(NULL);
}
