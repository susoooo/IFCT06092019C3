#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define NUMBER_OF_CHILDS 5

void fatherFunc(int mp[], int cp[]);
void childFunc(int mp[], int cp[]);

int main(void) {
  int metal_pipe[2];
  int copper_pipe[2];
  int counter;

  pid_t childs[NUMBER_OF_CHILDS];

  fatherFunc(metal_pipe, copper_pipe);



  for (counter = 0; counter < NUMBER_OF_CHILDS; counter++) {
    childs[counter] = fork();
    switch (childs[counter]) {
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
      /* TODO: maybe out of loop? */
      ;;
    }
  }
  return 0;
}

void fatherFunc(int mp[], int cp[]){
  char token = '*';

  close(mp[0]);

  while (1) {
    write(mp[1], &token, sizeof(char));
    sleep(1);
  }
}

void childFunc(int mp[], int cp[]) {
  char token;
  int total_tokens;

  close(mp[1]);

  total_tokens = 0;
  while(1) {
    read(mp[0], &token, sizeof(char));
    sleep(1);
    if (token == '*'){
      total_tokens++;
      printf("Child %d: received token '%c', %d times\n", getpid(), token, total_tokens);
    } else {
      printf("WTF!!??\n");
    }

  }
}
