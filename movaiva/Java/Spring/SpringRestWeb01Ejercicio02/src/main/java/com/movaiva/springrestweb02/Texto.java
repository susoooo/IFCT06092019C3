/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.movaiva.springrestweb02;

/**
 *
 * @author Usuario
 */
public class Texto {
    
    private final int longuitud;
    private final int numCaracteres;
    private final int numLetras;
    private final int numNumeros;

    public Texto(int longuitud, int numCaracteres, int numLetras, int numNumeros) {
        this.longuitud = longuitud;
        this.numCaracteres = numCaracteres;
        this.numLetras = numLetras;
        this.numNumeros = numNumeros;
    }

    public int getLonguitud() {
        return longuitud;
    }

    public int getNumCaracteres() {
        return numCaracteres;
    }

    public int getNumLetras() {
        return numLetras;
    }

    public int getNumNumeros() {
        return numNumeros;
    }
    
    
    
}
