<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>


void main()
{
	int numElementos;
	int contador;
	
	int * puntero;
	
	printf("\nIntroduzca el numero de elementos: ");
	scanf("%d", &numElementos);
	
	getchar();

	puntero = malloc(sizeof(int)*numElementos);
	
	for(contador = 0; contador < numElementos; contador ++)
	{
		printf("\nIntroduzca el elemento %d: ", contador+1);
		scanf("%c", &puntero[contador]);
		getchar();
	}
	
	printf("\nLos elementos introducidos son: ");
	
	for(contador = numElementos - 1; contador >= 0; contador --)
	{
		printf("%c ", puntero+contador);
	}
	
	printf("\n");
	
=======
#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>


void main()
{
	int numElementos;
	int contador;
	
	int * puntero;
	
	printf("\nIntroduzca el numero de elementos: ");
	scanf("%d", &numElementos);
	
	getchar();

	puntero = malloc(sizeof(int)*numElementos);
	
	for(contador = 0; contador < numElementos; contador ++)
	{
		printf("\nIntroduzca el elemento %d: ", contador+1);
		scanf("%c", &puntero[contador]);
		getchar();
	}
	
	printf("\nLos elementos introducidos son: ");
	
	for(contador = numElementos - 1; contador >= 0; contador --)
	{
		printf("%c ", puntero+contador);
	}
	
	printf("\n");
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}