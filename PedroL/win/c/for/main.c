#include <stdio.h>
#include <stdlib.h>

void Ej1(int lim)
{
	int tercera = lim / 2;
	int iter;

	for (iter = 1 ; iter <= tercera ; iter++)
		printf("%d\n", iter);

	printf("\n");

	while (iter <= tercera * 2)
	{
		printf("%d\n", iter);
		iter++;
	}
}

void Ej2()
{
	int ej2num;

	printf("escriba un numero: ");
	scanf("%d", ej2num);
	Ej1(ej2num);
}

void Ej3()
{
	int iter, lim, tercera;

	printf ("escriba dos numeros\nprimero: ");
	scanf("%d", &iter);
	printf("\nsegundo: \n");
	scanf("%d", &lim);

	//ordena numeros si es necesario
	if (iter > lim)
	{
		iter = iter + lim;
		lim = iter - lim;
		iter = iter - lim;
	}

	tercera = lim / 2;

	for (iter; iter <= tercera ; iter++)
		printf("%d\n", iter);

	while (iter <= tercera * 2)
	{
		printf("%d\n", iter);
		iter++;
	}
}

void Ej4()
{
	int lim;

	printf("cuantos asteriscos desea imprimir?: ");
	scanf("%d", &lim);

	for (int iter = 1 ; iter <= lim ; iter++)
		printf("*");
}

void Ej5y6algo(int iter, int lim, int op)
{
	for (iter ; iter <= lim ; iter++)
	{
		if (op == 2 && iter % 2 == 0)
			printf("%d\n", iter);
		else if (op == 1 && iter % 2 != 0)
			printf("%d\n", iter);
	}
}

void Ej5y6data(int libertad)
{
	int iter, lim;

	printf ("escriba dos numeros\n\tprimero: ");
	scanf("%d", &iter);
	printf("\n\tsegundo: ");
	scanf("%d", &lim);

	//ordena numeros si es necesario
	if (iter > lim)
	{
		iter = iter + lim;
		lim = iter - lim;
		iter = iter - lim;
	}

	if (libertad == 1)
	{
		printf ("\n[1] impares\n[2] pares\n\tseleccion: ");
		scanf("%d", &libertad);

		if(libertad != 1 || libertad != 2)
			printf("seleccion invalida!");

		Ej5y6algo(iter, lim, libertad);
	}
	else
		Ej5y6algo(iter, lim, 1);
}

void Ej7()
{
	int cond = 1;

	while (cond)
	{
		printf("pulse la tecla 1\n");

		if (getchar() != 49)
			printf("\n:(\n");
		else
		{
			printf("\n:)");
			cond = 0;
		}
	}
}

void Ej8()
{
	int res, car, num;

	res = 0;
	car = 0;

	printf ("escriba un numero: ");
	scanf("%d", &num);

	for (int iter = 0; iter < num - 1; ++iter)
	{
		car = num - iter - 1;
		res = res * car;
	}

	printf("\n%d", res);
}

void Ej9()
{
	int bas, exp, res;

	res = 1;

	printf ("escriba una base: ");
	scanf("%d", &bas);
	printf ("\nescriba un exponente: ");
	scanf("%d", &exp);

	for(int i = 0 ; i < exp ; i++)
	{
		res = res * bas;
	}

	printf("\n%d", res);
}

void Ej9alt()
{
	int bas, exp, res;

	res = 1;

	printf ("escriba una base: ");
	scanf("%d", &bas);
	printf ("\nescriba un exponente: ");
	scanf("%d", &exp);

	for(exp; exp != 0 ; exp--)
	{
		res = res * bas;
	}

	printf("\n%d", res);
}

void Ej10()
{
	int num;

	//divisores de num
}

void Ej11()
{
	int numx, numy;

	//divisores comunes
}

void Ej12()
{
	int numx, numy;

	//maximo comun divisor
}

int main()
{
	int route;

	printf("numero del ejercicio: ");
	scanf("%d", &route);
	printf("\n");

	switch(route)
	{
		case 1:
			Ej1(57);
			break;

		case 2:
			Ej2();
			break;

		case 3:
			Ej3();
			break;

		case 4:
			Ej4();
			break;

		case 5:
			Ej5y6data(0);
			break;

		case 6:
			Ej5y6data(1);
			break;

		case 7:
			Ej7();
			break;

		case 8:
			Ej8();
			break;

		case 9:
			Ej9();
			break;

		case 10:
			Ej10();
			break;

		case 11:
			Ej11();
			break;

		case 12:
			Ej12();
			break;

		default:
			break;
	}

	return 0;
}