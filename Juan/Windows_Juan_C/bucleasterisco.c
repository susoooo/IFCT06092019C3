/*
Ejercicio 4
Realizar un programa que imprima por pantalla tántos asteriscos como diga el usuario.
Al ejecutarse debe preguntar “Cuantos asteriscos desea imprimir?”, leer el número que
introduce el usuario e imprimir los asteriscos.
*/

#include <stdio.h>

void main(){
//Declaracion
int numero;
int contador;
// Inicializar
contador=1;
// Introducción de datos
printf("Cuantos asteriscos desea imprimir? ");
scanf("%d", &numero);
//Salida de datos por pantalla
printf("Asteriscos verticales con while\n");

while(contador<=numero)
{
	printf("*\n");
	contador++;
}
printf("Asteriscos horizontales con for\n");
for(contador=1;contador<=numero;contador++)
{
	printf("*");
}
printf("\n");
printf("Asteriscos con dowhile\n");
contador=1;
do
{
	printf("*", contador);
	contador++;
}
while(contador<=numero);
printf("\n");
printf("Asteriscos dibujados");
}