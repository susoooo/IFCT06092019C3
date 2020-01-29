#include <stdio.h>

#define MAXIMO 2

int err;

int media2(int *factores)
{
	int resultado;

	resultado = factores[0];

	for(int i=1; i<MAXIMO; i++)
		resultado = resultado + factores[i];
	
	return (resultado / MAXIMO);
}

int main()
{
	int opcion;
	int numeros[MAXIMO];

	//wipe
	opcion = 0;

	for(int i=0; i<MAXIMO; i++)
		numeros[i] = 0;

	//input
	printf("\nvalores:\n");
	
	for(int i=0; i<MAXIMO; i++)
		scanf("%d", &numeros[i]);

	//calls
		printf("media: %d", media2(&numeros[0]));

	return 0;
}