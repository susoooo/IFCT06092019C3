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
public class Rectangulo extends Forma {
    private float ladoMayor;
    private float ladoMenor;

    public Rectangulo(String color, int ejeX, int ejeY, String nombre, float ladoMayor, float ladoMenor) {
        super(color, ejeX, ejeY, nombre);
        this.ladoMayor = ladoMayor;
        this.ladoMenor = ladoMenor;
    }

    public float getLadoMayor() {
        return ladoMayor;
    }

    public void setLadoMayor(float ladoMayor) {
        this.ladoMayor = ladoMayor;
    }

    public float getLadoMenor() {
        return ladoMenor;
    }

    public void setLadoMenor(float ladoMenor) {
        this.ladoMenor = ladoMenor;
    }
    
    public float calcularArea()
    {
        return ladoMenor*ladoMayor;
    }
    
    public float calcularPerimetro()
    {
        return 2*ladoMayor+2*ladoMenor;
    }
    
    public void cambiarTamanio(float escala)
    {
        ladoMayor*=escala;
        ladoMenor*=escala;
    }
            
    
    public void imprimir()
    {
        super.imprimir();
        System.out.println("Área: "+calcularArea());
        System.out.println("Perímetro: "+calcularPerimetro());
    }
    
}
