/* 2. Crea un programa en C que tenga una función que dado un valor en Euros
 devuelva el valor en Dolares.
 Considere usar funciones.
 Sabiendo que 1 Euro Equivale Actualmente a 1,17 Dolares. */

#include <stdio.h>

float conversor()
{
float euros;
float dolares;

printf("¿Cuántos euros quieres convertir?");
scanf("%f", &euros);
dolares=1.17*euros;

printf("%0.2f euros equivalen a %0.2f dólares\n", euros, dolares);

}


void main(){

conversor();	
}
