#include <stdio.h>
#include <pthread.h>

struct rangostrct {
  int sumandos[10], resultado;
};

void *suma(void *rango);

int main(int argc, char** argv) {
  pthread_t thread;
  struct rangostrct Rangomain = {
    .sumandos = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
  };
  int* resultado;

  pthread_create(&thread, NULL, suma, (void*)&Rangomain);
  pthread_join(thread,(void*)&resultado);

  printf("\nSuma en Prog. Principal: %d\n", Rangomain.resultado);

  return(0);
}

void* suma(void* paramstrct) {
  struct rangostrct* Rangosuma = paramstrct;
  int suma;
  int* valores = Rangosuma->sumandos;

  suma = 0;

  for (int i = 0; i < 10; i++) {
      suma = suma + Rangosuma->sumandos[i];
  }
  Rangosuma->resultado = suma;
  printf("\tThread Suma: %d\n", suma);

  pthread_exit((void*)&suma);
}
