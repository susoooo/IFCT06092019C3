#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void * factorial(void * numero)
{
    int contador;
    int facto;
    contador=0;
    facto=1;
    for(contador=1;contador<=*(int*)numero;contador++)
    {
        facto=facto*contador;
    }
    printf("El factorial es:%d \n",facto);
}

int main(int numero)
{
pthread_t(fac);
int num;
printf("Inserta un numero:");
scanf("%d",&num);
if(num==0)
    {
        printf("Numero no válido");
    }
else
    {
       pthread_create(&fac,NULL,factorial,(void *)&num);
       usleep(1000000);
    }
pthread_join(fac,NULL);
}
