#include <stdio.h>
#include <math.h>
#define NUMERO_0 -2
int resultado;
int producto(int num1, int num2, int num3, int num4)
{
	if(num1!=0 && num2!=0 && num3!=0 && num4!=0)
	{
		resultado=num1 * num2 * num3 * num4;
	}
	else
	{
		resultado=NUMERO_0;
	}
	
}

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	num1=0;
	num2=0;
	num3=0;
	num4=0;
	printf("Introduzca un numero distinto de cero: ");
	scanf("%d", &num1);
	printf("\nIntroduzca un numero distinto de cero: ");
	scanf("%d", &num2);
	printf("\nIntroduzca un numero distinto de cero: ");
	scanf("%d", &num3);
	printf("\nIntroduzca un numero distinto de cero: ");
	scanf("%d", &num4);
	producto(num1, num2, num3, num4);
	printf("El resultado es:%d", resultado);
	
}