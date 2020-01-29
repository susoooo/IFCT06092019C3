#include<stdio.h>
#include<math.h>
main()
{
	float lado1;
	float lado2;
	float altura;
	int option;
	float area;

	lado1=0;
	lado2=0;
	altura=0;
	option=0;
	area=0;

	printf("CALCULO DE AREAS\n");
	printf("===============================\n");
	printf("1 - Calcular el área de un triangulo\n");
	printf("2 - Calcular el área de un trapecio\n");
	printf("3 - Calcular en área de un rectángulo\n");
	scanf("%d",&option);

	if(option==1)
	 {
		printf("Base?\n");
		scanf("%f",&lado1);
		printf("Altura?\n");
		scanf("%f",&lado2);

		area=(lado1*lado2)/2;
		printf("Area = %f\n",area);
	 }

	if(option==2)
	 {
		printf("1 Lado paralelo?\n");
		scanf("%f",&lado1);
		printf("2 Lado paralelo?\n");
		scanf("%f",&lado2);
		printf("Altura paralelo?\n");
		scanf("%f",&altura);

		area=altura*(lado1+lado2/2);
		printf("Area = %f\n",area);
	 }

	if(option==3)
	 {
		printf("1 Lado?\n");
		scanf("%f",&lado1);
		printf("2 Lado?\n");
		scanf("%f",&lado2);

		area=lado1*lado2;
		printf("Area = %f\n",area);
	 }
}