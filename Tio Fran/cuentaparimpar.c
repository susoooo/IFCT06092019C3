#include <stdio.h>

main()
{
	int contador;
	int numero1;
	int numero2;
	int condicion;
	
	
	contador = 0;
	numero1 = 0;
	numero2 = 0;
	condicion = 0;
	
	printf("\nntroduce un numero: ");
	scanf("%d", &numero1);
	
	printf("\nIntroduce otro numero: ");
	scanf("%d", &numero2);
	
	printf("\nIntroduce opcion: ");
	printf("\n1. Imprimir pares.");
	printf("\n2. Imprimir impares.");
	scanf("%d", &condicion);
	
	if ( condicion == 1 )
	{
		for (contador = numero1; contador <= numero2; contador ++)
		{
			if (contador % 2 == 0)
			{
				printf("%d \n", contador);
			}		
		}
		
		contador = numero1;
		
		while (contador<= numero2)
		{
			if (contador % 2 == 0)
			{
				printf("%d \n", contador);
			}	
			contador ++;
		}
		
		contador = numero1;
		
		do
		{
			if (contador % 2 == 0)
			{
				printf("%d \n", contador);
			}	
			contador ++;
		}
		while (contador <= numero2);
		
	}
	else
	{
		if ( condicion == 2 )
		{
			for (contador = numero1; contador <= numero2; contador ++)
			{
				if (contador % 2 != 0)
				{
					printf("%d \n", contador);
				}		
			}
			
			contador = numero1;
			
			while (contador <= numero2)
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
	}
}