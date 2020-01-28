#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void *suma(void *rango);

int main()
{
    pthread_attr_t attr;
    pthread_t thread;
    int rango[]={1,2,3,4,5,6,7,8,9,10};
    int *resultado;
    pthread_attr_init(&attr);
    pthread_create(&thread, NULL, suma, &rango);
    pthread_join(thread, (void *)&resultado);
    printf("\nSuma en Prog. Principal: %d\n",*resultado);
    return(0);
}

void *suma(void *rango) 
{
    int contador;
    int *valores;
    int *suma;
    valores= (int *)rango;
    suma=(int *)malloc (sizeof (int));
    *suma=0;
    for(contador=0;contador<10;contador++) 
    {
        *suma=*suma+valores[contador];
    }
    printf("\tThread Suma : %d\n",*suma);
    pthread_exit(suma);
}