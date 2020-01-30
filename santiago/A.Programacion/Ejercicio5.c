#include<stdio.h>
main()
{	int dias;
	int horas;
	int minutos;
	float segundos;

	dias=0;
	horas=0;
	minutos=0;
	segundos=0;

	printf("Pasar dias horas y minutos a segundos:\n");
	printf("Dias:\n");
	scanf("%d",&dias);
	printf("Horas\n");
	scanf("%d",&horas);
	printf("Minutos\n");
	scanf("%d",&minutos);

	segundos=dias*86400+horas*3600+minutos*60;
	printf("Segundos: %f",segundos);
}