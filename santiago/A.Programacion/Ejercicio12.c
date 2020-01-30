#include<stdio.h>
main()
{
	float numero1;
	float numero2;
	float numero3;
	float mayor;
	float mayor2;
	float menor;

	numero1=0;
	numero2=0;
	numero3=0;

	printf("Organizacion de tres numeros de mayor a menor\n");
	printf("Numero1:\n");
	scanf("%f",&numero1);
	printf("Numero2:\n");
	scanf("%f",&numero2);
	printf("Numero3:\n");
	scanf("%f",&numero3);

	if(numero1>numero2 && numero1>numero3 && numero2>numero3)
	 {
		mayor=numero1;
		mayor2=numero2;
		menor=numero3;
	 }

	if(numero1>numero2 && numero1>numero3 && numero2<numero3)
	{
		mayor=numero1;
		mayor2=numero3;
		menor=numero2;
	 }
	
	if(numero1<numero2 && numero1>numero3 && numero2>numero3)
	{
		mayor=numero2;
		mayor2=numero1;
		menor=numero3;
	}

	if(numero1<numero2 && numero1<numero3 && numero2>numero3)
	{
		mayor=numero2;
		mayor2=numero3;
		menor=numero1;
	}

	if(numero1<numero2 && numero1<numero3 && numero2<numero3)
	{
		mayor=numero3;
		mayor2=numero2;
		menor=numero1;
	}

	if(numero1>numero2 && numero1<numero3 && numero2<numero3)
	{
		mayor=numero3;
		mayor2=numero1;
		menor=numero2;
	}

    printf("El mayor es:");
    printf("%f\n",mayor);
    printf("El segundo mayor es");
    printf("%f\n",mayor2);
    printf("El menor es");
    printf("%f\n",menor);	

}	