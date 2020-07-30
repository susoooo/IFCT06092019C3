/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.guiprogramadoc;

/**
 *
 * @author Usuario
 */
public class Persona {
    private String dni;
    private String nombre;
    private String apellidos;
    private String hora_entrada;
    private String hora_salida;
            

    public Persona(String dni, String nombre, String apellidos) {
        this.dni = dni;
        this.nombre = nombre;
        this.apellidos = apellidos;
    }

    public String getDni() {
        return dni;
    }

    public void setDni(String dni) {
        this.dni = dni;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellidos() {
        return apellidos;
    }

    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    public String getHora_entrada() {
        return hora_entrada;
    }

    public void setHora_entrada(String hora_entrada) {
        this.hora_entrada = hora_entrada;
    }

    public String getHora_salida() {
        return hora_salida;
    }

    public void setHora_salida(String hora_salida) {
        this.hora_salida = hora_salida;
    }
    
    public String imprimir()
    {
        String texto="";
        texto+="DNI: "+dni+"\n";
        texto+="Nombre: "+nombre+"\n";
        texto+="Apellidos: "+apellidos+"\n";
        texto+="Hora entrada: "+hora_entrada+"\n";
        texto+="Hora salida: "+hora_salida+"\n" ;
        return texto;
    }
    
}
