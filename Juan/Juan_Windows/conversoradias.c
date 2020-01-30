/*
Ejercicio 6: Pasar de segundos a días, horas y minutos.
Escribe un programa que pida al usuario que introduzca los segundos, y le conteste
diciéndole el número de días, horas, minutos y segundos que son.
*/

#include <stdio.h>

void main(){
//Declaracion
int segundos2;
int segundos;
int minutos;
int minutos2;
int horas2;
int horas;
int dias;
//Inicialización
segundos2=0;
//Introducción de los datos
printf("Introduce una cantidad de segundos "
"para hacer la conversión a días, horas, minutos y segundos\n");
scanf("%d",&segundos2);
//Operaciones
minutos2=segundos2/60;
segundos=segundos2-(minutos2*60);
horas2=minutos2/60;
minutos=minutos2-(horas2*60);
dias=horas2/24;
horas=horas2-(dias*24);
//Salida de datos por pantalla
printf("%d segundos son %d días, %d horas, %d minutos y %d segundos\n", segundos2, dias, horas, minutos, segundos);
}