/* 4. Diseñe un programa, que muestre el mayor y el menor de tres introducidos por el usuario.
Desarrolle 2 Funciones una para calcular el número mayor y otra para calcular el número menor. */

#include <stdio.h>
// Función que calcula el número mayor.
int calcularMayor(int numeros[3])
{
int contador;
int mayor;
mayor=0;
contador=0;

while(contador<3)
{
	if(mayor<numeros[contador])
	{
		mayor=numeros[contador];
	}else
	{
	}
	contador++;
}
	return(mayor);
}
// Función que calcula el número menor.
int calcularMenor(int numeros[3])
{
int contador;
int menor;
menor=0;
contador=0;
while(contador<3)
{
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
contador++;
}
return(menor);
}

void main()
{
int numeros[3];
int numero;
int numeroMayor;
int numeroMenor;
int mayor;
int menor;
int contador;
numeroMayor=0;
numeroMenor=0;

printf("Introduce tres números\n");
	for(contador=0;contador<3;contador++)
	{
	scanf("%d", &numero);
	numeros[contador]=numero;
	}
mayor=calcularMayor(numeros);
menor=calcularMenor(numeros);
printf("El número mayor es %d\n", mayor);
printf("El número menor es %d\n", menor);
}
