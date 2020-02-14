/* 1.Utilizando threads acceder a un archivo e imprimir varias veces por pantalla el contenido del mismo de forma simultanea. Antes de imprimir el contenido del archivo por pantalla, preguntar al usuario cuantos threads se quieren lanzar para recorrer el archivo. */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void * print_file(void * fp){
  FILE * f = (FILE *)fp;
  int c;

  while((c=getc(f))!=EOF){
    putchar(c);
  }

  fseek(f, 0, SEEK_SET);
  pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
  FILE *fp;
  int howmanythreads;
  int counter;
  pthread_t *threads;

  printf("How many threads? ");
  scanf("%d", &howmanythreads);

  threads = malloc(sizeof(pthread_t) * howmanythreads);

  fp = fopen("ficheiro.txt", "r");

  for (counter=0; counter<howmanythreads; counter++) {
    pthread_create(&threads[counter], NULL, print_file, (void *) fp);
    pthread_join(threads[counter], NULL);
  }

  fclose(fp);

  return 0;
}
