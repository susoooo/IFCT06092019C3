#include <stdio.h>

#define ARR_SIZE 10

void input(int * arr)
{
	printf(":\n");

	for (int i = 0; i < ARR_SIZE; ++i)
		scanf("\n%d", &arr[i]);
}

int mayor(int * arr)
{
	int respuesta;

	respuesta = *arr;

	for (int i = 0; i < ARR_SIZE; ++i)
		if (arr[i] > respuesta) 
			respuesta = arr[i];

	return respuesta;
}

int menor(int * arr)
{
	int respuesta;

	respuesta = *arr;

	for (int i = 0; i < ARR_SIZE; ++i)
		if (arr[i] < respuesta) 
			respuesta = arr[i];

	return respuesta;
}

int suma (int * arr)
{
	int respuesta;

	respuesta = 0;

	for (int i = 0; i < ARR_SIZE; ++i)
		respuesta = respuesta + arr[i];

	return respuesta;
}

int media(int * arr)
{
	return suma(arr) / ARR_SIZE;
}

int main(int argc, char const *argv[])
{
	int arr[ARR_SIZE];

	input(arr);
	printf("\n");

	printf("mayor: %d\n", mayor(arr));
	printf("menor: %d\n", menor(arr));
	printf("media: %d\n", media(arr));

	return 0;
}