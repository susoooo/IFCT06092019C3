/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_4;

import java.util.List;

/**
 *
 * @author Usuario
 */
public class Greeting_4 {
    
    private String producto;
    private double precio;
    private List<String> lista;
    
    public Greeting_4(String producto, double precio){
    this.producto=producto;
    this.precio=precio;
    }
    
    public Greeting_4(List<String> lista){
    this.lista=lista;
    }
   
    public String getproducto(){
       return producto;
    }
   
    public double getPrecio(){
       return precio;
    }
}
