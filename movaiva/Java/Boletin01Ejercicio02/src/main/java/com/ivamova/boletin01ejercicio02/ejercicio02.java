/*
Ejercicio 2: Cambio de dólares a euros.
Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros.
 */
package com.ivamova.boletin01ejercicio02;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        double dolares;
        double euros;
        double cambio;
        dolares=0;
        euros=0;
        cambio=1.33250;
        System.out.println("---CAMBIO DE DOLARES A EUROS---");
        Scanner entrada=new Scanner(System.in);
        System.out.println("Introduzca la cantidad de dolares: ");
        dolares=entrada.nextDouble();
        entrada.close();
        euros=dolares/cambio;
        System.out.println("Euros: "+euros);
        
    }
}
