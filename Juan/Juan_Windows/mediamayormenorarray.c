/*
Ejercicio 5: Media, mayor y menor de un conjunto fijo.
Realizar un programa que pida las notas de 40 alumnos por pantalla y muestre un menú
de opciones: 1. Listar notas, 2.Calcular la media, 3.Calcular el menor, 4.Calcular el
mayor.
*/

#include <stdio.h>

void main(){
float listadoNotas[40];
int notas;
int contador;
int opcion;
float suma;
float mayor;
float menor;
float media;
mayor=0.0f;
menor=0.0f;
media=0.0f;
opcion=0;
suma=0.0f;
printf("¿De cuántos alumnos quieres introducir la nota?\n");
scanf("%d", &notas);

if(notas!=0)
{
	for(contador=0;contador<notas;contador++)
	{
		printf("Introduce la nota del alumno nº %d\n", contador+1);
		scanf("%f", &listadoNotas[contador]);
	}
	//Operaciones:
	// Calcular la media de las notas
	for(contador=0;contador<notas;contador++)
	{
		suma=suma+listadoNotas[contador];
	}
	media=suma/notas;
	// Calcular la nota mayor:
	for(contador=0;contador<notas;contador++)
	{
		if(mayor<listadoNotas[contador])
		{
			mayor=listadoNotas[contador];
		}
		else
		{
		}	
	}
	// Calcular la menor nota:
	for(contador=0;contador<notas;contador++)
	{
		if(menor>listadoNotas[contador])
		{
			menor=listadoNotas[contador];
		}
		else
		{
			if(menor==0)
			{
				menor=listadoNotas[contador];
			}
		}
	}
	
	printf("%0.2f\n", media);
	printf("%0.2f\n", mayor);
	printf("%0.2f\n", menor);
	
	printf("Pulsa una de las siguientes opciones:\n");
	printf("1. Listar notas\n");
	printf("2. Calcular la media\n");
	printf("3. Calcular el menor\n");
	printf("4. Calcular el mayor\n");
	scanf("%d", &opcion);
	if(opcion==1)
	{
		printf("Las notas de los alumnos son las siguientes:\n");
		for(contador=0;contador<notas;contador++)
		{
			printf("%0.2f\n", listadoNotas[contador]);
		}
	}
	else
	{
		if(opcion==2)
		{
			printf("La media de las notas es %0.2f\n", media);
		}	
		else
		{
			if(opcion==3)
			{
				printf("La nota menor es: %0.2f\n", menor);
			}
			else
			{
				if(opcion==4)
				{
					printf("La nota mayor es: %0.2f\n", mayor);
				}
				else
				{
				printf("No tienes notas de alumnos");
				}
			}
		}
	}
}
}