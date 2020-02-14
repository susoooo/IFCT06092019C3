#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#define NUMTH 10

int suma_total = 0;

void *sumar(void *arg) 
{
	int i;
	int suma=suma_total;
	suma = suma + 100;
	suma_total=suma;
	sleep(1);
	printf("Pthread =%d despierta \n", (int)pthread_self());

}

int main()
{
	pthread_t th[NUMTH];
	int i;
	int i2;
	i2=0;
	
	for (i=0;i<NUMTH;i++)
	{
		pthread_create(&th[i], NULL, sumar, NULL);
	}
	
	do
	{
		pthread_join(th[i2], NULL);
		i2++;
	}
	while(i2<NUMTH);
	
	printf("Suma total = %d\n", suma_total);
}
