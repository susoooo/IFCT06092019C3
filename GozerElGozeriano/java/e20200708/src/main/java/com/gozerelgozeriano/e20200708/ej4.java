/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.gozerelgozeriano.e20200708;

import java.util.Scanner;
public class ej4 {
    
    private static int factorial(int number)
    {
        if(number>1)
        {
            number = number * factorial(number-1);
            return(number);
        }
        return(1);
    }
    
    public static void main(String[] args) 
    {
        System.out.println("Número:");
        Scanner in = new Scanner(System.in);
        int numero = in.nextInt();
        in.close();
        System.out.printf("Factorial:%d ",factorial(numero));
    }
}
