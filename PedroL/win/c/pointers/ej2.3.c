#include <stdio.h>

#define N 20

void buscar(float mat[N][N], int nf, int nc, float * max, float * min)
{
	*max = mat[0][0];
	*min = mat[0][0];

	for(int i = 0; i < nf; i++)
		for(int j = 0; j < nc; i++)
		{
			if(mat[i][j] > *(max))
				*(max) = mat[i][j];

			if(mat[i][j] < *(min))
				*(min) = mat[i][j];
		}
}

void imprimirMatriz(float mat[N][N], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			printf("%6.2f ", mat[i][j]);

		printf("\n");
	}
}

int main(int argc, char const * argv[])
{
	int nf, nc;
	float max, min;
	float mat[N][N];

	printf("\nnumero de filas: ");
		scanf("%d", &nf);
	printf("\nnumero de columnas: ");
		scanf("%d", &nc);

	printf("\nintroduzca los valores:");
	for(int i = 0; i < nf; i++)
	{
		printf("\nfila %d: \n", i + 1);

		for(int j = 0; j < nc; j++)
			scanf("%d", (mat + (nc * i) + j));
	}

	imprimirMatriz(mat, 3);

	buscar(mat, nf, nc, &max, &min);

	printf("maximo: %d", max);
	printf("minimo: %d", min);

	return 0;
}