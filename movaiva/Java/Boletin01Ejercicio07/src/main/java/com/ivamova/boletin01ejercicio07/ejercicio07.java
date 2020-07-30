/*
 Ejercicio 7: Media, mayor y menor de un conjunto fijo.
Realizar un programa que pida las notas de hasta 40 alumnos por pantalla y muestre un menú
de opciones: 1. Listar notas, 2.Calcular la media, 3.Calcular el menor, 4.Calcular el
mayor.
 */
package com.ivamova.boletin01ejercicio07;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio07 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        int numAlumnos;
        double notas[];
        double mayor;
        double menor;
        double suma;
        double media;
        int opcion;
        numAlumnos = 10;
        notas = new double[numAlumnos];
        mayor = 0;
        menor = 0;
        suma = 0;
        media = 0;
        opcion = 0;

        Scanner entrada = new Scanner(System.in);
        System.out.println("Introduzca las notas de los " + numAlumnos + " alumnos: ");
        for (int contador = 0; contador < numAlumnos; contador++) {
            notas[contador] = entrada.nextDouble();
            suma += notas[contador];
        }
        
        do {

            System.out.println("---MENÚ DE OPCIONES---");
            System.out.println("1. Listar notas");
            System.out.println("2. Calcular media");
            System.out.println("3. Calcular la nota menor");
            System.out.println("4. Calcular la nota mayor");
            System.out.println("0. Fin");
            opcion=entrada.nextInt();
            switch(opcion)
            {
                case 1:
                    for(int contador=0;contador<numAlumnos;contador++){
                        System.out.println("Alumnos "+(contador+1)+": "+notas[contador]);
                    }
                    break;
                case 2:
                    media=suma/numAlumnos;
                    System.out.println("La media de las notas es: "+media);
                    break;
                case 3:
                    menor=notas[0];
                    for(int contador=1;contador<numAlumnos;contador++)
                    {
                        if (notas[contador]<menor)
                        {
                            menor=notas[contador];
                        }
                    }
                    System.out.println("La nota menor es: "+menor);
                    break;
                case 4:
                    mayor=notas[0];
                    for(int contador=1;contador<numAlumnos;contador++)
                    {
                        if (notas[contador]>mayor)
                        {
                            mayor=notas[contador];
                        }
                    }
                    System.out.println("La nota mayor es: "+mayor);
                    break;
                case 0:
                    System.out.println("Adiós");
                    break;
                default:
                    System.out.println("Opción errónea");
                    break;
                        
            }
        } while (opcion > 0);
        entrada.close();
    }
}
