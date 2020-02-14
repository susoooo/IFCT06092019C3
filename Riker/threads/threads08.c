/* Crea un array de n enteros, siendo n un número que se le pide al usuario por pantalla. Crea 2 threads que rellenen el array de números aleatorios, uno desde la mitad hasta el pricipio y otro desde la mitad hasta el final. Luego reparte el array en 10 partes y utiliza 10 threads para calcular la suma de los elementos incluidos en el array. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include <math.h>

struct integers {
  int *array;
  int array_size;
  int direction;
  int step;
  int current;
};

void initArrayToZeros(struct integers *array);
void loadRandomNumbers(int *array, int size, int direction);
void* loadArray(void *n);
void* sumNumbers(void *n);
long oneThreadSum(struct integers array);

int main(int argc, char *argv[])
{
  struct integers numbers;
  int array_size;
  int counter;
  int t_exit_status;
  pthread_t load_threads[2];
  pthread_t calc_threads[10];
  long *res;
  long total;

  /* randomness seed */
  srand(time(NULL));

  /* ask how many numbers */
  printf("N? ");
  scanf("%d", &array_size);

  /* memory allocation */
  numbers.array = (int *)malloc(sizeof(int) * array_size);
  numbers.array_size = array_size;

  initArrayToZeros(&numbers);

  /* load random numbers (see loadArray function note) */
  numbers.direction = -1;
  pthread_create(&load_threads[0],NULL, loadArray, (void *)&numbers);
  pthread_join(load_threads[0], NULL);
  numbers.direction = 1;
  pthread_create(&load_threads[1],NULL, loadArray, (void *)&numbers);
  pthread_join(load_threads[1], NULL);


  /* launch threads */

  /* IMPROVE: better solution to big arrays. make a variable step so the las thread have a balanced work. */
  numbers.step = (int)round(numbers.array_size / 10.0);
  numbers.current = 0;

  total = 0;
  for(counter=0; counter < 10; counter++){
    t_exit_status = pthread_create(&calc_threads[counter],NULL, sumNumbers, (void *)&numbers);
    if(t_exit_status != 0){
      printf("Error creating thread. Quit!!");
      exit(1);
    }
    t_exit_status = pthread_join(calc_threads[counter], (void *)&res);
      if(t_exit_status != 0){
      printf("Error joining thread. Quit!!");
      exit(1);
    }
    total = total + *res;

    /* QUESTION: why here works fine,and before pthread_join() the total is wrong? */
    numbers.current += numbers.step;
  }

  /* print array and result */
  printf("%d random numbers: ", numbers.array_size);
  for (int i = 0; i < numbers.array_size; ++i) {
    printf("%d, ", numbers.array[i]);
  }
  printf("\n");
  printf("10 Threads Sum: %ld\n", total);
  printf(" 1 Thread  Sum: %ld\n", oneThreadSum(numbers));

  /* freeing memory */
  free(numbers.array);

  return 0;
}

void initArrayToZeros(struct integers *array){
  int counter;

  for (counter=0; counter<array->array_size; counter++) {
    *(array->array+counter) = 0;
  }
}

/* with direction equal to -1 fills the array from middle to 0. with
direction equal to 1 fills the aray from midde to 'size-1' 
   NOTE: the numbers generated are between and array's size by 10.*/
void loadRandomNumbers(int *array, int size, int direction){
  int counter;

  /* middle to left */
  if(direction == -1) {
    for (counter=size/2; counter>=0; counter--) {
      array[counter] = rand() % (size*10);
    }
    /* middle to right */
  } else {
    for(counter=size/2; counter<size; counter++){
      array[counter] = rand() % (size*10);
    }
  }
}

void* loadArray(void *n){
  struct integers *numbers = (struct integers *) n;

  loadRandomNumbers(numbers->array, numbers->array_size, numbers->direction);

  pthread_exit(NULL);
}

void* sumNumbers(void *n){
  struct integers *numbers = (struct integers *) n;
  int counter;
  long *res;

  res = malloc(sizeof(long));

  *res = 0;
  for(counter=numbers->current; counter<(numbers->current+numbers->step); counter++){
    *res = *res + numbers->array[counter];
  }

  if((numbers->current/numbers->step == 9) && (numbers->array_size > (numbers->step * 10))){
    for(counter=counter; counter < numbers->array_size; counter++){
      *res = *res + numbers->array[counter];
    }
  }

  pthread_exit((void *) res);
}

long oneThreadSum(struct integers array){
  int counter;
  long res;

  res = 0;
  for (counter=0; counter<array.array_size; counter++) {
    res = res + *(array.array+counter);
  }

  return res;
}
