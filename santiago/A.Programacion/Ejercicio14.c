#include<stdio.h>
main()
{
	int horas;
	int horasE;
	int precio;
	int resultado1;
	int resultado2;

	horas=0;
	horasE=0;
	precio=0;
	resultado1;
	resultado2;

	printf("Calculo de salario semanal\n");
	printf("Horas trabajadas\n");
	scanf("%d",&horas);
	printf("Precio por hora\n");
	scanf("%d",&precio);

	if(horas>40)
	 {
		horasE=horas-40;
		horas=40;
		resultado1=precio*(40+(horasE*0.5)+horasE);
	}
	else
	 {
		resultado2=horas*precio;
	 }

	  if(horasE>9)
	 {
		resultado2=((horasE-9)*2+horas+18)*precio;

	 }
	else
	{ resultado2=resultado1; }

	printf("Salario semanal de %d euros\n",resultado2);
}