#include <stdio.h>

main()
{
	int numero1;
	int numero2;
	
	numero1 = 0;
	numero2 = 0;
	
	printf("Calculo de mayor y menor \n");
	printf("Version 1.0\n");
	printf("Programado por Fran\n");
	
	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	if (numero1 == numero2)
	{
		printf("\nResultado: %d es igual a %d\n", numero1, numero2);
	}
	else
	{
		if(numero1 > numero2)
		{
			printf("\nResultado: %d es mayor que %d\n", numero1, numero2);
		}
		else
		{
			printf("\nResultado: %d es menor que %d\n", numero1, numero2);
		}
		
	}

	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
}	

