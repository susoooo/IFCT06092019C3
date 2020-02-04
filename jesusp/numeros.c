# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>
int *n;
int numero(void * num)
{
int numer;
printf("dame un numero");
scanf("%d",&numer);
return(numer);
}
int suma()
{
suma=suma+*n;
printf("La suma es:%d",suma);
}

int main()
{

int contador;
contador=0;

pthread_t h1;
pthread_t h2;

    n=malloc(sizeof(int)*numero());
for(contador=1;contador<=numer;contador++)
{
n[contador]=rand()%10;
}
for(contador=1;contador<=n;contador++)
    {
        pthread_create(&h1,NULL,numero,(void*)suma);
        pthread_create(&h2,NULL,numero,(void*)suma);
    }
    pthread_join(h1,NULL);
    pthread_join(h2,NULL);

}
