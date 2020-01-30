/*Hilos. Ejercicio 5
Realizar un programa que cree 10 threads para sumar los datos de un fichero “números.dat” que
contiene 1000 números enteros. Cada thread debe sumar 100 números del fichero. El thread n
sumará los números entre n*100 y (n*100)+99 del array (n varía de 0 a 9). Cuando terminen el
programa principal escribirá la suma total.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

FILE* archivo; 
//void *suma(void *rango);
pthread_attr_t attr;
int f=0;
pthread_t thread[10];

void *suma(void *rango) {
	int j=0, valor, *suma, num=0;
	sleep(1);
	valor=* ((int *) rango);
	suma=(int *)malloc (sizeof (int));
	*suma=0;

	printf("Rango: %d a %d\n",valor+1,valor+100);
	lseek(f, sizeof(int) * valor, SEEK_SET);

	for(j=0;j<100;j++) {
	fread(&f,sizeof(int),1,archivo);
	*suma+=num;
	
	}
int main() {
	
	int i=0, n=0, rango=0, *estado, pestado=0, nbytes=0, nreg=0; estado=&pestado; pthread_attr_init(&attr);
	
	archivo = fopen("numeros.dat", O_RDONLY); //ABRIR UN ARCHIVO EN MODO DE LECTURA NO PERMITE MODIFICACION
	
	if (f == -1) {
    printf("Error al abrir el archivo\n");
    exit(0);
					
}
	nbytes=lseek(f,0,SEEK_END);
	nreg=nbytes/sizeof(int);
	for(i=0;i<10;i++) {
		
	pthread_create(&thread[i], NULL, suma,(void*)rango);
	sleep (1);
	rango+=100;
}
for(i=0;i<10;i++) {
	pthread_join(thread[i], NULL);
	printf("Suma Parciales en Prog. Principal: %d\n",*estado);
	n+=*estado;
}
	printf("Suma Total: %d\n",n);
	printf("Total numeros sumados: %d\n",nreg);
	close(f);
return(0);

	printf("\tSuma Parcial: %d\n",*suma);
	
  	pthread_exit(NULL);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	