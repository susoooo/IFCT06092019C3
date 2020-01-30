#include <stdio.h>

#define LIMIT 3

int menor(int *numeros)
{
	int resultado;

	resultado = numeros[0];

	for(int i=1; i<LIMIT; i++)
		if(numeros[i] < resultado)
			resultado = numeros[i];

	return resultado;
}

int mayor(int *numeros)
{
	int resultado;

	resultado = numeros[0];

	for(int i=1; i<LIMIT; i++)
		if(numeros[i] > resultado)
			resultado = numeros[i];

	return resultado;
}

int main()
{
	int opcion;
	int numeros[LIMIT];

	//wipe
	opcion = 0;

	for(int i=0; i<LIMIT; i++)
		numeros[i] = 0;

	//input
	printf("\nvalores:\n");
	for(int i=0; i<LIMIT; i++)
		scanf("%d", &numeros[i]);

	printf("mostrar:\n[1]menor\n[2]mayor\n");
	scanf("%d", &opcion);

	//calls
	switch(opcion)
	{
		case 1:
			printf("numero menor: %d", menor(&numeros[0]));
			break;

		case 2:
			printf("numero mayor: %d", mayor(&numeros[0]));
			break;

		default:
			printf("opcion invalida");
	}

	return 0;
}