#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

pthread_attr_t attr;
pthread_t thread[10];
int f;

struct thdata {
  int rango;
  int estado;
};

void* suma(void* rango);

int main() {
  int i, n, rango, estado, nbytes, nreg;
  int* pestado;

  struct thdata Rango[10];
  
  n = 0;
  rango = 0;
  estado = 0;
  nbytes = 0;
  nreg = 0;
  pestado = &estado;

  pthread_attr_init(&attr);

  f = open("numeros.dat", O_RDONLY);

  if (f == -1) {
    printf("Error al abrir el archivo\n");
    exit(0);
  }

  nbytes = lseek(f, 0, SEEK_END);
  nreg = nbytes / sizeof(int);
  printf("Numero de registros: %d\n", nreg);;
  
  for (i = 0; i < 10; i++) {
    Rango[i].rango = 100 * i;
    printf("Rango[%d].rango: %d\n", i, Rango[i].rango);
  }
  
  for (i = 0; i < 10; i++) {
    pthread_create(&thread[i], NULL, suma, &Rango[i]);
    usleep(1000);
  }

  for (i = 0; i < 10; i++) {
    pthread_join(thread[i], NULL);
    printf("Suma Parciales en Prog. Principal: %d\n", Rango[i].estado);
    n += Rango[i].estado;
  }

  printf("Suma Total: %d\n", n);
  printf("Total numeros sumados: %d\n", nreg);

  close(f);
  return(0);
}

void* suma(void* rango) {
  int j, valor, num, suma;

  struct thdata* Rango = rango;
  
  j = 0;
  num = 0;
  valor = Rango->rango;
  suma = 0;

  printf("Rango: %d a %d\n", valor + 1, valor + 100);
  lseek(f, sizeof(int) * valor, SEEK_SET);

  for (j = 0; j < 100; j++) {
    read(f, &num, sizeof(int));
    suma += num;
  }

  printf("\tSuma Parcial: %d\n", suma);

  Rango->estado = suma;
  pthread_exit(NULL);
}
