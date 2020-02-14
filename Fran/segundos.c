<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

main()
{
	int dias;
	int horas;
	int minutos;
	int segundos;
	
	dias = 0;
	horas = 0;
	minutos = 0;
	segundos = 0;
	
	printf("Calculo de segundos.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el numero de dias: ");
	scanf("%d", &dias);

	printf("Introduzca el numero de horas: ");
	scanf("%d", &horas);
	
	printf("Introduzca el numero de minutos: ");
	scanf("%d", &minutos);
	
	segundos = (dias * 24 * 3600) + (horas * 3600) + minutos * 60;
	
	printf("El tiempo en dias, horas y minutos indicado son: %d segundos.\n", segundos);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
=======
#include <stdio.h>
#include <math.h>

main()
{
	int dias;
	int horas;
	int minutos;
	int segundos;
	
	dias = 0;
	horas = 0;
	minutos = 0;
	segundos = 0;
	
	printf("Calculo de segundos.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el numero de dias: ");
	scanf("%d", &dias);

	printf("Introduzca el numero de horas: ");
	scanf("%d", &horas);
	
	printf("Introduzca el numero de minutos: ");
	scanf("%d", &minutos);
	
	segundos = (dias * 24 * 3600) + (horas * 3600) + minutos * 60;
	
	printf("El tiempo en dias, horas y minutos indicado son: %d segundos.\n", segundos);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}