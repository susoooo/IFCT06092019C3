/* Realizar un programa que cree un thread llamado “imprimir” que imprime 3 veces el mensaje: */
/* “Thread says hi!”, duerme 1 segundo entre cada mensaje y luego indica que termina. El programa */
/* padre del thread debe esperar hasta que termine el thread hijo. */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

struct Message {
  char *text;
  int times;
  int terminated;
};

void * print_func(void * message) {
  int counter;
  struct Message *m = (struct Message *) message;

  for(counter = 0; counter<m->times; counter++)
    printf("%s\n", m->text);

  printf("This thread is quitting!\n");

  m->terminated = 1;

  pthread_exit((void*) 1);
}

int main(int argc, char* argv[]){

  pthread_t t_print;
  int terminated;

  struct Message message;
  message.times = 3;
  message.text = malloc(sizeof("I say Hei!")+1);
  message.text = "I say Hei!";
  message.terminated = 0;

  pthread_create(&t_print, NULL, print_func, (void*) &message);

  pthread_join(t_print, NULL);

  if(message.terminated == 1){
    printf("Thread 't_print' has ended\n");
  } else {
    printf("Something wrong has happend!\n");
  }

  return(0);
}
