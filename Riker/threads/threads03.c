/* Realizar un programa que declare una función multiplicar y que le pase como parámetros 2 */
/* números. A continuación el programa principal debe preparar los parámetros del thread y lanzar 1 */
/* thread con multiplicar, escribir su propiedad identidad y terminar. */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

struct Numbers {
  int a;
  int b;
};

void * multiply(void * numbers) {
  pthread_t this_thread;
  struct Numbers *n = (struct Numbers*) numbers;
  int *sum;

  *sum = n->a + n->b;

  this_thread = pthread_self();

  printf("Multiply thread with ID %u. sum::%d\n", this_thread, *sum); 

  pthread_exit(sum);
}

int main(int argc, char *argv[])
{
  pthread_t t_main;
  pthread_t t_mul;
  pthread_attr_t t_main_attr;

  int attr;

  struct Numbers numbers;

  numbers.a = 3;
  numbers.b = 4;

  t_main = pthread_self();
  attr = pthread_attr_init(&t_main_attr);

  pthread_create(&t_mul, NULL, multiply, (void*)&numbers);

  printf("Main launching multiply thread with ID %u.\n", t_mul);


  pthread_join(t_mul, NULL);

  printf("End of Main thread witd ID %u.\n", &t_main);
  pthread_exit(NULL);
}
