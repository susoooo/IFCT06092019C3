package com.gozerelgozeriano._java.aobjetos;

/*
1-Crea una clase que represente un punto en el espacio.
Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.
 */
import java.security.SecureRandom;
public class ej1 {
    
    public static void main(String[] args){
        SecureRandom sr = new SecureRandom();
        sr.nextBytes(new byte[1]);
        punto punto1 = new punto(sr.nextInt(10)+1,sr.nextInt(10)+1);
        punto punto2 = new punto(sr.nextInt(10)+1,sr.nextInt(10)+1);
        punto punto3 = new punto(sr.nextInt(10)+1,sr.nextInt(10)+1);
        
        System.out.println("Punto 1 = " + punto1.X() + " " + punto1.Y());
        System.out.println("Punto 2 = " + punto2.X() + " " + punto2.Y());
        System.out.println("Punto 3 = " + punto3.X() + " " + punto3.Y());
        
    }
}
