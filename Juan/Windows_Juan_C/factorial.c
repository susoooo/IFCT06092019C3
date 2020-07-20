/* Ejercicio 1
Escribir un programa que calcule el factorial de un número que se le pida por pantalla. */

#include <stdio.h>

int calcular_factorial(int num)
{
int contador;
int factorial;
contador=num;
while(contador!=1)
{
factorial=num*(contador-1);
num=factorial;
contador--;
}
return(factorial);
}

void main(){
int numero;
printf("Introduce un número entero para calcular su factorial\n");
scanf("%d", &numero);
printf("El factorial del número %d es %d\n", numero, calcular_factorial(numero));
	
}