/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gal.pedro.course.various;

import java.util.Scanner;

/* Realizar un programa que pida un número y calcule su factorial. */
/**
 *
 * @author Usuario
 */
public class ex4 {
    public static void main(String[] s){
        Scanner in = new Scanner(System.in);
        int n;
        int factorial;
        
        System.out.print("Number to factorice? ");
        n = in.nextInt();
        
        factorial = 1;
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        
        System.out.printf("Factorial: %d", factorial);
        
        in.close();
    }
}
