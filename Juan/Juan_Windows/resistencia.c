/*
Ejercicio 8: Cálculo de la resistencia equivalente.
Escribir un programa que pida por teclado dos resistencias y calcule y presente la
resistencia equivalente en paralelo (Req=(R1*R2)/(R1+R2)).
*/

#include <stdio.h>

void main(){
//Declaracion
int r1;
int r2;
//Inicialización
//Introducción de los datos
printf("Introduce el valor de la resistencia uno\n");
scanf("%d",&r1);
printf("Introduce el valor de la resistencia dos\n");
scanf("%d",&r2);
//Operaciones
//Salida de datos por pantalla
printf("La resistencia equivalente es %0.2f", ((float)(r1*r2)/(r1+r2)));

}