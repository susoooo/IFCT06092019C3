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
	
	return (resultado);
}

int C(int n, int r)
{
	int stage;

	stage = (n - r);
	stage = (calcFactorial(r) * calcFactorial(stage));
	stage = (calcFactorial(n) / stage);

	return (stage);
}

int main()
{
	int n, r, resultado;

	//wipe
	n = 0;
	r = 0;
	resultado = 0;

	//input
	printf("\nn: ");
	scanf("%d", &n);
	printf("\nr: ");
	scanf("%d", &r);

	//exception
	if(n == 0)
		resultado = 0;
	else
	{
	//call
		resultado = C(n, r);
	}

	printf("\nresultado: %d", resultado);

	return 0;
}