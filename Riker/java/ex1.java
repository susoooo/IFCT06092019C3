/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/* Ejercicio 1: Cálculo de área y perímetro
Escribe un programa que pregunte al usuario los dos lados de un rectángulo y
presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por
altura). */
package gal.pedro.course.various;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ex1 {
    public static void main(String[] s) {
        Scanner in = new Scanner(System.in);
        int s_a;
        int s_b;
        
        System.out.println("Rectangle Side A? ");
        s_a = in.nextInt();
        System.out.println("Rectangle Side B? ");
        s_b = in.nextInt();
                
        System.out.printf("Rectangle Area: %d", s_a*s_b);
        
        in.close();
    }
     
}
