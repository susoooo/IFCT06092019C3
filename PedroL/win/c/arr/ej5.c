#include <stdio.h>
#include <stdlib.h>

int sortLogic (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char const *argv[])
{
	int op, size;
	float sum;
	float notas[40];

	size = sizeof(notas)/sizeof(float);
	sum = 0.0;

	printf("escriba las 40 notas de sus alumnos.\n");

	for (int i = 0; i < size; ++i)
	{
		scanf("%f", &notas[i]);
	}

	printf("1.listar notas\n2.calcular la media\n3.calcular el menor\n4.calcular el mayor\n");
	scanf("%d", &op);

	switch (op)
	{
		case 1:
			printf("\n");

			for (int i = 0; i < size; ++i)
				{
					printf("%2.1f\n", notas[i]);
				}

			break;

		case 2:
			printf("\n");

			for (int i = 0; i < size; ++i)
			{
				sum = sum + notas[i];
			}

			printf("la media de notas es %2.1f.\n", sum / size);

			break;

		case 3:
			printf("\n");

			qsort(notas, size, sizeof(float), sortLogic);

			printf("la nota menor es %2.1f.\n", notas[0]);

			break;

		case 4:
			printf("\n");

			qsort(notas, size, sizeof(float), sortLogic);

			printf("la nota mayor es %2.1f.\n", notas[size - 1]);

			break;

		default:
			printf("seleccion incorrecta\n");
	}

	return 0;
}