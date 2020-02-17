<<<<<<< HEAD
#include <stdio.h>

main()
{
	int numero1;
	int numero2;
	int numero3;
	
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	
	printf("Calculo de mayor y menor \n");
	printf("Version 2.0\n");
	printf("Programado por Fran\n");
	
	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero3);

	if (numero1 > numero2 && numero1 > numero3 )
	{
		printf("\nEl numero mas alto es: %d\n", numero1);
		if (numero2 > numero3)
		{
			printf("\nEl segundo numero mas alto es: %d\n", numero2);
			printf("\nEl numero mas bajo es: %d\n", numero3);
		}
		else
		{
			printf("\nEl segundo numero mas alto es: %d\n", numero3);
			printf("\nEl numero mas bajo es: %d\n", numero2);
		}
	}
	else
	{
		if (numero2 > numero1 && numero2 > numero3)
		{
			printf("\nEl numero mas alto es %d\n", numero2);
			if (numero1 > numero3)
			{
				printf("\nEl segundo numero mas alto es: %d\n", numero1);
				printf("\nEl numero mas bajo es: %d\n", numero3);
			}
			else
			{
				printf("\nEl segundo numero mas alto es: %d\n", numero3);
				printf("\nEl numero mas bajo es: %d\n", numero1);
			}
		}
		else
		{
			if (numero3 > numero1 && numero3 > numero2)
			{
				printf("\nEl numero mas alto es %d\n", numero3);
				if (numero1 > numero2)
				{
					printf("\nEl segundo numero mas alto es: %d\n", numero1);
					printf("\nEl numero mas bajo es: %d\n", numero2);
				}
				else
				{
					printf("\nEl segundo numero mas alto es: %d\n", numero2);
					printf("\nEl numero mas bajo es: %d\n", numero1);
				}
			}
		}
		
	}

	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
}	

=======
#include <stdio.h>

main()
{
	int numero1;
	int numero2;
	int numero3;
	
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	
	printf("Calculo de mayor y menor \n");
	printf("Version 2.0\n");
	printf("Programado por Fran\n");
	
	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero3);

	if (numero1 > numero2 && numero1 > numero3 )
	{
		printf("\nEl numero mas alto es: %d\n", numero1);
		if (numero2 > numero3)
		{
			printf("\nEl segundo numero mas alto es: %d\n", numero2);
			printf("\nEl numero mas bajo es: %d\n", numero3);
		}
		else
		{
			printf("\nEl segundo numero mas alto es: %d\n", numero3);
			printf("\nEl numero mas bajo es: %d\n", numero2);
		}
	}
	else
	{
		if (numero2 > numero1 && numero2 > numero3)
		{
			printf("\nEl numero mas alto es %d\n", numero2);
			if (numero1 > numero3)
			{
				printf("\nEl segundo numero mas alto es: %d\n", numero1);
				printf("\nEl numero mas bajo es: %d\n", numero3);
			}
			else
			{
				printf("\nEl segundo numero mas alto es: %d\n", numero3);
				printf("\nEl numero mas bajo es: %d\n", numero1);
			}
		}
		else
		{
			if (numero3 > numero1 && numero3 > numero2)
			{
				printf("\nEl numero mas alto es %d\n", numero3);
				if (numero1 > numero2)
				{
					printf("\nEl segundo numero mas alto es: %d\n", numero1);
					printf("\nEl numero mas bajo es: %d\n", numero2);
				}
				else
				{
					printf("\nEl segundo numero mas alto es: %d\n", numero2);
					printf("\nEl numero mas bajo es: %d\n", numero1);
				}
			}
		}
		
	}

	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
}	

>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
