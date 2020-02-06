/* 4. Diseñe un programa, que muestre el mayor y el menor de tres introducidos por el usuario.
Desarrolle 2 Funciones una para calcular el número mayor y otra para calcular el número menor. */

#include <stdio.h>

float calculo()
{
float numeros[3];
float numero;
float mayor;
float menor;
int contador;
mayor=0;
menor=0;

printf("Introduce tres números\n");
for(contador=0;contador<3;contador++)
{
scanf("%f", &numero);
numeros[contador]=numero;
}

for(contador=0;contador<3;contador++)
{
	if(mayor<numeros[contador])
	{
		mayor=numeros[contador];
	}else
	{
	}
	if(menor>numeros[contador])
	{
		menor=numeros[contador];
	}else
	{
		if(menor==0)
		{
			menor=numeros[contador];
		}
	}
}

printf("El número mayor es %0.2f\n", mayor);
printf("El número menor es %0.2f\n", menor);
}

void main()
{

calculo();
	
}
