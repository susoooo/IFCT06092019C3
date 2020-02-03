/* 1.Dado un array de 100 enteros, tras inicializarlo con valores aleatorios crea dos threas que simultaneamente lo recorran, uno de ellos de principio a fin y otro de ellos de fin a principio. Conforme lo van recorriendo, los threads deberán imprimir quienes son (su ID) el número del elemento en el que están y el valor que tiene ese elemento. Utiliza una variable global para el array y otras dos variables globales para cada uno de los manejadores de los threads. */

/* Obten el tiempo que tarda el programa en realizar el proceso pedido. Vuelve a realizar el programa pero con un array de 1000 elementos y observa el tiempo que tarda. Repite la operación para arrays de 10000, 100000, 1000000 y 1000000000 elementos. ¿Hasta que número de elementos consigues que la aplicación funcione? Para los últimos casos puedes prescindir de sacar mensajes para cada elemento del array y hacerlo solo de 100 en 100 elementos o de 1000 en 1000 elementos. */

// [100]     :: ./threads09  0,00s user 0,01s system 110% cpu 0,006 total
// [1000]    :: ./threads09  0,00s user 0,02s system 45% cpu 0,052 total
// [10000]   :: ./threads09  0,04s user 0,12s system 23% cpu 0,707 total
// [100000]  :: ./threads09  0,37s user 1,25s system 25% cpu 6,425 total
// [1000000] :: ./threads09  3,59s user 12,46s system 24% cpu 1:05,76 total
// [1000000000] :: integer overflow when generating random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>

#define SIZE 100000

int array[SIZE];

pthread_t right_thread;
pthread_t left_thread;

void loadArray();
void readArray(int direction);
void* readArrayLeft();
void* readArrayRight();

int main(int argc, char *argv[])
{

  int direction;

  /* fill array */
  loadArray();

  /* launch threads */
  /* right-to-left */
  if (pthread_create(&right_thread,NULL, readArrayLeft, NULL)){
      printf("Error creating thread. Quit!!");
      exit(1);
  }
  /* left-to-right */

  direction = 1;
  if (pthread_create(&left_thread,NULL, readArrayRight, NULL) != 0){
      printf("Error creating thread. Quit!!");
      exit(1);
  }
  pthread_join(right_thread, NULL);
  pthread_join(left_thread, NULL);

  return 0;
}

void loadArray(void){
  int counter;
  for (counter=0; counter<SIZE; counter++) {
      array[counter] = rand() % (SIZE*10);
  }
}

void readArray(int dir){
  int counter;
  pthread_t this_thread;
  int value;
  int position;

  this_thread = pthread_self();
  for (counter=0; counter<SIZE; counter++) {
    if(dir == -1){
      value = array[counter];
      position = counter;
    } else {
      value = array[SIZE-counter-1];
      position = SIZE-counter-1;
    }

    printf("ID:%ld Pos:%d Val:%d\n", this_thread, position, value);
  }
}

void * readArrayLeft(){
  readArray(-1);
  pthread_exit(NULL);
}

void * readArrayRight(){
  readArray(1);
  pthread_exit(NULL);
}
