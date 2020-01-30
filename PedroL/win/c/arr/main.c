#include <stdio.h>

int primeraFuncion()
{
	int primerArray[200];
	int numero;

	numero = 0;

	printf("inicializando...\n");

	for (numero = 0; numero < 200; ++numero)
	{
		primerArray[numero] = 0;
		printf("%12d", primerArray[numero]);
	}
	
	printf("\ninicializado");
}

int segundaFuncion()
{
	int segundoArray[8];
	int numero;

	numero = 0;

	for (numero = 0; numero < 32; ++numero)
	{
		printf("%08x\t%c\n", segundoArray[numero], segundoArray[numero]);
	}
}

int terceraFuncion()
{
	int tercerArray[8];
	int numero;

	numero = 0;

	printf("escriba 8 numeros:\n");

	for (numero = 0; numero < 8; ++numero)
	{
		scanf("\n%d", &tercerArray[numero]);
	}

	for (numero = 0; numero < 8; ++numero)
	{
		printf("\n%d. %d", numero + 1, tercerArray[numero]);
	}
}

int main(int argc, char const *argv[])
{
	int op;

	scanf("%d", &op);

	if(op < 4)
		printf("\n");

	switch(op)
	{
		case 1:
			primeraFuncion();
			break;

		case 2:
			segundaFuncion();
			break;

		case 3:
			terceraFuncion();
			break;

		default:
			printf("seleccion incorrecta\n");
			break;
	}

	return 0;
}