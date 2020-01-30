#include <stdio.h>

main()
{
	int contador;
	int numero1;
	int numero2;
	
	contador = 0;
	numero1 = 0;
	numero2 = 0;
	
	printf("Introduce un numero: ");
	scanf("%d", &numero1);
	
	printf("Introduce otro numero: ");
	scanf("%d", &numero2);
	
	for (contador = numero1; contador <= numero2; contador ++)
	{
		if (contador % 2 != 0)
		{
			printf("%d \n", contador);
		}		
	}
	
	contador = numero1;
	
	while (contador<= numero2)
	{
		if (contador % 2 != 0)
		{
			printf("%d \n", contador);
		}	
		contador ++;
	}
	
	contador = numero1;
	
	do
	{
		if (contador % 2 != 0)
		{
			printf("%d \n", contador);
		}	
		contador ++;
	}
	while (contador <= numero2);
}