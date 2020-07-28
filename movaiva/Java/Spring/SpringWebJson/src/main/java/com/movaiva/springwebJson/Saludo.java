/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.movaiva.springwebJson;

/**
 *
 * @author Usuario
 */
public class Saludo {
    private final long id;
    private final String contenido;

    public Saludo(long id, String contenido) {
        this.id = id;
        this.contenido = contenido;
    }

    public long getId() {
        return id;
    }

    public String getContenido() {
        return contenido;
    }
    
    
}
