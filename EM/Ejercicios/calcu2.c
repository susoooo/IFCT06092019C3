#include<stdio.h>
main()
{
int numero1;
int numero2;
int suma;
int resta;
int multiplicacion;
float division;
int operator;

numero1=0;
numero2=0;
suma=0;
resta=0;
multiplicacion=0;
division=0.0;
operator=0;

printf("Ola soy calcuplus Version 1.0\n");
	printf("Programago por: Elvis Martin\n");

printf("Dime un numero\n");
scanf("%d",&numero1);

printf("Dime el segundo numero\n");
scanf("%d",&numero2);


	printf("Introduce la operacion a realizar\n");
	printf("1=suma\n");
	printf("2=resta\n");
	printf("3=multiplicacion\n");
	printf("4=division\n");
	
suma=numero1+numero2;
resta=numero1-numero2;
multiplicacion=numero1*numero2;
division=(float)numero1/numero2;

printf("Numero de la operacion\n");
scanf("%d",&operator);

if(operator==1)
	{
	printf("La suma es:%d\n",suma); 
	}
	
	else
	{
	if(operator==2)
	{
	printf("La resta es:%d\n",resta);
	}

	else
	{
			if(operator==3)
			{
				printf("La multiplicacion es:%d\n",multiplicacion);
				
			}

			else
			{
				if(operator==4)
				{
					printf("La division es: %f\n",division);
				
				}
				
			}
	}

}
}