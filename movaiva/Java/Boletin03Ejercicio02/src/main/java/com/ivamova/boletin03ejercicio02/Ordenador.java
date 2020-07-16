/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.boletin03ejercicio02;

/**
 *
 * @author Usuario
 */
public class Ordenador {
    
    private String nombre;

    public Ordenador(String nombre) {
        this.nombre = nombre;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    
    public void encender()
    {
        System.out.println(nombre+" encendido");        
    }
    
    public void apagar()
    {
        System.out.println(nombre+" apagado");        
    }
    
    public void enchufar()
    {
        System.out.println(nombre+" enchufado");        
    }
    
    public void desenchufar()
    {
        System.out.println(nombre+" desenchufado");        
    }
    
    public void cargar()
    {
        System.out.println(nombre+" cargando");        
    }
    
    
}
