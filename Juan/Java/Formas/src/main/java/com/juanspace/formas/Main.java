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
public class Main {
    public static void main(String[] args){
        //Forma f= new Forma();
        //f.Imprimir();
        Color colorRosa=new Color(255, 175,175);
        
        Forma f2= new Forma(Color.BLACK,10,10,"Cuadrado");
        f2.Imprimir();
        f2.setNombre("Triángulo");
        f2.getNombre();
        f2.getPunto();
        
        Rectangulo rec= new Rectangulo(10,10);
        System.out.println(rec.calcularArea());
        System.out.println(rec.calcularPerimetro());
        rec.cambiarTamanho(2);
        rec.cambiarTamanho(0.5);
        
    }
}
