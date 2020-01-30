/*Ejercicio 3: Cambio de dólares a euros.
Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros..*/

#include <stdio.h>

void main(){
//Declaracion
float euros;
float dolares;
//Inicialización
euros=0;
dolares=0;
//Introduce datos
printf("Introduce el número de dólares \n");
scanf("%f",&dolares);
//Operaciones
euros=dolares/1.33250;
//Salida de datos por pantalla
printf("El cambio a euros es de: %0.5f €", euros);
}