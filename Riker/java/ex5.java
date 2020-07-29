/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* Realizar un programa que pida tres números y diga cuál es el mayor, cuál es el segundo mayor, y cuál es el menor */

package gal.pedro.course.various;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ex5 {
     public static void main(String[] s){
        Scanner in = new Scanner(System.in);
        int a, b, c;
        int first, second, last;
        
        first=second=last=0;
        
        System.out.print("Number a? ");
        a = in.nextInt();
        System.out.print("Number b? ");
        b = in.nextInt();
        System.out.print("Number c? ");
        c = in.nextInt();
        
        if(a> b && a > c){
            first = a;
            if(b> c) {
                second = b;
                last = c;
            }
        } else if (b >a && b> c) {
            first = b;
            if(a > c) {
                second = a; 
                last = c;
            } else {
                second = c;
                last = a;
            }
        } else {
            first = c;
            if(a > b) {
                second = a;
                last = b;
            } else {
                second = b;
                last = a;
            }                        
        }
        
        System.out.printf("first: %d, second: %d, last: %d", first, second, last);
     }
}
