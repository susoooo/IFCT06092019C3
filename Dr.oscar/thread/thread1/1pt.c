#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * thread_function(void *arg)
{
    int i;
    for (i=0 ; i<=2; i++)
    {
        printf("Darth Vader dice Yo soy tu padre!\n");
        sleep(1);
    }
    printf("Vader existe\n");
    return NULL;
}

int main(int argc, char ** argv)
{
    pthread_t mythread;
    printf("Ejecutando un nuevo mensaje  . . .\n");
    if (pthread_create(&mythread, NULL, thread_function, NULL)==-1)
    {
        printf("error.");
        abort();
    }
    printf("Esperando un nuevo mensaje\n");
    pthread_join(mythread, NULL);
    if (pthread_join(mythread, NULL)==-1)
    {
        printf("error Waiting thread.");
        abort();
    }
    exit(0);
}
