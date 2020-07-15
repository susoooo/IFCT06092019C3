/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.formas;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Rectangulo extends Forma {
    
    private double lado_menor;
    private double lado_mayor;
    
    //Constructores
    
    public Rectangulo(){}
    
    public Rectangulo(double lme, double lma){
        this.lado_menor = lme;
        this.lado_mayor = lma;
    }
    
    public Rectangulo(String color, double x, double y, String nombre, double lme, double lma){
        super(color, x, y, nombre);
        this.lado_menor = lme;
        this.lado_mayor = lma;
    }
    
    //Métodos:
    
    public double getLado_Menor(){
        return lado_menor;
    }
    
    public double getLado_Mayor(){
        return lado_mayor;
    }
    
    public void setRectangulo(double nlme, double nlma){
        this.lado_menor=nlme;
        this.lado_mayor=nlma;
    }
       
    @Override
    public void Imprimir(){
       System.out.println("Este es el rectángulo ");
       super.Imprimir();
       System.out.println("Lados "+getLado_Mayor()+" "+getLado_Menor());
       
    }
}
