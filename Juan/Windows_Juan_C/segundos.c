/*Ejercicio 5: Pasar de días, horas y minutos a segundos.
Escribe un programa que pida al usuario los siguientes datos: días, horas y minutos. Y le
conteste con la cantidad de segundos totales que son esos datos.*/

#include <stdio.h>

void main(){
//Declaracion
int dias;
int horas;
int minutos;
int horasdias;
int minutoshoras;
int segundosminutos;
int segundos;
//Inicialización
dias=0;
horas=0;
minutos=0;
segundos=0;
//Introducción de los datos
printf("Introduce los días ");
scanf("%d",&dias);
printf("Introduce los minutos ");
scanf("%d",&minutos);
printf("Introduce los segundos ");
scanf("%d",&segundos);
//Operaciones
horasdias=24*dias;
minutoshoras=60*minutos;
segundosminutos=60*segundos;
segundos=horasdias+minutoshoras+segundosminutos;
//Salida de datos por pantalla
printf("El tiempo total es de: %0.3d segundos",segundos);

}