# include <sys / types .h>
# include <unistd .h>
# include <stdio .h>
# include <stdlib .h>
# include <string .h>
# include <pthread .h>


/* gcc miprog.c -o miprog -lpthreads
Las funciones que trabajan con thread (hilos) tienen que tener la siguiente forma:
void * mifuncion(void * parametro)
En un (void *) podemos pasar cualquier cosa. Es el tipo más amplio que nos va a permitir pasar y/o recibir cualquiero cosa.
A un hilo solo le podemos pasar un parámetro.

*/

void * mifuncion(void* mensaje_personal)
{
int entero;
int * pentero;

pentero= (int *) parametro;
entero= *pentero;
printf("el numero es %d", entero);

printf("Hola mundo\n");
printf("%s", mensaje_personal);
}
pthread_t h1;

pthread_create(&h1, NULL,mifuncion,"Este soy yo");
pthread_join(h1,NULL);

struct operar{
int n1;
int n2;
int * presultado;
}

void * multiplicar(void * numeros)
{

int resultado;
struct operar * pnumeros;
struct operar varnum;

/* Para acceder a una variable escribimos "varnum.n1;", pero para acceder a un puntero tenemos que escribir "varnum->n1".
*/
pnumeros = (struct operar *) numeros;

resultado = pnumero->n1*pnumero->n2;

*(pnumero->presultado) = resultado;
pthread_exit((void*)(pnumero->presultado));
pthread_exit((void*)&resultado));

pthread_t h1;

struct operar * blackhole;
blackhole = malloc(sizeof(struct operar));
blackhole->n1 = 8;
blackhole->n2 = 6;
pthread_create(&h1, NULL, multiplicar,(void*)blackhole);
pthread_join(&h1,(void*)&resultado);
}



