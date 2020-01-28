#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empleado
{
	char nombre[25];
	char sexo[6];
	int sueldo;
};

void main()
{
	struct empleado curritos[10];
	
	struct empleado curritoMayor;
	struct empleado curritoMenor;
	
	int contador;
	int sexoCurrito;
	int numEmpleados;
	
	sexoCurrito = 0;
	numEmpleados = 4;
	
	curritoMayor.sueldo = 0;
	curritoMenor.sueldo = 9999;
	
	for (contador = 0; contador < numEmpleados; contador++)
	{
		fflush(stdin);
		printf("\nIntroduzca el nombre del empleado %d: ", contador+1);
		gets(curritos[contador].nombre);
		
		do
		{
			printf("\nIntroduzca el sexo del empleado %s: ", curritos[contador].nombre);
			printf("\n1. Mujer");
			printf("\n2. Hombre\n");
			scanf("%d", &sexoCurrito);
			
			switch (sexoCurrito)
			{
				case 1:
					strcpy(curritos[contador].sexo, "Mujer");
				break;
				
				case 2:
					strcpy(curritos[contador].sexo, "Hombre");
				break;
				
				default:
					printf("\nOpcion incorrecta.\n");
				break;
			}
		}
		while (sexoCurrito != 1 && sexoCurrito != 2);
		
		printf("\nIntroduzca el sueldo del empleado %s: ", curritos[contador].nombre);
		scanf("%d", &curritos[contador].sueldo);
		
	}
	
	
	for (contador = 0; contador < numEmpleados; contador++)
	{
		if (curritoMayor.sueldo < curritos[contador].sueldo)
		{
			strcpy(curritoMayor.nombre, curritos[contador].nombre);
			strcpy(curritoMayor.sexo, curritos[contador].sexo);
			curritoMayor.sueldo = curritos[contador].sueldo;
		}
		
		if (curritoMenor.sueldo > curritos[contador].sueldo)
		{
			strcpy(curritoMenor.nombre, curritos[contador].nombre);
			strcpy(curritoMenor.sexo, curritos[contador].sexo);
			curritoMenor.sueldo = curritos[contador].sueldo;			
		}
		
	}
	
	printf("\nEl empleado con mayor salario es: \n%s, ", curritoMayor.nombre);
	for (contador = 0; contador < 6; contador++)
	{
		printf("%c", curritoMayor.sexo[contador]);
	}
	printf(", y cobra %d euros.\n", curritoMayor.sueldo);
	
	
	printf("\nEl empleado con menor salario es: \n%s, ", curritoMenor.nombre);
	for (contador = 0; contador < 6; contador++)
	{
		printf("%c", curritoMenor.sexo[contador]);
	}
	printf(", y cobra %d euros.\n", curritoMenor.sueldo);
	
}