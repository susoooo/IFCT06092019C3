/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.espacio;

/**
 *
 * @author Usuario
 */
public class Punto{
    
    private double x;
    private double y;
    
    public Punto(){}
    
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public Punto(double x, double y){
        this.x = x;
        this.y = y;
    }
}
