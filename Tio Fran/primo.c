#include <stdio.h>
#include <stdlib.h>

int numPrimo(int num1)
{
	int primo;
	int contador;
	
	contador = 0;
	primo = 1;
	
	for (contador = 2; contador < num1 / 2; contador++)
	{
		if (num1 % contador == 0)
		{
			primo = 0;
		}
	}
	
	return (primo);
	
}

int main()
{
	int numero;
	int esPrimo;
	
	numero = 0;
	esPrimo = 0;

	printf("\nIntroduzca un numero: ");
	scanf("%d", &numero);

	esPrimo = numPrimo(numero);
	
	if (esPrimo == 1)
	{
		printf("\nEl numero %d ES primo.", numero);
	}
	else
	{
		printf("\nEl numero %d NO ES primo.", numero);
	}
	
	
	printf("\nGracias por usar nuestro software... matao!!");		
	
	return(0);	

}