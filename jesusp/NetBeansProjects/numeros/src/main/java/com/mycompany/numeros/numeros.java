/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.numeros;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 * @author Usuario
 */
public class numeros {
    public static void main(String[] args)
    {
         try {
             int numero1;
             int numero2;
             int i;            
                       
             
             System.out.println("Dame el primer numero:");
             BufferedReader in =
                     new BufferedReader(new InputStreamReader(System.in));             
             numero1 = Integer.parseInt(in.readLine());
              System.out.println("Dame el segundo numero:");
             numero2 = Integer.parseInt(in.readLine());
             for (i = numero1+1; i < numero2; i++) {
              System.out.println(i);
             }
             
             i = numero1+1;
                while (i < numero2)
                {
                System.out.println(i);
                i++;
                }
              i = numero1+1;
            do{
                System.out.println(i);
                i++;
               }while (i < numero2);             
             
            
         } catch (IOException ex) {
             System.out.println("Ha habido un error");
         }
    }
}
