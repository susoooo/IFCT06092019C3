#include <stdio.h>

#define MAXIMO 4

int err;

int multiplicacion(int *factores)
{
	int resultado;

	resultado = factores[0];

	for(int i=0; i<MAXIMO; i++)
		if(factores[i] == 0)
			err = 1;

	for(int i=1; i<MAXIMO; i++)
		resultado = resultado * factores[i];
	
	return resultado;
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
	if(err != 0)
		printf("ERR: %d", err);
	else
	{
		printf("producto: %d", multiplicacion(&numeros[0]));
	}

	return 0;
}