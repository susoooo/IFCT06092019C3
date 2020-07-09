/*
Ejercicio 1: Cálculo de área y perímetro
Escribe un programa que pregunte al usuario los dos lados de un rectángulo y
presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por
altura).
 */
package com.gozerelgozeriano.e20200708;
/**
 *
 * @author Usuario
 */
import java.util.Scanner;
public class ej1 {
    public static void main(String[] args) 
    {
        System.out.println("Lado1: ");
        Scanner in = new Scanner(System.in);
        float lado1 = in.nextFloat();
        System.out.println("Lado2: ");
        float lado2 = in.nextFloat();
        in.close();
        System.out.printf("Perímetro:%f Área:%f ",lado1+lado2,lado1*lado2);
    }
}
