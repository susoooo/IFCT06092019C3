#include <stdio.h>


main()
{
	int numero;
	
	numero = 0;
	
	printf("Introducir un numero.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca un numero cualquiera: ");
	scanf("%d", &numero);

	if (numero == 1)
	{
		printf("Estas listo para jugar");
	}
	else
	{
		if (numero == 2)
			{
				printf("Estas listo para estudiar");
			}
		else
			{
				printf("Error, numero equivocado");
			}
	}
		
	printf("\n\nFin de programa, saludos terricola!!\n.");
}