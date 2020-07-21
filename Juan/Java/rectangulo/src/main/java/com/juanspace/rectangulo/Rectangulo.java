/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.rectangulo;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Rectangulo {
    private double base;
    private double altura;
    
    public Rectangulo(){}
    
    public double getBase(){
        return base;
    }
    public double getAltura(){
        return altura;
    }
    public Rectangulo(double b, double a){
        this.base = b;
        this.altura = a;
    }
    
    public void modificarRectangulo(double nb, double na){
        this.base=nb;
        this.altura=na;
    }
}
