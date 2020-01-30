#include<stdio.h>
main()
{	float numero1;
	float numero2;

	numero1=0;
	numero2=0;

	printf("Comparacion de dos numeros\n");
	printf("Numero 1:\n");
	scanf("%f",&numero1);
	printf("Numero 2:\n");
	scanf("%f",&numero2);

	if(numero1<numero2)
	{
		printf("%f\n",numero2);
	}
	else
	{	if(numero1>numero2);
		{ printf("%f\n",numero1);
		}
	}
}