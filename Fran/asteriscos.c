#include <stdio.h>

main()
{
	int contador;
	int numero;
	
	contador = 0;
	numero = 0;
	
	printf("Introduce cuantos asteriscos deseas imprimir: ");
	scanf("%d", &numero);
	
	for (contador = 1; contador <= numero; contador ++)
	{
		printf("*");
	}
	
	contador = 1;
	printf("\n");
	
	while (contador<= numero)
	{
		printf("*");
		contador ++;
	}
	
	contador = 1;
	printf("\n");
	
	do
	{
		printf("*");
		contador ++;
	}
	while (contador <= numero);
}