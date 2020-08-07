#include <stdio.h>

int calcFactorial(int factor)
{
	int resultado;

	if(factor <= 0)
		resultado = 0;
	else if(factor == 1)
		resultado = 1;
	else
		resultado = factor * calcFactorial(factor - 1);
	
	return resultado;
}

int main()
{
	int numero, resultado;

	//wipe
	numero = 0;
	resultado = 0;

	//input
	printf("factorial de: ");
	scanf("%d", &numero);

	//exception
	if(numero == 0)
		resultado = 0;
	else
	{
	//call
		resultado = calcFactorial(numero);
	}

	printf("\nes: %d", resultado);

	return 0;	
}