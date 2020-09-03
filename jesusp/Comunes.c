#include <stdio.h>

main()
{
int numero1;
int divisor;
int contador;
int numero2;

numero1=0;
numero2=0;
divisor=0;
contador=0;

printf("Introduce un numero:");
scanf("%d",&numero1);
printf("Introduce otro numero:");
scanf("%d",&numero2);
for(contador=1;contador<=numero1;contador++)
	{
		numero1/contador;
		numero2/contador;
		if(numero1%contador==0 && numero2%contador==0)
		{
			divisor=contador;
			printf("\ndivisor: %d",divisor);
		}		
	}
	
}