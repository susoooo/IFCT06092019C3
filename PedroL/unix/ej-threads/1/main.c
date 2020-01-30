#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.>

void* thread_function(void* arg) {
  int i;
  for (i = 0; i < 3; i++) { 
    printf("Thread says hi!\n");
    sleep(1);
  }

  printf("Thread exits\n");
  return NULL;
}

int main(int argc, char** argv) {
  pthread_t mythread;

  printf("Launching new thread...\n");
  if(pthread_create(&mythread, NULL, thread_function, NULL)) {
    printf("Error creating thread.");
    abort();
  }

  printf("Waiting on join\n");
  pthread_join(mythread, NULL);

  exit(0);
}
