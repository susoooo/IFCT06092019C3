/*
 3-Crea una clase que represente a un rectangulo mediante su base y su altura. 
Implementa métodos para cambiar su base y su altura, y otros que calcule su area y su perímetro. 
área= base * altura y perímetro=2*base + 2*altura).
 */
package com.ivamova.boletin03ejercicio03;

/**
 *
 * @author Usuario
 */
public class Ejercicio03 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Rectangulo r1=new Rectangulo(2.5,3.5);
        System.out.println("El perímetro del rectángulo es "+r1.perimetro());
        System.out.println("El área del rectángulo es "+r1.area());
        r1.setAltura(7.0);
        r1.setBase(5.0);
        System.out.println("El perímetro del nuevo rectángulo es "+r1.perimetro());
        System.out.println("El área del nuevo rectángulo es "+r1.area());
    }
}
