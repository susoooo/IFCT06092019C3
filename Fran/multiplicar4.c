<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>


int producto(int num1, int num2, int num3, int num4)
{
	int producto;
	
	producto = 0;
	
	producto = num1 * num2 * num3 * num4;
	
	return(producto);
}


int main()
{
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int ok;
	
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	numero4 = 0;
	ok = 0;	
	
	do
	{
		printf("\nIntroduzca 4 numeros distintos de 0.");
		printf("\n------------------------------------");
	
		printf("\nPrimer numero: ");
		scanf("%d", &numero1);
		
		printf("\nSegundo numero: ");
		scanf("%d", &numero2);
		
		printf("\nTercer numero: ");
		scanf("%d", &numero3);
		
		printf("\nCuarto numero: ");
		scanf("%d", &numero4);
		
		if (numero1 == 0 || numero2 == 0 || numero3 == 0 || numero4 == 0)
		{
			printf("\nHa introducido un cero. repita procedimiento.. chapuzas!!!!");
			ok = 0;
		}
		else
		{
			ok = 1;
		}
		
	} while (ok == 0);
		
	printf("\nEl resultado de multiplicar los numero introducidos es: %d", producto(numero1, numero2, numero3, numero4));
	
	printf("\n\nGracias por su colaboracion.");
	
}
=======
#include <stdio.h>
#include <stdlib.h>


int producto(int num1, int num2, int num3, int num4)
{
	int producto;
	
	producto = 0;
	
	producto = num1 * num2 * num3 * num4;
	
	return(producto);
}


int main()
{
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int ok;
	
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	numero4 = 0;
	ok = 0;	
	
	do
	{
		printf("\nIntroduzca 4 numeros distintos de 0.");
		printf("\n------------------------------------");
	
		printf("\nPrimer numero: ");
		scanf("%d", &numero1);
		
		printf("\nSegundo numero: ");
		scanf("%d", &numero2);
		
		printf("\nTercer numero: ");
		scanf("%d", &numero3);
		
		printf("\nCuarto numero: ");
		scanf("%d", &numero4);
		
		if (numero1 == 0 || numero2 == 0 || numero3 == 0 || numero4 == 0)
		{
			printf("\nHa introducido un cero. repita procedimiento.. chapuzas!!!!");
			ok = 0;
		}
		else
		{
			ok = 1;
		}
		
	} while (ok == 0);
		
	printf("\nEl resultado de multiplicar los numero introducidos es: %d", producto(numero1, numero2, numero3, numero4));
	
	printf("\n\nGracias por su colaboracion.");
	
}
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
