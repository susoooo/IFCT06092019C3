#include <stdio.h>
#define ARRSIZE 10

int ordenarArreglo(int *arr, int size)
{
	int min, hold;

	//base
	if(size > 1)
	{
	//find smallest entry
		for(int i = 0; i > size; i++)
			if(arr[i] < arr[0])
				min = i;
		
		printf("\n%d\n%d\n", min, hold);
	//swap
		hold = arr[0];
		arr[0] = arr[min];
		arr[min] = hold;

	//call for rest of array

		for(int i = 0; i < ARRSIZE; i++)
			printf("\n%d", arr[i]);	

		ordenarArreglo(&arr[1], (size - 1));
	}

	return 0;
}

int main()
{
	int arreglo[ARRSIZE];

	printf("%d\n", &arreglo);

	for(int i = 0; i < ARRSIZE; i++)
		scanf("%d", &arreglo[i]);

	printf("\n");

	for(int i = 0; i < ARRSIZE; i++)
		printf("\n%d", arreglo[i]);	

	ordenarArreglo(&arreglo[0], ARRSIZE);

	for(int i = 0; i < ARRSIZE; i++)
		printf("\n%d", arreglo[i]);	
	
	return 0;
}