/*
Ejercicio 4
Realizar un programa que pida un número y calcule su factorial.
 */
package com.ivamova.boletin01ejercicio04;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio04 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        int numero;
        int factorial;
        numero = 0;
        factorial = 1;
        System.out.println("---CÁLCULO DEL FACTORIAL---");
        Scanner entrada = new Scanner(System.in);
        System.out.println("Introduzca el número: ");
        numero = entrada.nextInt();
        entrada.close();
        
         if(numero>0) {
            for (int contador = numero; contador >= 1; contador--) {
                factorial*=contador;
            }
        }
        System.out.println("El factorial de "+numero+" es "+factorial);
    }
}
