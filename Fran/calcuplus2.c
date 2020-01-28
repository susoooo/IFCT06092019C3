#include <stdio.h>

main()
{
	int numero1;
	int numero2;
	int suma;
	int resta;
	int multiplicacion;
	float division;
	int operacion;
	int correcto;
		
	numero1 = 12;
	numero2 = 3;
	suma = 0;
	resta = 0;
	multiplicacion = 0;
	division = 0.00;
	operacion = 0;
	correcto = 0;
	
	printf("Hola, soy Calcu+\n");
	printf("Version 2.0\n");
	printf("Programado por Fran\n");
	
	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	printf("\nIntroduce la operacion a realizar:\n");
	printf("1 - Suma\n");
	printf("2 - Resta\n");
	printf("3 - Multiplicacion\n");
	printf("4 - Division\n");
	printf("-------------------------\n");
	printf("Operacion: ");
	scanf("%d", &operacion);
	
	if (operacion > 0 && operacion < 5)
	{
		if (operacion == 1)
		{
			suma = numero1 + numero2;
			printf("\nEl resultado de la SUMA es: %d\n", numero1 + numero2);
		}
		else
		{
			if (operacion == 2)
			{
				resta = numero1 - numero2;
				printf("/nEl resultado de la RESTA es: %d\n", resta);
			}
			else
			{
				if (operacion == 3)
				{
					multiplicacion = numero1 * numero2;
					printf("\nEl resultado de la MULTIFLICACION es: %d\n", multiplicacion);
				}
				else
				{
					if (numero2 == 0)
					{
						printf("\n\nNo es posible la division por cero.");
					}
					else
					{
						division = (float) numero1 / numero2;
						printf("\nEl resultado de la DIVISION es: %f\n", division);
					}
				}
			}
		}
	}
	else
	{
		printf("\nOperacion incorrecta");
	}
	
	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
}	

