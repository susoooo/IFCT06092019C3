<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

main()
{
	int dias;
	int horas;
	int minutos;
	int segundos;
	int resto;
	
	dias = 0;
	horas = 0;
	minutos = 0;
	segundos = 0;
	resto = 0;
	
	printf("Conversion de segundos en dias, horas, minutos y segundos.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el numero de segundos: ");
	scanf("%d", &segundos);

	dias = segundos / (24 * 3600);
	resto = segundos % (24 * 3600);
	horas = resto / 3600;
	resto = resto % 3600;
	minutos = resto / 60;
	resto = resto % 60;
		
	printf("%d segundos son: %d dias, %d horas, %d minutos y %d segundos.\n", segundos, dias, horas, minutos, resto);
	
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
	int resto;
	
	dias = 0;
	horas = 0;
	minutos = 0;
	segundos = 0;
	resto = 0;
	
	printf("Conversion de segundos en dias, horas, minutos y segundos.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el numero de segundos: ");
	scanf("%d", &segundos);

	dias = segundos / (24 * 3600);
	resto = segundos % (24 * 3600);
	horas = resto / 3600;
	resto = resto % 3600;
	minutos = resto / 60;
	resto = resto % 60;
		
	printf("%d segundos son: %d dias, %d horas, %d minutos y %d segundos.\n", segundos, dias, horas, minutos, resto);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}