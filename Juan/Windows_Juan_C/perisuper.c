/*Ejercicio 2: Cálculo de área y perímetro
Escribe un programa que pregunte al usuario los dos lados de un rectángulo y
presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por
altura).*/

#include <stdio.h>

void main(){
//Declaracion
float lado1;
float lado2;
float area;
float perimetro;
//Inicialización
lado1=0;
lado2=0;
//Introduce datos
printf("Introduce el valor en centímetros del primer lado de un rectángulo \n");
scanf("%f",&lado1);
printf("Introduce el valor en centímetros del segundo lado de un rectángulo \n");
scanf("%f",&lado2);
//Operaciones
area=lado1*lado2;
perimetro=(lado1*2)+(lado2*2);
//Salida de datos por pantalla
printf("La superficie del rectángulo es de: %0.2f cm2\nEl perímetro del rectángulo es de: %0.2f cms",area, perimetro);
}
