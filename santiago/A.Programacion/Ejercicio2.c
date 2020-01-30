#include<stdio.h>
main()
{	float lado1;
	float lado2;
	float perimetro;
	float area;

	lado1 = 0;
	lado2 = 0;
	perimetro = 0;
	area = 0;

	printf("Calculo de area y perimetro\n");
	printf("1er lado\n");
	scanf("%f",&lado1);
	printf("2do lado\n");
	scanf("%f",&lado2);

	perimetro = lado1 + lado2;
	area = lado1 * lado2;

	printf("Perimetro : %f\n",perimetro);
	printf("area : %f\n",area);}