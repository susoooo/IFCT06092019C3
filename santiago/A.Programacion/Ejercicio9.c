#include<stdio.h>
main()
{
	float numero1;
	float numero2;
	float numero3;
	float numero4;
	float resultado;

	numero1=0;
	numero2=0;
	numero3=0;
	numero4=0;
	resultado=0;

	printf("Media de cuatro numeros\n");
	printf("Numero 1\n");
	scanf("%f",&numero1);
	printf("Numero 2\n");
	scanf("%f",&numero2);
	printf("Numero 3\n");
	scanf("%f",&numero3);
	printf("Numero 4\n");
	scanf("%f",&numero4);

	resultado=(numero1+numero2+numero3+numero4)/4;
	printf("Resultado: %f",resultado);
}