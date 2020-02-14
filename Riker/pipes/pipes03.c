/* 1.Escribir un programa que cree un proceso padre y un proceso hijo. Entre ellos se establecerá una tubería, de tal forma que uno de ellos pedirá datos por pantalla al usuario, se los enviará al otro proceso, y este los imprimirá por pantalla. */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writer(int w);
void reader(int r);

int main(void)
{
  int metal_pipe[2];
  pid_t child;

  pipe(metal_pipe);
  child = fork();

  switch (child) {
  case -1: {
    printf("Error creating child process\n");
    exit(1);
    break;
  }
  case 0: {
    close(metal_pipe[0]);
    writer(metal_pipe[1]);
    break;
  }
  default:
    close(metal_pipe[1]);
    reader(metal_pipe[0]);
    break;
  }

  return 0;
}

void writer(int w){
  int data;

  printf("Writer: ");
  scanf("%d", &data);
  while(data != 0){
    write(w, &data, sizeof(int));
    scanf("%d", &data);
  }
  write(w, &data, sizeof(int));

  exit(0);
}

void reader(int r) {
  int data;

  read(r, &data, sizeof(int));
  while(data != 0){
    printf("Reader: %d\n", data);
    read(r, &data, sizeof(data));
  }
  exit(0);
}
