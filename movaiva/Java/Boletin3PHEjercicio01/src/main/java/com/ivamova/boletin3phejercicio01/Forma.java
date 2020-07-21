/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.boletin3phejercicio01;

/**
 *
 * @author Usuario
 */
public class Forma {
    private String color;
    private Punto centro;
    private String nombre;

    public Forma(String color, int ejeX, int ejeY, String nombre) {
        this.color = color;
        this.centro=new Punto(ejeX,ejeY);
        this.nombre = nombre;
    }

    public String obtenerColor() {
        return color;
    }

    public void cambiarColor(String color) {
        this.color = color;
    }

    public void moverForma(int ejeX,int ejeY) {
        this.centro = new Punto(ejeX,ejeY);
    }
    
    public void imprimir()
    {
        System.out.println("Nombre: "+nombre);
        System.out.println("Color: "+color);
        System.out.println("Centro: "+centro.imprimir());
    }
}

