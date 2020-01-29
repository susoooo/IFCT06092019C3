#include <stdio.h>

main()
{
	int contador;
	int numero;
	
	contador = 0;
	numero = 0;
	
	printf("Introduce un numero: ");
	scanf("%d", &numero);
	
	for (contador = 1; contador <= numero; contador ++)
	{
		printf("%d \n", contador);
	}
	
	contador = 1;
	
	while (contador<= numero)
	{
		printf("%d \n", contador);
		contador ++;
	}
	
	contador = 1;
	
	do
	{
		printf("%d \n", contador);
		contador ++;
	}
	while (contador <= numero);
}
