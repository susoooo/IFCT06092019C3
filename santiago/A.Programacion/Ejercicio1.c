#include<stdio.h>
main()
{
	float precio;
	float descuento;
	float division;
	float multiplicacion;
	float resultado;

	precio=0;
	descuento=0;
	division=0;
	multiplicacion=0;
	resultado=0;

	printf("Precio\n");
	scanf("%f",&precio);
	printf("Porcentaje de descuento\n");
	scanf("%f",&descuento);

	division = descuento/100;
	multiplicacion = precio*division;
	resultado = precio-multiplicacion;
	printf("Precio final: %0.2f\n",resultado);}