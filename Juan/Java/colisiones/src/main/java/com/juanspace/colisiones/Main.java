/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.colisiones;

import java.math.BigDecimal;
import java.math.RoundingMode;
import java.sql.Array;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.text.NumberFormat;
import java.util.Formatter;
import java.util.Random;

/**
 *
 * @author Usuario
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    
    
    public static void main(String[] args) {
        
        DecimalFormatSymbols separadoresPersonalizados = new DecimalFormatSymbols();
        separadoresPersonalizados.setDecimalSeparator('.');   
        DecimalFormat df = new DecimalFormat("#.00", separadoresPersonalizados);
        
        double[][] espacio=new double[100][100];
        int circulos;
        circulos=15;
        Circulo[]c=new Circulo[circulos];
        
        for(int i=0;i<circulos;i++){
            double r;
            r=Math.random()*5;
            r=Double.valueOf(df.format(r));
            System.out.println(r);
            c[i]=new Circulo((int) (Math.random()*100),(int)(Math.random()*100),r);
            System.out.println(c[i].x+" "+c[i].y+" "+c[i].radio);
            espacio[c[i].x][c[i].y]=c[i].radio;
        }
    }
}
