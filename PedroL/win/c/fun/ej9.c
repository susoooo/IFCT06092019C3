#include <stdio.h>

int err;

int comprobDeNumPrimo(int *factor)
{
	int resultado = 1;

	if((*factor) == 1 || (*factor) == 0)
		resultado = 2;
	else
	{
		for(int i=2; i<(*factor); i++)
		{
			if(((*factor) % i) == 0)
			{
				resultado = 0;
				i = (*factor);
			}
		}
	}

	return resultado;
}

int main()
{
	int numero, resultado;

	//wipe
	numero = 0;

	//input
	printf("\nnumero: ");
	scanf("%d", &numero);

	//calls
	resultado = comprobDeNumPrimo(&numero);

	if(resultado == 2)
		printf("indefinido\n");
	else
		printf("numero primo?: %d", resultado);

	return 0;
}