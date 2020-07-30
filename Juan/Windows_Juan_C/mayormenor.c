/*
Ejercicio 9: Condición if 1. 
Realizar un programa que pida al usuario dos números y diga cuál es el mayor y cuál el menor. 
*/

#include <stdio.h>

void main(){
//Declaracion
float numero1;
float numero2;
// NO hace falta inicializar
//Introducción de los datos
printf("Introduce dos números\n");
printf("Escribe el primer número ");
scanf("%f",&numero1);
printf("Escribe el segundo número ");
scanf("%f",&numero2);
//Operaciones
//Salida de datos por pantalla
if(numero1>numero2)
	{
		printf("El número %0.2f es mayor que %0.2f ", numero1, numero2);
	}
	else
	{
		printf("El número %0.2f es mayor que %0.2f ", numero2, numero1);
	}
}