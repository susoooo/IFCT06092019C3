/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.colisiones;

/**
 *
 * @author Usuario
 */

public class Circulo {
    protected int x;
    protected int y;
    protected double radio;
    
    public Circulo(int x, int y, double radio){
        this.x=x;
        this.y=y;
        this.radio=radio;
    }
    
    public double area(){
        return Math.PI*radio*radio;
    }
}
