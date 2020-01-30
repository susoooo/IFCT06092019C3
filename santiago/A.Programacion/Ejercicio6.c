#include<stdio.h>
main()
{	int segundos;
	int dias;
	int horas;
	int minutos;

	segundos=0;
	dias=0;
	horas=0;
	minutos=0;

	printf("Pasar segundos a horas dias y minutos\n");
	printf("Segundos");
	scanf("%d",&segundos);

	dias=segundos/86400;
	horas=segundos/3600;
	minutos=segundos/60;

	printf("Dias:%d\n",dias);
	printf("Horas:%d\n",horas);
	printf("Minutos:%d\n",minutos);
}