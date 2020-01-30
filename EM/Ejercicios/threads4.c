/* Realizar un programa que sume valores en concurrencia usando threads. El programa declara una
variable global suma_total y un procedimiento que sumar que incrementa suma_total en 100 usando
una variable local intermedia, se duerme un segundo y asigna la variable interna a suma_total. A
continuación el principal crea 10 threads sumar, espera a que terminen, imprime el valor de suma
calculado y termina.*/ 


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#define NUMTH 10




int suma_total = 0;


void * sumar(void*arg) {
	int i;
	int suma=0;
	suma= suma_total;
	suma = suma + 100;
	sleep(1);
	printf("Pthread =%d despierta \n", (int)pthread_self());
	suma_total=suma_total+suma;
}
int main() {
	pthread_t th[NUMTH];
	int i;
	for (i=0;i<NUMTH;i++) {
	pthread_create(&th[i],NULL,sumar,NULL);
		
}
	for (i=0;i<NUMTH;i++)
	{
	pthread_join(th[i],NULL);
	}
printf("Suma total = %d\n",suma_total);

}

