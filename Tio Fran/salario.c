#include <stdio.h>
#include <math.h>

main()
{
	int horas;
	int extras;
	int tarifa;
	int sueldo;
	
	horas = 0;
	extras = 0;
	tarifa = 0;
	sueldo = 0;
	
	printf("Calculo de salario.\n");
	printf("Version 1.0\n\n");
	
	printf("\nIntroduzca el numero de horas trabajadas: ");
	scanf("%d", &horas);
	
	printf("\n Introduzca la tarifa por hora: ");
	scanf("%d", &tarifa);
	
	if (horas <= 40)
	{
		sueldo = horas * tarifa;
		printf("El salario semanal es de: %d", sueldo);		
	}
	else
	{
		extras = horas - 40;
		if (extras <= 10)
		{
			sueldo = (tarifa * 40) + (extras * (tarifa + tarifa / 2) );
			printf("El salario semanal es de: %d", sueldo);
		}
		else
		{
			sueldo = (40 * tarifa) + ( (extras - (extras % 10)) * (tarifa + tarifa / 2) ) + ( (extras % 10) * (tarifa * 2) );
			// sueldo = 40 * tarifa;
			// sueldo = sueldo + ( (extras - (extras % 10)) * (tarifa + tarifa / 2) );
			// sueldo = sueldo + ( (extras % 10) * (tarifa * 2) );
			printf("El salario semanal es de: %d", sueldo);
		}		
	}
		printf("\n\nFin de programa, saludos terricola!!\n.");
	}