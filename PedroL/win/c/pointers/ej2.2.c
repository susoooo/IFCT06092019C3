#include <stdio.h>
#include <math.h>

double CalcularSerie(double x, int n)
{
	double resultado;

	resultado = 0;

	for (int i = 1; i <= n; ++i)
		resultado = resultado + (1 / pow(x, i));

	return resultado;
}

void CalcularSeriePunt(double x, int n, double *resultado)
{
	for (int i = 1; i <= n; ++i)
		*(resultado) = *(resultado) + (1 / pow(x, i));
}

int main(int argc, char const *argv[])
{
	int n;
	double x, resultado;

	printf("\nx:");
		scanf("%lf", &x);
	printf("\nn:");
		scanf("%d", &n);

	printf("resultado (valores): %lf\n", CalcularSerie(x, n));

	CalcularSeriePunt(x, n, &resultado);
	printf("resultado (punteros): %lf\n", resultado);

	return 0;
}