/* 2.Escribir un programa que cree un proceso para calcular un factorial. El programa preguntará por pantalla el número del cual se quiere calcular el factorial, lo enviará por una tubería al proceso que ha creado, y esperará a que este le envía de vuelta el resultado del cálculo. Tras recibirlo, el programa imprimirá el resultado del cálculo. */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void fatherFunc(int fd[]);
void childFunc(int fd[]);

int main(void)
{
  int metal_pipe[2];

  pid_t child;
  int n;

  pipe(metal_pipe);
  child = fork();

  switch (child) {
  case -1: {
    printf("Error creating child process\n");
    exit(1);
    break;
  }
  case 0: {
    childFunc(metal_pipe);
    break;
  }
  default:
    fatherFunc(metal_pipe);
  }
  return 0;
}


void fatherFunc(int fd[]){
  int n;
  int res;
  int factorial;

  printf("Father: N? ");
  scanf("%d", &n);

  write(fd[1], &n, sizeof(int));

  sleep(1);                     /* ????? */

  read(fd[0], &factorial, sizeof(int));

  printf("Father: Factorial %d\n", factorial);

  exit(0);
}

void childFunc(int fd[]) {
  int i;
  int total;
  int n;

  read(fd[0], &n, sizeof(int));

  total = 1;
  for (i = n; i > 1; i--) {
    total *= i;
  }

  write(fd[1], &total, sizeof(int));

  exit(0);
}

