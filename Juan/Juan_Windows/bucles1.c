/*
Ejercicio 1
Realizar un programa que imprima los números del 1 al 57. Repetir este ejercicio con
todos los tipos de bucles (for, while, y do-while).
*/

#include <stdio.h>

void main(){
//Declaracion
int numero;
// Inicializar
numero=1;
//Salida de datos por pantalla
while(numero<=57)
{
	printf("Contando con while %d\n", numero);
	numero++;
}
numero=1;
for(numero=0;numero<=57;numero++)
{
	printf("Contando con for %d\n", numero);
}
numero=1;
do
{
	printf("Contando con dowhile %d\n", numero);
	numero++;
}
while(numero<=57);
}