/*
 1-Crea una clase que represente un punto en el espacio.
 Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.
 */
package com.ivamova.boletin03ejercicio01;

import java.util.Random;

/**
 *
 * @author Usuario
 */
public class Ejercicio01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Random r=new Random();
        int Maximo=10;
        Punto p1=new Punto(r.nextDouble()*Maximo,r.nextDouble()*Maximo);
        Punto p2=new Punto(r.nextDouble()*Maximo,r.nextDouble()*Maximo);
        Punto p3=new Punto(r.nextDouble()*Maximo,r.nextDouble()*Maximo);
        System.out.println("El punto uno esta en las coordenadas: "+p1.toString());
        System.out.println("El punto dos esta en las coordenadas: "+p2.toString());
        System.out.println("El punto tres esta en las coordenadas: "+p3.toString());
    }
}
