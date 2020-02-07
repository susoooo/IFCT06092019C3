/*Ejercicio 4: Cálculo de perímetro de circunferencia, área del
círculo, y volumen de la esfera.
Suponiendo que pi = 3.1416. Escribe un programa que pida al usuario que introduzca el
radio, y presente por pantalla el cálculo del perímetro de la circunferencia (2*pi*r), el
área del círculo (pi*r2), y el volumen de la esfera (V = 4*pi*r3/3).*/

#include <stdio.h>

void main(){
//Declaracion
float radio;
float perimetro;
float area;
float volumen;
float pi;
//Inicialización
radio=0;
pi=3.1416;
//Introducción de los datos
printf("Introduce el valor del radio de una circunferencia en centímetros: ");
scanf("%f",&radio);
//Operaciones
perimetro=(2*pi*radio);
area=(pi*radio*radio);
volumen=(4*pi*(radio*radio*radio/3));
//Salida de datos por pantalla
printf("El perímetro de la circunferencia es de: %0.3f cms\nEl área del círculo es de:"
" %0.3f metros cuadrados\nEl volumen de la esfera es de: %0.3f metros cúbicos",perimetro, area, volumen);

}