#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/*
Para compilar un código con hilos se hace con "lpthread" de la siguiente manera:
gcc -Wall -o Nombre_del_ejecutable Nombre_del_archivo.c -lpthread
*/
// Función suma
void *suma(void *rango);

struct parametro
{
int rango[10];
int resultado;
};

int main()
{
pthread_attr_t attr;
pthread_t thread;
// 1º Forma de hacerlo sin reservar memoria (a través del struct)

/*
struct parametro p;
for(int i=0;i<10;i++)
{
p.rango[i]=i+1;
}
	pthread_attr_init(&attr);
	pthread_create(&thread, NULL, suma, (void *) &p);
	pthread_join(thread, NULL);
	printf("\nSuma en Prog. Principal: %d\n", p.resultado);
*/

// 2º Forma de hacerlo reservando memoria.
struct parametro *p;
//struct parametro * reserva;
int resultado;
	p= malloc(sizeof(struct parametro));

	for(int i=0;i<10;i++)
	{
	p->rango[i]=i+1;
	}

	pthread_attr_init(&attr);
	pthread_create(&thread, NULL, suma, (void *) p);
	pthread_join(thread, NULL);
	printf("\nSuma en Prog. Principal: %d\n", p->resultado);
	free(p);
	return(0);
}

void *suma(void *rango) {
	int i=0;
	struct parametro *valores;
	int *suma;

	valores= (struct parametro *)rango;
	suma=(int *)malloc (sizeof (int));
	*suma=0;

	for(i=0;i<10;i++) {
		*suma=*suma+valores->rango[i];
	}
	valores->resultado=*suma;
	printf("\tThread Suma : %d\n",valores->resultado);
	pthread_exit(0);
}
