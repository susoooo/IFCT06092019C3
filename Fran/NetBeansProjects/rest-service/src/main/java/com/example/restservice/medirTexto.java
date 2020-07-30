/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.restservice;

public class medirTexto 
{
  
    private final int longitud;
    private final int letras;
    private final int numeros;


    public medirTexto(int longitud, int letras, int numeros) 
    {
        this.longitud = longitud;
        this.letras = letras;
        this.numeros = numeros;

    }

    public int getLongitud() 
    {
        return longitud;
    }

    public int getLetras() 
    {
        return letras;
    }
    
    public int getNumeros() 
    {
        return numeros;
    }

}  

