#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * thread_function(void *arg) 
{
    int contador;
    for ( contador=0 ; contador < 3 ; contador++ ) 
    {
        printf("Thread says hi!\n");
        sleep(1);
    }
    printf("Thread exists\n");
    return NULL;
}

int main(int argc, char ** argv) 
{
    pthread_t mythread;
    printf("Launching new thread . . .\n");
    if ( pthread_create(&mythread, NULL, thread_function, NULL) ) 
    {
        printf("error creating thread.");
        abort();
    }
    printf("Waiting on join\n");
    pthread_join(mythread,NULL);

    exit(0);
}