/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gal.pedro.course.various;

import java.util.Scanner;

/* Ejercicio 3
Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while). */

/**
 *
 * @author Usuario
 */
public class ex3 {
    public static void main(String[] s) {
        Scanner in = new Scanner(System.in);
        int a;
        int b;
        int counter;
        
        System.out.print("Start number? ");
        a = in.nextInt();
        System.out.print("End number?");
        b = in.nextInt();
        
        for (int i = a; i <= b; i++) {
            System.out.printf("%d ", i);
        }
        System.out.println("--");
        
        counter = a;
        while(counter <=b){
            System.out.printf("%d", counter);
            counter++;
        }
        System.out.println("--");
        
        counter = a;
        do {
            System.out.printf("%d", counter);
            counter++;
        } while(counter <=b);
        
        in.close();

    }
}
