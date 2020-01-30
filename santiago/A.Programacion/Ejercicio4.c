#include<stdio.h>
main()
{	float circunferencia;
	float area;
	float volumen;
	float radio;
	float volumen2;

	radio = 0;
	circunferencia = 0;
	area = 0;
	volumen = 0;
	volumen2 = 0;

	printf("Calculo de perimetro de circunferencia\n");
	printf("area del circulo");
	printf("y volumen de la esfera");
	printf("Radio:");
	scanf("%f",&radio);

	circunferencia = 2*3.1416*radio;
	area = 3.1416*radio*2;
	volumen2 = radio*3/3;
	volumen = 4*3.1416*volumen2;
	
	printf("Circunferencia: %f\n",circunferencia);
	printf("Area: %f\n",area);
	printf("Volumen: %f\n",volumen);}