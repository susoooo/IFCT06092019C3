#include <stdio.h>

main()
{
	int contador;
	int numeros[8];
	int numero;
	
	contador = 0;
	numero = 0;
	
	printf("\nInicializando.....");
	
	for (contador = 0; contador < 8; contador ++)
	{
		numeros[contador] = 0;
	}
	
	printf("\nInicializado.");
	
	for (contador = 0; contador < 8; contador ++)
	{
		printf("%d, ", numeros[contador]);
	}
	
	for (contador = 0; contador < 8; contador ++)
	{
		printf("\nIntroduce un numero: ");
		scanf("%d", &numero);
		numeros[contador] = numero;
	}
	
	printf("\nLos numeros introducidos son: ");
	
	for (contador = 0; contador < 8; contador ++)
	{
		printf("%d, ", numeros[contador]);

	}
	
}