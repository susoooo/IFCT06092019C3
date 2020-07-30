#include <stdio.h>

main()
{
int numero;
int divisor;
int contador;

numero=0;
divisor=0;
contador=0;

printf("Introduce un numero:");
scanf("%d",&numero);
for(contador=1;contador<=numero;contador++)
	{
		numero/contador;
		if(numero%contador==0)
		{
			divisor=contador;
			printf("\ndivisor: %d",divisor);
		}		
	}
	
}