/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.intro;


import static java.lang.System.in;
import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class calculo {
    
// Ejercicio 4:Calcular factorial
    /*
static int calcular_factorial(int num){
int contador;
int factorial = 0;
contador=num;
while(contador!=1)
{
factorial=num*(contador-1);
num=factorial;
contador--;
}
return(factorial);
    }
    */
     public static void main(String[] args){

        //Declaracion
        Scanner scn= new Scanner(System.in);
/*
System.out.println("Ejercicio 1: Área y perímetro \n");
int lado1;
int lado2;
float area;
float perimetro;


System.out.println("Introduce el valor en centímetros del primer lado de un rectángulo \n");
//entrada
lado1 = scn.nextInt();
System.out.println("Introduce el valor en centímetros del segundo lado de un rectángulo \n");
lado2 = scn.nextInt();
//Operaciones
area=lado1*lado2;
perimetro=(2*lado1)+(2*lado2);
//Salida de datos por pantalla
System.out.println("La superficie del rectángulo es de:  " + area + "\nEl perímetro del rectángulo es de: " + perimetro);


System.out.println("Ejercicio 2: Cambiar dólares a euros \n");
float dolares;
float euros;
System.out.println("Introduce los dólares \n");
dolares= scn.nextFloat();
euros=  (float) (dolares/1.3325);
System.out.println(dolares +" dólares son: " + euros + " euros\n" );

System.out.println("Ejercicio 3:\n");
//Declaracion
int inicio;
int fin;
int contador;

// Introducción de datos
System.out.println("Escribe un número para empezar a contar ");
inicio= scn.nextInt();
contador=inicio;
System.out.println("Escribe otro número hasta el que quieres contar ");
fin= scn.nextInt();
//Salida de datos por pantalla
System.out.println("Contando con while ");
while(contador<=fin)
{
	System.out.printf(" "+ contador);
	contador++;
}
System.out.println("\nConteo con while terminado");
contador=inicio;
System.out.println("Ponemos el contador con el valor inicial \n"+ contador);

System.out.println("Contando con for");
for(contador=inicio;contador<=fin;contador++)
{
	System.out.printf(" "+ contador);
}
System.out.println("\nConteo con for terminado");
contador=inicio;
System.out.println("Ponemos el contador con el valor inicial %d\n"+ contador);

System.out.println("Contando con dowhile");
do
{
	System.out.printf(" "+ contador);
	contador++;
}
while(contador<=fin);
System.out.println("\nConteo con dowhile terminado");

System.out.println("Ejercicio 4:Calcular factorial ");
int numero;
System.out.println("Introduce un número entero para calcular su factorial");
numero= scn.nextInt();
System.out.printf("El factorial del número "+numero+" es "+ calcular_factorial(numero));
	
float numeros[];
float numero;
float mayor;
float menor;
int contador;
mayor=0;
menor=0;
numeros= new float[3];
System.out.printf("Introduce tres números\n");
for(contador=0;contador<3;contador++)
{
numero=scn.nextFloat();
numeros[contador]=numero;
}

for(contador=0;contador<3;contador++)
{
	if(mayor<numeros[contador])
	{
		mayor=numeros[contador];
	}else
	{
	}
	if(menor>numeros[contador])
	{
		menor=numeros[contador];
	}else
	{
		if(menor==0)
		{
			menor=numeros[contador];
		}
	}
}

System.out.printf("El número mayor es "+ mayor);
System.out.printf("\nEl número menor es "+ menor);


// Ejercicio 6: Calcular salario:

	float salario;
	int horas;
        float precio_hora;
	salario=0;
	horas=0;
        precio_hora=0;
	
		System.out.printf("Introduce las horas trabajadas por el trabajador/a \n");
		horas= scn.nextInt();
		System.out.printf("Introduce el precio hora \n");
		precio_hora= scn.nextFloat();

                if(horas>=50){
                    salario=(float) ((40*precio_hora)+(((float)horas-40)*(2*precio_hora)));
                }
                else if(horas>40)
		{
                    salario=(float) ((40*precio_hora)+(((float)horas-40)*(precio_hora+(0.5*precio_hora))));		
                }else
		{
                    salario=(float) (horas*precio_hora);
		}
                System.out.printf("El salario semanal del trabajador es de "+salario+" €");
        }
}

*/

// Ejercicio 7: Notas alumnos

float notas[];
int alumnos;
int contador;
int opcion;
float nota;
float mayor;
float menor;
float media;
float suma;
alumnos=0;
mayor=0;
menor=0;
media=0;
suma=0;
opcion=0;
nota=0;

notas= new float[alumnos];

System.out.printf("¿De cuántos alumnos quieres introducir la nota?\n");
alumnos= scn.nextInt();

if(alumnos!=0)
{
	for(contador=0;contador<alumnos;contador++)
	{
		System.out.printf("Introduce la nota del alumno nº %d\n", contador+1);
		nota = scn.nextInt();
	}
	//Operaciones:
	// Calcular la media de las notas
	for(contador=0;contador<alumnos;contador++)
	{
		//(float)suma=(float)suma+alumnos[contador];
	}
	media=suma/alumnos;
	// Calcular la nota mayor:
	for(contador=0;contador<alumnos;contador++)
	{
		if(mayor<notas[contador])
		{
			mayor=notas[contador];
		}
		else
		{
		}	
	}
	// Calcular la menor nota:
	for(contador=0;contador<alumnos;contador++)
	{
		if(menor>notas[contador])
		{
			menor=notas[contador];
		}
		else
		{
			if(menor==0)
			{
				menor=notas[contador];
			}
		}
	}
        
	System.out.printf("%0.2f\n", media);
	System.out.printf("%0.2f\n", mayor);
	System.out.printf("%0.2f\n", menor);
	
	System.out.printf("Pulsa una de las siguientes opciones:\n");
	System.out.printf("1. Listar notas\n");
	System.out.printf("2. Calcular la media\n");
	System.out.printf("3. Calcular el menor\n");
	System.out.printf("4. Calcular el mayor\n");
	opcion= scn.nextInt();
	if(opcion==1)
	{
		System.out.printf("Las notas de los alumnos son las siguientes:\n");
		for(contador=0;contador<alumnos;contador++)
		{
		System.out.printf("%0.2f\n", notas[alumnos]);
		}
	}
	else
	{
		if(opcion==2)
		{
		System.out.printf("La media de las notas es %0.2f\n", media);
		}	
		else
		{
			if(opcion==3)
			{
			System.out.printf("La nota menor es: %0.2f\n", menor);
			}
			else
			{
				if(opcion==4)
				{
				System.out.printf("La nota mayor es: \n", mayor);
				}
				else
				{
				System.out.printf("No tienes notas de alumnos\n");
				}
			}
		}
            }
        }
     }
}
