#include <stdio.h>
#include <math.h>

main()
{
	int resistencia1;
	int resistencia2;
	float equivalente;
	
	resistencia1 = 0;
	resistencia2 = 0;
	equivalente = 0.0;

	printf("Calculo de resistencias equivalentes.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el valor de la primera resistencia: ");
	scanf("%d", &resistencia1);
	
	printf("Introduzca el valor de la segunda resistencia: ");
	scanf("%d", &resistencia2);
	
	equivalente = (float)( (resistencia1 * resistencia2) / (resistencia1 + resistencia2));
	
	printf("El resultado de la resistencia equivalente es: %f\n", equivalente);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
}