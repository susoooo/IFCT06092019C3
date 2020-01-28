#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>


void main()
{
	int numCaracteres;
	int contador;
	
	char * puntero;
	
	printf("\nIntroduzca el numero de caracteres: ");
	scanf("%d", &numCaracteres);
	
	getchar();

	puntero = malloc(sizeof(char)*numCaracteres);
	
	for(contador = 0; contador < numCaracteres; contador ++)
	{
		printf("\nIntroduzca el caracter %d: ", contador+1);
		scanf("%c", &puntero[contador]);
		getchar();
	}
	
	printf("\nLos caracteres introducidos son: ");
	
	for(contador = numCaracteres - 1; contador >= 0; contador --)
	{
		printf("%c ", puntero[contador]);
	}
	
	printf("\n");
	
}