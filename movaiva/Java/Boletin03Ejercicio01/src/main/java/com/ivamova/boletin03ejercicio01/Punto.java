/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.boletin03ejercicio01;

/**
 *
 * @author Usuario
 */
public class Punto {
    
    private double EjeX;
    private double EjeY;

    public Punto(double EjeX, double EjeY) {
        this.EjeX = EjeX;
        this.EjeY = EjeY;
    }

    public double getEjeX() {
        return EjeX;
    }

    public double getEjeY() {
        return EjeY;
    }

    public void setEjeX(double EjeX) {
        this.EjeX = EjeX;
    }

    public void setEjeY(double EjeY) {
        this.EjeY = EjeY;
    }
    
    public String toString()
    {
        return "("+EjeX+","+EjeY+")";
    }
    
}
