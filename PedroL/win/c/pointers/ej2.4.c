#include <stdio.h>

#define TAM 100

void leerVector(float * vector, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("n%d: ", i + 1);
		scanf("%f", vector + i);
	}
}

void producto(float * v1, float * v2, float p[TAM][TAM], int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			p[i][j] = v1[i] * v2[j];
}

void imprimirMatriz(float p[TAM][TAM], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			printf("%6.2f ", p[i][j]);

		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int n;
	float vector[TAM];
	float v1[TAM];
	float v2[TAM];
	float p[TAM][TAM];

	printf("\nn:");
		scanf("\n%d", &n);

	printf("\nvector 1:\n");
	leerVector(vector, n);
	for (int i = 0; i < n; ++i)
		v1[i] = vector[i];

	printf("\nvector 2:\n");
	leerVector(vector, n);
	for (int i = 0; i < n; ++i)
		v2[i] = vector[i];

	producto(v1, v2, p, n);

	printf("\nproducto:\n");
	imprimirMatriz(p, n);

	return 0;
}