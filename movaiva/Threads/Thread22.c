/*
Crea un programa que calcule el factorial de un número usando threads. 
El programa pedirá el número del que se quiere calcular el factorial, 
y el número de threads que se desean utilizar para el cálculo. Creará 
tantos threads como se le indiquen y dividirá el calculo del factorial 
entre los threads indicados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

struct factorial{
    int inicio;
    int fin;
};

void *factorial (void *numero);

int main ()
{
    struct factorial datosFactorial;
    int contadorFor;
    int numThreads;
    pthread_t threads[1000];
    int factorialTotal;
    int numFactorial;
    int rango;
    int *factorialParcial;

    numThreads=0;
    numFactorial=0;
    rango=0;
    factorialTotal=1;

    do
    {
        printf("Introduzca el numero del que quiere calcular el factorial: ");
        scanf("%d",&numFactorial);
    
        printf("Introduzca los hilos que quiere ejecutar: ");
        scanf("%d",&numThreads);
        if(numFactorial<numThreads)
        {
            printf("Error. Demasiados hilos para calcular el factorial");
        }
    } while (numFactorial<numThreads);

    rango=numFactorial/numThreads;
    
    for(contadorFor=0;contadorFor<numThreads;contadorFor++){
        datosFactorial.inicio=numFactorial-rango*contadorFor;
        printf("Inicio: %d\n",datosFactorial.inicio);
        if((contadorFor+1)==numThreads){
            if(numFactorial%numThreads!=0)
            {
                datosFactorial.fin=datosFactorial.inicio-(rango-1)-(numFactorial%numThreads);
            }
            else
            {
                datosFactorial.fin=datosFactorial.inicio-(rango-1);
            }
        }
        else
        {
            datosFactorial.fin=datosFactorial.inicio-(rango-1);
        }
        
        printf("Fin: %d\n",datosFactorial.fin);
        pthread_create(&threads[contadorFor],NULL,factorial,(void *)&datosFactorial);
        pthread_join(threads[contadorFor],(void *)&factorialParcial);
        printf("Factorial Parciales en Prog. Principal: %d\n",*factorialParcial);
        factorialTotal*=(*factorialParcial);
    }

    printf("Factorial: %d\n",factorialTotal);
}

void *factorial(void *datos)
{
    int contadorFor;

    struct factorial *datosFactorial;

    int *factorialParcial;

    factorialParcial=malloc(sizeof(int));

    *factorialParcial=1;

    datosFactorial=(struct factorial *) datos;

    printf("Inicio: %d Fin: %d;\n",datosFactorial->inicio,datosFactorial->fin);
    
    for(contadorFor=datosFactorial->inicio; contadorFor>=datosFactorial->fin;contadorFor--)
    {
        printf("%d\n",contadorFor);
        *factorialParcial*=contadorFor;
    }
    printf("\tFactorial Parcial: %d\n",*factorialParcial);
    pthread_exit(factorialParcial);    
}