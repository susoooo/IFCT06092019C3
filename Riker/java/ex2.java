/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* Ejercicio 2: Cambio de dólares a euros.
Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros. */



package gal.pedro.course.various;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ex2 {
    public static void main(String[] s){
        Scanner in = new Scanner(System.in);
        double dollars;
        double e_v = 1.33250;
        
        System.out.print("How many dollars to change in Euros? ");
        dollars = in.nextDouble();
        
        System.out.printf("%f", dollars * e_v);
        
        in.close();
    }
}
