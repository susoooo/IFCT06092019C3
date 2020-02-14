<<<<<<< HEAD
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
=======
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
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}