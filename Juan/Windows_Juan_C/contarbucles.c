/*
Ejercicio 3
Realizar un programa que pida al usuario dos números y presente los números del
primer número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while).
*/

#include <stdio.h>

void main(){
//Declaracion
int inicio;
int fin;
int contador;
int continuar;
// Inicializar
// Introducción de datos
printf("Escribe un número para empezar a contar ");
scanf("%d", &inicio);
contador=inicio;
printf("Escribe otro número hasta el que quieres contar ");
scanf("%d", &fin);
//Salida de datos por pantalla
printf("Contando con while\n");
while(contador<=fin)
{
	printf("%d\n", contador);
	contador++;
}
printf("Conteo con while terminado\n");
contador=inicio;
printf("Ponemos el contador con el valor inicial %d\n", contador);
printf("Pulsa un número para continuar ");
scanf("%d", continuar);
printf("Contando con for\n");
for(contador=inicio;contador<=fin;contador++)
{
	printf("%d\n", contador);
}
printf("Conteo con for terminado\n");
contador=inicio;
printf("Ponemos el contador con el valor inicial %d\n", contador);
printf("Pulsa un número para continuar ");
scanf("%d", continuar);
printf("Contando con dowhile \n");
do
{
	printf("%d\n", contador);
	contador++;
}
while(contador<=fin);
printf("Conteo con dowhile terminado");
}
