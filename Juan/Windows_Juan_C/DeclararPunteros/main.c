/*
1. Declaración de punteros. EJERCICIO GUIADO
Escribir un programa que declare una variable entera (i), un puntero a entero (pi), una variable double
(d) y un puntero double (pd). Realizar las siguientes operaciones:
-Hacer que las variables tipo puntero apunten a las zonas de memoria de las variables
normales.
-Inicializar valores mediante asignaciones a las variables normales
-Mostrar los valores asignados, utilizando las variables normales y las variables tipo puntero
-Cambiar los valores utilizando las variables tipo puntero
-Volver a mostrar los valores asignados, utilizando las variables normales y las variables tipo
puntero
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
   //Declaramos una variable entera i:
   int i;
   //Declaramos un puntero entero pi:
   int * pi;
   //Declaramos una variable double d:
   double d;
   //Declaramos un puntero double pd:
   double * pd;
   //-Hacer que las variables tipo puntero apunten a las zonas de memoria de las variables
   //normales.
   pi=&i;
   pd=&d;
   //-Inicializar valores mediante asignaciones a las variables normales
   i=8;
   d=4;
   //-Mostrar los valores asignados, utilizando las variables normales y las variables tipo puntero
   printf("Valor de i y de d por variable i=%d d=%0.2lf\nValor de i y d por su puntero i=%d d=%0.2lf\n", i, d,*pi,*pd);
   //-Cambiar los valores utilizando las variables tipo puntero
   *pi=10;
   *pd=20;
   	//-Volver a mostrar los valores asignados, utilizando las variables normales y las variables tipo puntero
    printf("Valor de i y de d por variable i=%d d=%0.2lf\nValor de i y d por su puntero i=%d d=%0.2lf\n", i, d,*pi,*pd);
}
