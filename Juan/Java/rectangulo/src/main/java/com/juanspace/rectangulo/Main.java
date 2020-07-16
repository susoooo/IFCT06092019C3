/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.rectangulo;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Main {
     public static void main(String[] args){
    
         Rectangulo r= new Rectangulo(5,8);
         System.out.println("Has creado un rectángulo con base "+ r.getBase());
         // System.out.printf("%0.2f\n", r.getBase());
         System.out.println(" y con altura "+r.getAltura());
         Scanner scn= new Scanner(System.in);
         double nb;
         double na;
                System.out.println("Modifica la base ");
                nb=scn.nextDouble();
                System.out.println("Modifica la altura ");
                na= scn.nextDouble();
         r.modificarRectangulo(nb,na);
         System.out.println("El nuevo rectángulo tiene "+r.getBase()+" de base, y "+r.getAltura()+" de altura.");
    }
}
