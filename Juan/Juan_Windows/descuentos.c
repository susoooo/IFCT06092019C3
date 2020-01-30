/*Ejercicio 1: Cálculo de precios con descuento
Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y te
diga el precio con descuento. Por ejemplo, si el precio que introduce el usuario es 300 y
el descuento 20, el programa dirá que el precio final con descuento es de 240.*/

#include <stdio.h>

void main(){
//Declaración	
float precio;
float descuento;
float preciodescuento;
//Inicialización
precio=0;
descuento=0;
//preciodescuento se puede inicializar pero no es necesario
//preciodescuento=0;

printf("Introduce el precio del producto \n");
scanf("%f",&precio);
printf("Introduce el porcentaje de descuento aplicable \n");
scanf("%f",&descuento);
preciodescuento=precio-(precio*(descuento/100));
printf("El precio final del producto con descuento es de: %0.2f €", preciodescuento);
}
