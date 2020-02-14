<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>


void main()
{
	int numCaracteres;
	int contador;
	
	
	
	void * puntero;
	
	printf("\nIntroduzca el numero de caracteres: ");
	scanf("%d", &numCaracteres);
	
	getchar();

	puntero = (char *) malloc(sizeof(char) * numCaracteres);
	
	
	for(contador = 0; contador < numCaracteres; contador ++)
	{
		printf("\nIntroduzca el caracter %d: ", contador+1);
		scanf("%c", puntero+contador);
		getchar();
	}
	
	printf("\nLos caracteres introducidos son: ");
	
	for(contador = 0; contador < numCaracteres; contador ++)
	{
		printf("%c ", (char *)puntero+contador);
	}
	
	printf("\n");
	
=======
#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>


void main()
{
	int numCaracteres;
	int contador;
	
	
	
	void * puntero;
	
	printf("\nIntroduzca el numero de caracteres: ");
	scanf("%d", &numCaracteres);
	
	getchar();

	puntero = (char *) malloc(sizeof(char) * numCaracteres);
	
	
	for(contador = 0; contador < numCaracteres; contador ++)
	{
		printf("\nIntroduzca el caracter %d: ", contador+1);
		scanf("%c", puntero+contador);
		getchar();
	}
	
	printf("\nLos caracteres introducidos son: ");
	
	for(contador = 0; contador < numCaracteres; contador ++)
	{
		printf("%c ", (char *)puntero+contador);
	}
	
	printf("\n");
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}