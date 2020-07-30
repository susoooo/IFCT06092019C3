/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.perimetr;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Usuario
 */
public class rectangulo {
     public static void main(String[] args)
{
         try {
             int lado1;
             int lado2;
             int perimetro;
             int area;          
             
             System.out.println("Los lados verticales:");
             BufferedReader in =
                     new BufferedReader(new InputStreamReader(System.in));             
             lado1 = Integer.parseInt(in.readLine());
             lado2 = Integer.parseInt(in.readLine());
             
             perimetro=(lado1+lado1)+(lado2+lado2);
             area=lado1*lado2;
             
             System.out.printf("El perimetro es:");
             
             System.out.printf("%d", perimetro);
             
             System.out.printf("\n El area es:");
             
             System.out.printf("%d", area);
         } catch (IOException ex) {
             System.out.println("Ha habido un error");
         }
 
}
    
}
