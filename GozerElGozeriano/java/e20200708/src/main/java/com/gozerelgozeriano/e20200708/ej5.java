/*
Ejercicio 5: Condición if 4. Realizar un programa que pida tres números y diga
cuál es el mayor, cuál es el segundo mayor, y cuál es el menor
 */
package com.gozerelgozeriano.e20200708;

import java.util.Scanner;
public class ej5 {
    
    private static void printorder(int mayor,int medio,int menor)
    {
        System.out.printf("%d %d %d",mayor,medio,menor);
    }
    
    public static void main(String[] args) 
    {
        System.out.println("Número1: ");
        Scanner in = new Scanner(System.in);
        int num1 = in.nextInt();
        System.out.println("Número2: ");
        int num2 = in.nextInt();
        System.out.println("Número3: ");
        int num3 = in.nextInt();
        in.close();
        
        if(num1>num2)
        {
            if(num1>num3)
            {
                if(num2>num3)
                {
                    printorder(num1,num2,num3);
                }
                else
                {
                    printorder(num1,num3,num2);
                }
            }
            else
            {
                printorder(num3,num1,num2);
            }
        }
        else
        {
            if(num2>num3)
            {
                if(num3>num1)
                {
                    printorder(num2,num3,num1);
                }
                else
                {
                    printorder(num2,num1,num3);
                }
            }
            else
            {
                printorder(num3,num2,num1);
            }
        }
    }
}
