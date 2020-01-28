#include <stdio.h>

main()
{
	int momento;
	int genero;
	
	momento = 0;
	genero = 0;
	
	printf("Generador de saludos\n");
	printf("Version 2.0\n");
	printf("Programado por Fran\n");
	
	printf("\nIntroduce el momento del dia:\n");
	printf("1 - Mañana\n");
	printf("2 - Tarde\n");
	printf("3 - Noche\n");
	printf("-------------------------\n");
	printf("Momento del dia: ");
	scanf("%d", &momento);
	
	printf("\nIntroduce el genero:\n");
	printf("1 - Masculino\n");
	printf("2 - Femenino\n");
	printf("-------------------------\n");
	printf("Genero: ");
	scanf("%d", &genero);	
	
	if (genero == 1)
	{
		char sexo[] = "señor";
	}
	else
	{
		char sexo[] = "señora";
	}
	
	if (momento == 1)
	{
		printf("\nBuenos dias, %s\n", sexo);
	}
	else
	{
		if (momento == 2)
		{
			printf("/nBuenas tardes, %s\n", sexo);
		}
		else
		{
			if (momento == 3)
			{
				printf("\nBuenas noches, %s\n", sexo);
			}
			else
			{
				printf("\n\nOpcion/es no validas.");
			}
		}
	}
		
	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
}	

