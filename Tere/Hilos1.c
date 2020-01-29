/*Realizar un programa que cree un thread llamado “imprimir” que imprime 3 veces el mensaje:
“Thread says hi!”, duerme 1 segundo entre cada mensaje y luego indica que termina. El programa
padre del thread debe esperar hasta que termine el thread hijo.*/

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * thread_function(void *arg) {
    int i;
    for ( i=0 ; i < 3 ; i++ ) {
        printf("Thread says hi!\n");
        sleep(1);
    }
        printf("Thread exists\n");
    return NULL;
}
int main(int argc, char ** argv) {

    pthread_t mythread;
        printf("Launching new thread . . .\n");
    if ( pthread_create(&mythread , NULL, thread_function, NULL ) ) {
        printf("error creating thread.");
        abort();
    }
        printf("Waiting on join\n");

pthread_join(mythread, NULL);



    exit(0);
}
