<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

extern int calcularMayor(int num1, int num2, int num3)
{
	int mayor;
	
	if (num1 > num2 && num1 > num3)
	{
		mayor = num1;
	}
	else
	{	
		if (num2 > num1 && num2 > num3)
		{
			mayor = num2;
		}
		else
		{
			if (num3 > num1 && num3 > num2)
			{
				mayor = num3;
			}			
		}		
	}
	
	return (mayor);
	
}

int calcularMenor(int num1, int num2, int num3)
{
	int menor;
	
	if (num1 < num2 && num1 < num3)
	{
		menor = num1;
	}
	else
	{	
		if (num2 < num1 && num2 < num3)
		{
			menor = num2;
		}
		else
		{
			if (num3 < num1 && num3 < num2)
			{
				menor = num3;
			}			
		}		
	}
	
	return (menor);
	
}

int main()
{
	int numero1;
	int numero2;
	int numero3;
	
	int opcion;
	
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	opcion = 0;
	

	do
	{		
		
		printf("\nElija una opcion: ");
		printf("\n1. Introducir numeros.");
		printf("\n2. Numero mayor.");
		printf("\n3. Numero menor.");
		printf("\n0. Salir.");
		printf("\n--------------------\n");
		scanf("%d", &opcion);
		
		switch (opcion)
		{	
			case 1:
				printf("\nIntroduzca el primer numero: ");
				scanf("%d", &numero1);

				printf("\nIntroduzca el segundo numero: ");
				scanf("%d", &numero2);

				printf("\nIntroduzca el tercer numero: ");
				scanf("%d", &numero3);
			break;
		
			case 2:
				printf("\nEl numero mas alto es: %d \n", calcularMayor(numero1, numero2, numero3));
			break;
			
			case 3:
				printf("\nEl numero mas bajo es: %d \n", calcularMenor(numero1, numero2, numero3));
			break;
			
			default:
				printf("\nGracias por usar nuestro software... matao!!");
			break;
		}		
	
	} while (opcion != 0);
	
	return(0);	

=======
#include <stdio.h>
#include <stdlib.h>

extern int calcularMayor(int num1, int num2, int num3)
{
	int mayor;
	
	if (num1 > num2 && num1 > num3)
	{
		mayor = num1;
	}
	else
	{	
		if (num2 > num1 && num2 > num3)
		{
			mayor = num2;
		}
		else
		{
			if (num3 > num1 && num3 > num2)
			{
				mayor = num3;
			}			
		}		
	}
	
	return (mayor);
	
}

int calcularMenor(int num1, int num2, int num3)
{
	int menor;
	
	if (num1 < num2 && num1 < num3)
	{
		menor = num1;
	}
	else
	{	
		if (num2 < num1 && num2 < num3)
		{
			menor = num2;
		}
		else
		{
			if (num3 < num1 && num3 < num2)
			{
				menor = num3;
			}			
		}		
	}
	
	return (menor);
	
}

int main()
{
	int numero1;
	int numero2;
	int numero3;
	
	int opcion;
	
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	opcion = 0;
	

	do
	{		
		
		printf("\nElija una opcion: ");
		printf("\n1. Introducir numeros.");
		printf("\n2. Numero mayor.");
		printf("\n3. Numero menor.");
		printf("\n0. Salir.");
		printf("\n--------------------\n");
		scanf("%d", &opcion);
		
		switch (opcion)
		{	
			case 1:
				printf("\nIntroduzca el primer numero: ");
				scanf("%d", &numero1);

				printf("\nIntroduzca el segundo numero: ");
				scanf("%d", &numero2);

				printf("\nIntroduzca el tercer numero: ");
				scanf("%d", &numero3);
			break;
		
			case 2:
				printf("\nEl numero mas alto es: %d \n", calcularMayor(numero1, numero2, numero3));
			break;
			
			case 3:
				printf("\nEl numero mas bajo es: %d \n", calcularMenor(numero1, numero2, numero3));
			break;
			
			default:
				printf("\nGracias por usar nuestro software... matao!!");
			break;
		}		
	
	} while (opcion != 0);
	
	return(0);	

>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}