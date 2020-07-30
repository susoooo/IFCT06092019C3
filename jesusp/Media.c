#include <stdio.h>
#include <math.h>

float media;

float media2(float numero1,float numero2)
{	
	media=numero1+numero2;	
	media=media/2;
}

float main()
{	
	float numero1;
	float numero2;
	numero1=0.0;
	numero2=0.0;	
	printf("Introduzca un numero distinto de cero: ");
	scanf("%f", &numero1);
	printf("\nIntroduzca un numero distinto de cero: ");
	scanf("%f", &numero2);
	media2(numero1, numero2);
	if(numero1!=0 && numero2!=0)
	{
		media2(numero1,numero2);
		printf("La media es: %.2f",media);
	}
	
}