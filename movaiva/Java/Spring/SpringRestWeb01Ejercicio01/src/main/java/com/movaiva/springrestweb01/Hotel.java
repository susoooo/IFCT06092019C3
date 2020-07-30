/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.movaiva.springrestweb01;

/**
 *
 * @author Usuario
 */
public class Hotel {
    
    private final String name;
    private final Punto location;

    public Hotel(String name, Punto location) {
        this.name = name;
        this.location = location;
    }

    public String getName() {
        return name;
    }

    public Punto getLocation() {
        return location;
    }

    
        
}
