#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100
#define LIMITCONDITION (size > LIMIT)

int main(int argc, char const *argv[])
{
	int op, size;
	float sum, carry;
	float notas[LIMIT];

	size = 0;
	sum = 0.0;
	carry = 0.0;

	do
	{
		printf("cuantos alumnos tiene? (no mas de 100)\n");
		scanf("%d", &size);

		if (LIMITCONDITION)
			printf("la cantidad supera 100\n");
	} 
	while (LIMITCONDITION);

	printf("escriba las notas de sus alumnos.\n");

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

			carry = notas[0];

			for (int i = 1; i < size; ++i)
			{
				if (notas[i] < carry)
					carry = notas [i];
			}

			printf("la nota menor es %2.1f.\n", carry);

			break;

		case 4:
			printf("\n");

			for (int i = 0; i < size; ++i)
			{
				if (notas[i] > carry)
					carry = notas [i];
			}

			printf("la nota mayor es %2.1f.\n", carry);

			break;

		default:
			printf("seleccion incorrecta\n");
	}

	return 0;
}