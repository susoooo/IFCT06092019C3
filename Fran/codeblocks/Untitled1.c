<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mensajeBienvenida()
{

	return(0);
}

int mensajeDespedida()
{

	return(0);
}

int imprimirMenu()
{
	printf("\nIntroduce la operacion a realizar:\n");
	printf("1 - Suma\n");
	printf("2 - Resta\n");
	printf("3 - Multiplicacion\n");
	printf("4 - Division\n");
	printf("\n0. Salir.\n");
	printf("-------------------------\n");
	return(0);
}

int seleccionarOpcion()
{
	int opcion;

	opcion = 0;

	printf("\nIntroduzca una opcion: ");
	scanf("%d", &opcion);
	return(opcion);
}

int suma()
{
	int numero1;
	int numero2;
	int suma;

	numero1 = 0;
	numero2 = 0;
	suma = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	suma = numero1 + numero2;
	printf("\nEl resultado de la SUMA es: %d\n", suma);

	return(0);
}

int resta()
{
	int numero1;
	int numero2;
	int resta;

	numero1 = 0;
	numero2 = 0;
	resta = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	resta = numero1 - numero2;
	printf("\nEl resultado de la RESTA es: %d\n", resta);

	return(0);
}

int producto()
{
	int numero1;
	int numero2;
	int producto;

	numero1 = 0;
	numero2 = 0;
	producto = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	producto = numero1 * numero2;
	printf("\nEl resultado de la MULTIPLICACION es: %d\n", producto);

	return(0);
}

int division()
{
	int numero1;
	int numero2;
	int division;

	numero1 = 0;
	numero2 = 0;
	division = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	do
	{
		printf("\nDime el segundo numero: ");
		scanf("%d", &numero2);

		if (numero2 == 0)
		{
			printf("\nNo es posible la division por cero. Introduzca otro numero.");
		}
	}
	while (numero2 ==0);

	division = numero1 / numero2;
	printf("\nEl resultado de la DIVISION es: %d\n", division);

	return(0);
}

int main()
{
		int seleccion;

		mensajeBienvenida();

		do
		{
			imprimirMenu();

			seleccion = seleccionarOpcion();

			switch (seleccion)
			{
				case 1:
					suma();
				break;

				case 2:
					resta();
				break;

				case 3:
					producto();
				break;

				case 4:
					division();
				break;

				default:
					mensajeDespedida();
			}
		}
		while (seleccion !=0);

		return(0);
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mensajeBienvenida()
{

	return(0);
}

int mensajeDespedida()
{

	return(0);
}

int imprimirMenu()
{
	printf("\nIntroduce la operacion a realizar:\n");
	printf("1 - Suma\n");
	printf("2 - Resta\n");
	printf("3 - Multiplicacion\n");
	printf("4 - Division\n");
	printf("\n0. Salir.\n");
	printf("-------------------------\n");
	return(0);
}

int seleccionarOpcion()
{
	int opcion;

	opcion = 0;

	printf("\nIntroduzca una opcion: ");
	scanf("%d", &opcion);
	return(opcion);
}

int suma()
{
	int numero1;
	int numero2;
	int suma;

	numero1 = 0;
	numero2 = 0;
	suma = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	suma = numero1 + numero2;
	printf("\nEl resultado de la SUMA es: %d\n", suma);

	return(0);
}

int resta()
{
	int numero1;
	int numero2;
	int resta;

	numero1 = 0;
	numero2 = 0;
	resta = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	resta = numero1 - numero2;
	printf("\nEl resultado de la RESTA es: %d\n", resta);

	return(0);
}

int producto()
{
	int numero1;
	int numero2;
	int producto;

	numero1 = 0;
	numero2 = 0;
	producto = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	producto = numero1 * numero2;
	printf("\nEl resultado de la MULTIPLICACION es: %d\n", producto);

	return(0);
}

int division()
{
	int numero1;
	int numero2;
	int division;

	numero1 = 0;
	numero2 = 0;
	division = 0;

	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);

	do
	{
		printf("\nDime el segundo numero: ");
		scanf("%d", &numero2);

		if (numero2 == 0)
		{
			printf("\nNo es posible la division por cero. Introduzca otro numero.");
		}
	}
	while (numero2 ==0);

	division = numero1 / numero2;
	printf("\nEl resultado de la DIVISION es: %d\n", division);

	return(0);
}

int main()
{
		int seleccion;

		mensajeBienvenida();

		do
		{
			imprimirMenu();

			seleccion = seleccionarOpcion();

			switch (seleccion)
			{
				case 1:
					suma();
				break;

				case 2:
					resta();
				break;

				case 3:
					producto();
				break;

				case 4:
					division();
				break;

				default:
					mensajeDespedida();
			}
		}
		while (seleccion !=0);

		return(0);
}
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
