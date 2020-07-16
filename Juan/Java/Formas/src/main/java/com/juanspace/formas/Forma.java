/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.formas;

/**
 *
 * @author Usuario
 */
public class Forma {
    
    private String color;
    private Punto punto;
    private String nombre;
    
    // Constructor
    public Forma(){
    }
   
    public Forma(String c, double x, double y, String n){
        this.color=c;
        this.punto.setXY(x,y);
        this.nombre=n;
    }

    // Métodos get y set
    public String getColor(){
        return color;
    }
    
    public Punto getPunto(){
        return punto;
    }
    
    public String getNombre(){
        return nombre;
    }
    
    public void setColor(String color){
        this.color=color;
    }
    public void setPunto(double x, double y){
        this.punto.setXY(x,y);
    }
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    
    //Métodos
    
    public void Imprimir(){
        System.out.println("Datos de la forma "+nombre);
        System.out.println(color);
        System.out.println(punto.getX()+""+punto.getY());

    }
    
    public void cambiarColor(String nuevo_color){
        this.color=nuevo_color;
    }
    
    public void moverForma(double x, double y){
        this.punto.setXY(x,y);
    }
}
