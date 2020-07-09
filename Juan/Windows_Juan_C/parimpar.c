/*
Ejercicio 10: Condición if 2. 
Realizar un programa que pida tres números y diga cuáles son pares y cuáles impares.  
*/

#include <stdio.h>

void main(){
//Declaracion
int numero1;
int numero2;
int numero3;
int n1;
int n2;
int n3;
// NO hace falta inicializar
//Introducción de los datos
printf("Introduce dos números\n");
printf("Escribe el primer número ");
scanf("%d",&numero1);
printf("Escribe el segundo número ");
scanf("%d",&numero2);
printf("Escribe el tercer número ");
scanf("%d",&numero3);
//Operaciones
n1=numero1/2;
n2=numero2/2;
n3=numero3/2;
//Salida de datos por pantalla
if(n1==(float)numero1/2)
	{
		printf("El número %0.2f es impar ", numero1);
	}
	else
	{
		printf("El número %0.2f es par ", numero1);
	}
}