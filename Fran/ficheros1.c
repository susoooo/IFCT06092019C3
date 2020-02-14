<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int contador;
	int * posicion;
	
	size_t leidos;
	
	FILE * indice;
	
	char * pCaracter;
	
	indice = fopen("prueba.txt", "r");
	
	pCaracter = malloc(sizeof(char));
	
	if (indice != 0 && pCaracter != NULL)
	{
		printf("\n");
		
		while (!feof(indice))
		{
			leidos = fread(pCaracter, sizeof(char), 1, indice);
			printf("%c-", *pCaracter);
		}
		
		free(pCaracter);
		fclose(indice);
	}
	else
	{
		printf("\nSe ha producido algun problema.");
		printf("\nFin del programa.");
	}
	
=======
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int contador;
	int * posicion;
	
	size_t leidos;
	
	FILE * indice;
	
	char * pCaracter;
	
	indice = fopen("prueba.txt", "r");
	
	pCaracter = malloc(sizeof(char));
	
	if (indice != 0 && pCaracter != NULL)
	{
		printf("\n");
		
		while (!feof(indice))
		{
			leidos = fread(pCaracter, sizeof(char), 1, indice);
			printf("%c-", *pCaracter);
		}
		
		free(pCaracter);
		fclose(indice);
	}
	else
	{
		printf("\nSe ha producido algun problema.");
		printf("\nFin del programa.");
	}
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}