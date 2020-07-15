/*
Ejercicio 7: Solución de la ecuación de segundo grado.
Escribir un programa que pida por teclado los tres coeficientes (a, b y c) de la ecuación
ax2+bx+c=0 y calcule las dos soluciones suponiendo que ambas serán reales (es decir
que la raíz queda positiva). Nota: x1,2=(a±sqrt(b2-4ac))/2, sqrt es una función que
devuelve la raíz cuadrada, para poder invocarla es necesario poner en la cabecera del
programa: #include <math.h>
*/

#include <stdio.h>
#include <math.h>

void main(){
//Declaracion
int a;
int b;
int c;
//Inicialización no es necesario
//Introducción de los datos
printf("Introduce los valores de la ecuación\n");
printf("Introduce el valor del coeficiente a\n");
scanf("%d",&a);
printf("Introduce el valor del coeficiente b\n");
scanf("%d",&b);
printf("Introduce el valor del coeficiente c\n");
scanf("%d",&c);
//Operaciones
//Salida de datos por pantalla
if((b*b)-4*a*c>0)
{
printf("La ecuación da los siguientes resultados %f , %f\n", (a+sqrt(b*b-4*a*c)/2), (a-sqrt(b*b-4*a*c)/2));
}
else
{
printf("El resultado de la ecuación no nos da un número real, nos da un número imaginario\n");
}
}