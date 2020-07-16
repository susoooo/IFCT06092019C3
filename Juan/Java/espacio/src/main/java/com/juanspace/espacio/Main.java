/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.espacio;

import java.util.Random;

/**
 *
 * @author Usuario
 */
public class Main {
    
    public static void main(String[] args){
    
    Punto punto1=new Punto(10*Math.random(), 10*Math.random());
    Punto punto2=new Punto(10*Math.random(), 10*Math.random());
    Punto punto3=new Punto(10*Math.random(), 10*Math.random());
    System.out.printf(punto1.getX()+" "+punto1.getY()+"\n");
    System.out.printf(punto2.getX()+" "+punto2.getY()+"\n");
    System.out.printf(punto3.getX()+" "+punto3.getY());
    }
}
