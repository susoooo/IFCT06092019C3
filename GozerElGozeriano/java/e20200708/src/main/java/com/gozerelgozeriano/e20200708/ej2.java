/*
Ejercicio 2: Cambio de dólares a euros.
Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros.
 */
package com.gozerelgozeriano.e20200708;

import java.util.Scanner;
public class ej2 {
    public static void main(String[] args) 
    {
        System.out.println("Valor en dólares:");
        Scanner in = new Scanner(System.in);
        float dolares = in.nextFloat();
        in.close();
        System.out.printf("Euros:%f ",dolares*1.33250);
    }
}
