#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>

#define NUMTH 10

int suma_total=0;

void *sumar(void *arg) {
    int suma=suma_total;
    suma = suma + 100;
    //printf("Suma: %d\n",suma);
    sleep(1);
    printf("Pthread =%ld despierta \n", pthread_self());

    suma_total=suma;
}

int main() {
    pthread_t th[NUMTH];
    int contador;
    for (contador=0;contador<NUMTH;contador++) 
    {
        pthread_create(&th[contador],NULL,sumar,NULL);
    }

    for(contador=0;contador<NUMTH; contador++)
    {
        pthread_join(th[contador], NULL);
    }


    printf("Suma total = %d\n",suma_total);
}