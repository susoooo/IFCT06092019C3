#include <stdio.h>

#define PISOS 6
#define PUERTAS 4
#define VIVIENDAS (PISOS * PUERTAS)

int main(int argc, char const *argv[])
{
	int op, esc, sum, carry;
	int edificio[PISOS][PUERTAS], iden[2];
	char puerta[4] = {'A','B','C','D'};

	op = 0;
	esc = 0;
	sum = 0;
	carry = 0;

	//clean mem
	for (int i = 0; i <  PISOS; ++i)
		for (int j = 0; j < PUERTAS; ++j)
			edificio[i][j] = 0;

	for (int i = 0; i < 2; ++i)
		iden[i] = 0;

	//user input
	for (int i = 0; i <  PISOS; ++i)
	{
		for (int j = 0; j < PUERTAS; ++j)
		{
			printf("introduzca el numero de habitantes en la puerta %c del piso %d: ", puerta[j], i + 1);
			scanf("%d", &edificio[i][j]);
		}
	}

	//menu loop
	do
	{
		printf("\n0.salir\n1.puerta de mayor habitantes\n2.piso de mayor habitantes\n3.media de habitantes\n\n");
		scanf("%d", &op);

		switch (op)
		{
			case 0:
				esc = 1;
			break;

			case 1:
				for (int i = 1; i < PISOS; ++i)
				{
					for (int j = 0; j < PUERTAS; ++j)
					{
						if (edificio[i][j] > sum)
						{
							sum = edificio[i][j];
							iden[1] = i + 1;
							iden[2] = puerta[j];
						}
					}
				}

				printf("\b\bla puerta de mayor habitantes es la %c del piso %d\n", iden[2], iden[1]);
			break;

			case 2:
				for (int i = 1; i < PISOS; ++i)
				{
					sum = 0;

					for (int j = 0; j < PUERTAS; ++j)
					{
						sum = sum + edificio[i][j];
					}

					if (sum > carry)
					{
						carry = sum;
						iden[1] = i + 1;
					}

				}

				printf("\b\bel piso de mayor habitantes es el %d\n", iden[1]);
			break;

			case 3:
				for (int i = 0; i < PISOS; ++i)
				{
					for (int j = 0; j < PUERTAS; ++j)
					{
						sum = sum + edificio[i][j];
					}
				}

				printf("\b\bla media de habitantes es %f\n", (float)sum / VIVIENDAS);
			break;

			default:
				printf("seleccion incorrecta\n");
		}
	}
	while (esc != 1);

	return 0;
}