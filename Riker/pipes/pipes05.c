/* 3.escribir un programa que lance un proceso insultator. Dicho proceso enviará al programa que lo ha creado, mediante una tubería cada segundo un insulto diferente. En cuanto el programa que lanza el proceso insultator reciba un insulto determinado, enviará por la tubería un mensaje al insultator en el que le solicitará que finalice su ejecución. Tras recibir la petición insultator enviará un mensaje de vuelta indicando su aceptación, y se cerrará. El programa, al recibir la aceptación por parte de insultator, imprimirá un mensaje y se cerrará tambien. */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fatherFunc(int mp[], int cp[]);
void childFunc(int mp[], int cp[]);

int main(void)
{
  int metal_pipe[2];
  int copper_pipe[2];
  pid_t child;

  pipe(metal_pipe);
  pipe(copper_pipe);

  child = fork();

  switch (child) {
  case -1: {
    printf("Error creating child process\n");
    exit(1);
    break;
  }
  case 0: {
    childFunc(metal_pipe, copper_pipe);
    exit(0);
    break;
  }
  default:
    fatherFunc(metal_pipe, copper_pipe);
    exit(0);
  }
  return 0;
}

void fatherFunc(int mp[], int cp[]) {
  char word[20];
  int status;

  close(mp[1]);
  close(cp[0]);

  status=0;
  read(mp[0], word, sizeof(char)*20);
  while(status != 1){
    if(strcmp(word, "minhoca!")==0){
      status = 1;
      write(cp[1], &status, sizeof(int));
    } else {
      printf("Father: Word %s\n", word);
      write(cp[1], &status, sizeof(int));
      read(mp[0], word, sizeof(word));
    }
  }

  status = 0;
  read(mp[0], &status, sizeof(int));
  if (status == 1) {
    printf("Father closing.\n");
  } else {
    printf("WTF!!??\n");
  }
}

void childFunc(int mp[], int cp[]){
  char words[6][20] = {"cenoura!", "leituga!", "morcego!", "minhoca!", "escarabello!", "espantallo!"};
  int w;
  int status;

  close(mp[0]);
  close(cp[1]);

  w = 0;
  status = 0;
  while(status != 1){
    write(mp[1], words[w], sizeof(words[w]));
    read(cp[0], &status, sizeof(int));
    sleep(1);
    w++;
  }

  write(mp[1], &status, sizeof(int));
  printf("Child exiting!\n");
}
