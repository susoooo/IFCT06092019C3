/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_3;

/**
 *
 * @author Usuario
 */
public class Greeting_3 {
    private final int position;
    private final int numero;

    
    public Greeting_3(int position, int numero){
        this.position=position;
        this.numero=numero;
    }
    
    public int getPosition() {
        return position;
    }
     
    public int getInt(){
        return numero;
    } 
}
