/*
3-Crea una clase que represente a un rectangulo mediante su base y su altura.
Implementa métodos para cambiar su base y su altura, y otros que calcule su area y su perímetro. 
área= base * altura y perímetro=2*base + 2*altura).
 */
package com.gozerelgozeriano._java.aobjetos;

public class rectangulo {
    private float base;
    private float altura;
    
    public rectangulo(float base, float altura){
        this.base = base;
        this.altura = altura;
    }
    
    public void setbase(float base){
        this.base = base;
    }
    
    public void setaltura(float altura){
        this.altura = altura;
    }
    
    public float area(){
        return(base * altura);
    }
    
    public float perimetro(){
        return(2*base + 2*altura);
    }
}
