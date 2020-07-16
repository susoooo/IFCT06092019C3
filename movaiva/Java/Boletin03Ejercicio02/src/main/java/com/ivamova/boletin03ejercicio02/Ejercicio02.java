/*
 2-Crea una clase que represente un ordenador.
Deberá incluir al menos métodos para enchufarlo, desenchufarlo, encenderlo, y apagarlo. Crea un programa que enchufe un portatil, lo encienda, lo cargue, lo apague y lo desenchufe.

 */
package com.ivamova.boletin03ejercicio02;

/**
 *
 * @author Usuario
 */
public class Ejercicio02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Ordenador o1=new Ordenador("Portatil");
        o1.enchufar();
        o1.encender();
        o1.cargar();
        o1.apagar();
        o1.desenchufar();
    }
}
