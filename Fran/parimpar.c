#include <stdio.h>

main()
{
	int numero1;
	int numero2;
	int numero3;
	
	numero1 = 0;
	numero2 = 0;
	
	printf("Calculo de pares e impares \n");
	printf("Version 1.0\n");
	printf("Programado por Fran\n");
	
	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	printf("\nDime el tercer numero: ");
	scanf("%d", &numero3);
	
	if (numero1%2 == 0)
	{
		printf("\nEl numero %d es par\n", numero1);
	}
	else
	{
		printf("\nEl numero %d es impar\n", numero1);
	}
	
	if (numero3%2 == 0)
	{
		printf("\nEl numero %d es par\n", numero2);
	}
	else
	{
		printf("\nEl numero %d es impar\n", numero2);
	}
	
	if (numero3%2 == 0)
	{
		printf("\nEl numero %d es par\n", numero3);
	}
	else
	{
		printf("\nEl numero %d es impar\n", numero3);
	}

	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
}	
