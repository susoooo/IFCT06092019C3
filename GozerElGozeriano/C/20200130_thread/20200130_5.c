/*
Hilos. Ejercicio 5
Realizar un programa que cree 10 threads para sumar los datos de un fichero “números.dat” que
contiene 1000 números enteros. Cada thread debe sumar 100 números del fichero. El thread n
sumará los números entre n*100 y (n*100)+99 del array (n varía de 0 a 9). Cuando terminen el
programa principal escribirá la suma total.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#define FILENAME "numeros.dat"
#define WORKPART 100
#define PARTNUMS 10

struct filepart
{
	int numbers[WORKPART];
	int result;
};

void * sumpart(void * args)
{
	int total;
	int contador;
	total = 0;
	struct filepart *p;
	p=(struct filepart *)args;
	for(contador=0;contador<WORKPART;contador++)
		total += p->numbers[contador];
	p->result=total;
	pthread_exit(NULL);
}

void loadData(struct filepart * data)
{
	FILE * datafile;
	int contador;
	int contador2;
	char buff[30];
	
	datafile = fopen(FILENAME,"r");
	if(datafile!=0)
	{
		for(contador=0;contador<PARTNUMS;contador++)
		{
			for(contador2=0;contador2<WORKPART;contador2++)
			{
				fgets(buff,30,datafile);
				data[contador].numbers[contador2]=(int)strtol(buff, (char **)NULL,10);
			}
		}
		fclose(datafile);
	}
}

int main(void)
{
	int contador;
	struct filepart fileparts[PARTNUMS];
	pthread_t h[PARTNUMS];
	int total;
	
	total=0;
	loadData(fileparts);
	
	for(contador=0;contador<PARTNUMS;contador++)
		pthread_create(&h[contador],NULL,sumpart,(void *)&fileparts[contador]);
	
	for(contador=0;contador<PARTNUMS;contador++)
	{
		pthread_join(h[contador],NULL);
		total = total + fileparts[contador].result;
	}
	printf("%d\n",total);
	return(0);
}
