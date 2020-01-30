#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>



void * slowprintf (void *arg ) {
    char *msg ;
    int contador;
    msg = ( char *) arg ;
    for ( contador = 0 ; contador < strlen ( msg ) ; contador++ ) {
        printf (" %c", msg [contador]);
        fflush ( stdout );
        usleep (1000000) ;
    }
}

int main(int argc , char *argv []) {
    pthread_t h1;
    pthread_t h2;
    char *hola = "Hola ";
    char * mundo = " mundo ";
    pthread_create (&h1 , NULL , slowprintf , ( void *) hola);
    pthread_create (&h2 , NULL , slowprintf , ( void *) mundo );
    pthread_join(h1 , NULL);
    pthread_join(h2 , NULL);
    printf ("Fin \n");
}
