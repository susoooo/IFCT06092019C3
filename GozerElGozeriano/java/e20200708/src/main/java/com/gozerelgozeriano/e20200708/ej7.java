/*
Ejercicio 5: Media, mayor y menor de un conjunto fijo.
Realizar un programa que pida las notas de 40 alumnos por pantalla y muestre un menú
de opciones: 1. Listar notas, 2.Calcular la media, 3.Calcular el menor, 4.Calcular el
mayor.
 */
package com.gozerelgozeriano.e20200708;

import java.util.Scanner;
public class ej7 {
    static final int SIZE = 4;
    static public void main(String[] args)
    {
        Float[] notas = new Float[SIZE];
	int contador;
	int opcion;
	float media;
	int indiceOrdenNota;
	indiceOrdenNota = 0;
	media = 0.0f;
        Scanner in = new Scanner(System.in);
        for(contador=0;contador<SIZE;contador++){
            System.out.println("Nota alumno "+ (contador+1)+": ");
            System.out.flush();
            notas[contador] =in.nextFloat();
	}
	System.out.println("Todas las notas introducidas.");
	
	do{
            System.out.println("\t1) Listar notas\n\t2) Calcular la media\n\t3) Mostrar el menor\n\t4) Mostrar el mayor\n\t5) Salir\nOpcion: ");
            opcion = in.nextInt();
            indiceOrdenNota = 0;
            switch(opcion)
            {
                case 1:
                    System.out.println("Listar notas");
                    for(contador=0;contador<SIZE;contador++){
                        System.out.printf("Nota del alumno %d: %f\n",contador+1,notas[contador]);
                    }
                    break;
                case 2:
                    for(contador=0;contador<SIZE;contador++){
                        media = media + notas[contador];
                    }
                    media = media / SIZE;
                    System.out.printf("Nota media = %f\n",media);
                    break;
                case 3:
                    for(contador=1;contador<SIZE;contador++){
                        if(notas[contador]<notas[indiceOrdenNota]) indiceOrdenNota=contador;
                    }
                    System.out.printf("Menor nota = %f obtenida por el alumno %d\n",notas[indiceOrdenNota],indiceOrdenNota+1);
                    break;
                case 4:
                    for(contador=0;contador<SIZE;contador++){
                        if(notas[contador]>notas[indiceOrdenNota]) indiceOrdenNota=contador;
                    }
                    System.out.printf("Mayor nota = %f obtenida por el alumno %d\n",notas[indiceOrdenNota],indiceOrdenNota+1);
                    break;
            }
	}while(opcion!=5);
    }
}
