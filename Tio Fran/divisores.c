#include <stdio.h>
#include <math.h>

main()
{
	int numero;
	int contador;
	
	numero = 0;
	contador = 0;
		
	printf("\nIntroduce un numero: ");
	scanf("%d", &numero);
	
	printf("\nLos divisores de %d son: ", numero);
	
	for (contador = 1; contador <= numero; contador++)
	{
		if (numero%contador == 0)
		{
			printf("%d, ", contador);
		}
		
	}
	
}