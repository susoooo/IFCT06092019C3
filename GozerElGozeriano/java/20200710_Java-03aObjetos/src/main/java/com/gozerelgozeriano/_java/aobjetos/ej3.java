/*
3-Crea una clase que represente a un rectangulo mediante su base y su altura.
Implementa métodos para cambiar su base y su altura, y otros que calcule su area y su perímetro. 
área= base * altura y perímetro=2*base + 2*altura).
 */
package com.gozerelgozeriano._java.aobjetos;
public class ej3 {
    public static void main(String[] args){
        rectangulo rect = new rectangulo(23.1f,12.4f);
        System.out.println("Area: " + rect.area());
        System.out.println("Perimetro: " + rect.perimetro());
    }
}