/*
Ejercicio 9: Media de cuatro números.
Escribir un programa que pida por teclado cuatro números y calcule y presente la media
de los cuatro.
*/

#include <stdio.h>

void main(){
//Declaracion
int numero1;
int numero2;
int numero3;
int numero4;
// NO hace falta inicializar
//Introducción de los datos
printf("Introduce cuatro números para que calcule la media\n");
printf("Escribe el primer número ");
scanf("%d",&numero1);
printf("Escribe el segundo número ");
scanf("%d",&numero2);
printf("Escribe el tercer número ");
scanf("%d",&numero3);
printf("Escribe el cuarto número ");
scanf("%d",&numero4);
//Operaciones
//Salida de datos por pantalla
printf("La media de los cuatro números es %0.2f ", ((float)(numero1+numero2+numero3+numero4)/4));
}