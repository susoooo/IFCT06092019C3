#include <stdio.h>

#define LIMIT 100
#define LIMITCONDITION (size > LIMIT)

int main(int argc, char const *argv[])
{
	int op, size, esc;
	float sum, carry;
	float notas[LIMIT];

	size = 0;
	esc= 0;
	sum = 0.0;
	carry = 0.0;

	do
	{
		printf("\n0.salir\n1.listar notas\n2.calcular la media\n3.calcular el menor\n4.calcular el mayor\n5.agregar nota\n\n");
		scanf("%d", &op);

		switch (op)
		{
			case 0:
				esc = 1;
				break;

			case 1:
				for (int i = 0; i < size; ++i)
					{
						printf("\n%2.1f\n", notas[i]);
					}

				break;

			case 2:
				for (int i = 0; i < size; ++i)
				{
					sum = sum + notas[i];
				}

				printf("\nla media de notas es %2.1f\n", sum / size);

				break;

			case 3:
				carry = notas[0];

				for (int i = 1; i < size; ++i)
				{
					if (notas[i] < carry)
						carry = notas [i];
				}

				printf("\nla nota menor es %2.1f\n", carry);

				break;

			case 4:
				for (int i = 0; i < size; ++i)
				{
					if (notas[i] > carry)
						carry = notas [i];
				}

				printf("\nla nota mayor es %2.1f.\n", carry);

				break;

				case 5:
					if (LIMITCONDITION)
						printf("\nla cantidad supera 100\n");
					else
					{
						printf("nota: ");
						scanf("%f", &notas[size]);

						size++;
					}

					break;

			default:
				printf("seleccion incorrecta\n");
		}

	}
	while (esc != 1);

	return 0;
}