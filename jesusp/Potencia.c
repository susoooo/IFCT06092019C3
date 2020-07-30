#include <stdio.h>

main()
{
int base;
int exponente;
int potencia;
int contador;

base=0;
exponente=0;
contador=1;
potencia=1;
printf("Introduce la base: ");
scanf("%d", &base);
printf("Introduce el exponente: ");
scanf("%d", &exponente);

while(contador<=exponente)
	{	
		potencia=potencia*base;		
		contador++;
	}
printf("La potencia es:%d", potencia);
}