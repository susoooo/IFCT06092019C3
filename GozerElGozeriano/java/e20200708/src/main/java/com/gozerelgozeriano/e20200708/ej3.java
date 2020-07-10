/*
Ejercicio 3
Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while).
 */
package com.gozerelgozeriano.e20200708;

import java.util.Scanner;
public class ej3 {
    public static void main(String[] args) 
    {
        System.out.println("Número1: ");
        Scanner in = new Scanner(System.in);
        int num1 = in.nextInt();
        System.out.println("Número2: ");
        int num2 = in.nextInt();
        in.close();
        int n;
        for(n=num1;n<=num2;n++)
        {
            System.out.printf("%d ",n);
        }
        n=num1;
        while(n<=num2)
        {
            System.out.printf("%d ",n);
            n++;
        }
        n=num1;
        do{
            System.out.printf("%d ",n);
            n++;
        }while(n<=num2);
    }
}
