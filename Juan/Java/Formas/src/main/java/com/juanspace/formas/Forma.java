/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.formas;

import java.awt.Color;

/**
 *
 * @author Usuario
 */
public class Forma {
  
    private Color color;
    private Punto punto;
    private String nombre;
    
    // Constructor
    public Forma(){
    }
    
    public Forma(Color color, double x, double y, String nombre){
        punto=new Punto();
        this.color=color;
        this.punto.setXY(x,y);
        this.nombre=nombre;
    }

    // Métodos get y set
    public Color getColor(){
        return color;
    }
    
    public Punto getPunto(){
        return punto;
    }
    
    public String getNombre(){
        return nombre;
    }
    
    public void setColor(Color color){
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
        System.out.println(punto.getX()+" "+punto.getY());
    }
}
