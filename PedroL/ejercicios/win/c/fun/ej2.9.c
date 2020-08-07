#include <stdio.h>
#include <stdlib.h>

#define ARREGLO_SIZE 25

//**//

int fillArray(int *arrstart, int arrsize, int max)
{
	for (int i = 0; i < arrsize; ++i)
		arrstart[i] = i + 1;

	return 0;
}

int sumArray(int *arrstart, int arrsize)
{
	int respuesta;
	
	if (arrsize == 0)
		respuesta = 0;
	else
		respuesta = *arrstart + sumArray(arrstart + 1, arrsize - 1);

	return respuesta;
}

int main(int argc, char const *argv[])
{
	int suma;
	int arreglo[ARREGLO_SIZE];

	fillArray(&arreglo[0], ARREGLO_SIZE, 100);
	
	for (int i = 0; i < ARREGLO_SIZE; ++i)
		printf("%d\n", arreglo[i]);

	suma = sumArray(arreglo, ARREGLO_SIZE);

	printf("\n%d\n", suma);

	return 0;
}