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
public class Punto{
    
    private double x;
    private double y;
    
    //Constructores
    
    public Punto(){}
    
    public Punto(double x, double y){
        this.x = x;
        this.y = y;
    }
    
    //Métodos
    
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public void setX(double x){
        this.x=x;
    }    
    public void setY(double y){
        this.y=y;
    }   
    public void setXY(double x, double y){
        this.x=x;
        this.y=y;
    }
}
