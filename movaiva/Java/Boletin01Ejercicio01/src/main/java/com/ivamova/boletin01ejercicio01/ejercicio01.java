/*
Ejercicio 1: Cálculo de área y perímetro
Escribe un programa que pregunte al usuario los dos lados de un rectángulo y
presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por
altura).
 */
package com.ivamova.boletin01ejercicio01;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        float lado;
        float altura;
        float area;
        float perimetro;
        lado=0;
        altura=0;
        area=0;
        perimetro=0;
        System.out.println("---CALCULO DEL AREA Y EL PERIMETRO DE UN RECTANGULO---");
        Scanner entrada=new Scanner(System.in);
        System.out.println("Introduzca el primer lado de rectángulo: ");
        lado=entrada.nextFloat();
        System.out.println("Introduzca el segundo lado de rectángulo: ");
        altura=entrada.nextFloat();
        entrada.close();
        
        area=lado*altura;
        perimetro=lado+altura;
        
        System.out.println("Perímetro: "+perimetro);
        System.out.println("Area: "+area);
        
        
        
        
    }
}
