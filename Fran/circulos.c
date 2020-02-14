#include <stdio.h>
#include <math.h>

main()
{
	float pi;
	float circunferencia;
	float area;
	float radio;
	float volumen;
	
	pi = 3.141592;
	circunferencia = 0.0;
	area = 0.0;
	radio = 0.0;
	volumen = 0.0;
		
	printf("Calculo de area, circunferencia y volumen de un circulo.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el radio de la circunferencia: ");
	scanf("%f", &radio);
	
	
	area = pi * pow (radio, 2);
	circunferencia = 2 * radio * pi;
	volumen = (4 * pi + pow (radio, 3)) / 3;
	
	printf("El perimetro de la circunferencia es: %f\n", circunferencia);
	printf("El area es: %f\n", area);
	printf("El volumen es: %f", volumen);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
}