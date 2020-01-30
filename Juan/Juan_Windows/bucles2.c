/*
Ejercicio 2
Realizar un programa que pida al usuario un número y presente los números del 1 al
número que introdujo el usuario. Repetir este ejercicio con todos los tipos de bucles
(for, while, y do-while).
*/

#include <stdio.h>

void main(){
//Declaracion
int numero;
int contador;
// Inicializar
contador=1;
// Introducción de datos
printf("Escribe un número para contar hasta el ");
scanf("%d", &numero);
//Salida de datos por pantalla
while(contador<=numero)
{
	printf("Contando con while %d\n", contador);
	contador++;
}
contador=1;
for(contador=1;contador<=numero;contador++)
{
	printf("Contando con for %d\n", contador);
}
contador=1;
do
{
	printf("Contando con dowhile %d\n", contador);
	contador++;
}
while(contador<=numero);
}