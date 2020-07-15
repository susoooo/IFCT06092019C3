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
public class Elipse extends Forma {
    
    private float radioMenor;
    private float radioMayor;

    public Elipse(String color, int ejeX, int ejeY, String nombre,float radioMenor, float radioMayor) {
        super(color, ejeX, ejeY, nombre);
        this.radioMenor = radioMenor;
        this.radioMayor = radioMayor;
    }

    public float getRadioMenor() {
        return radioMenor;
    }

    public void setRadioMenor(float radioMenor) {
        this.radioMenor = radioMenor;
    }

    public float getRadioMayor() {
        return radioMayor;
    }

    public void setRadioMayor(float radioMayor) {
        this.radioMayor = radioMayor;
    }
    
    public double calcularArea()
    {
        return Math.PI*(radioMayor*radioMenor);
    }
    
    public void imprimir()
    {
        super.imprimir();
        System.out.println("Área: "+calcularArea());
    }
    
}
