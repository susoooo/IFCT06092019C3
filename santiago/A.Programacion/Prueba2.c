#include<stdio.h>
main()
{	int numero1;
	int numero2;
	int suma;
	int resta;
	int multiplicacion;
	int division;

	numero1=0;
	numero2=0;
	suma=0;
	resta=0;
	multiplicacion=0;
	division=0;

	printf("Hola soy CALCU+\n");
	scanf("%d",&numero1);
	scanf("%d",&numero2);

	suma = numero1+numero2;
	resta = numero1-numero2;
	multiplicacion = numero1*numero2;
	division = numero1/numero2;
	printf("Resultado suma: %d\n",suma);
	printf("Resultado resta:%d\n",resta);
	printf("Resultado multiplicacion:%d\n",multiplicacion);
	printf("Resultado division:%d\n",division);}