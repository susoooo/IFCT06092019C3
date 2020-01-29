#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeros[15];
	
	int * pArray;
	int contador;
	
	pArray = &numeros[0];
	
	for (contador = 0; contador < 15; contador++)
	{
		pArray[contador] = (int) (rand() % 101);
	}
	
	
	for (contador = 0; contador < 15; contador++)
	{
		printf("%d, ", pArray[contador]);
	}
	
	return(0);
}