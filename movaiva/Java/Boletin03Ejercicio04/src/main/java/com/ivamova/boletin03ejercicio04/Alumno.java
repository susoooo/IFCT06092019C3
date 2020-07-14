/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.boletin03ejercicio04;

/**
 *
 * @author Usuario
 */
public class Alumno {
    
    private String dni;
    private String nombre;
    private String apellidos;
    private Asignatura asignaturas[];

    public Alumno(String dni, String nombre, String apellidos, Asignatura[] asignaturas) {
        this.dni = dni;
        this.nombre = nombre;
        this.apellidos = apellidos;
        this.asignaturas = asignaturas;
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

    public Asignatura[] getAsignaturas() {
        return asignaturas;
    }

    public void setAsignaturas(Asignatura[] asignaturas) {
        this.asignaturas = asignaturas;
    }
    
    public float notaMedia()
    {
        float suma=0;
        for(int contador=0;contador<asignaturas.length;contador++){
            suma+=asignaturas[contador].getNota();
        }
        return suma/asignaturas.length;
    }
    
    public void imprimir()
    {
        System.out.println("DNI: "+dni);
        System.out.println("Nombre: "+nombre);
        System.out.println("Apellidos: "+apellidos);
        System.out.println("---ASIGNATURA----");
        for (int contador = 0; contador < asignaturas.length; contador++) {
            System.out.println(asignaturas[contador].getNombre()+": "+asignaturas[contador].getNota());            
        }
        System.out.println("Nota meida: "+notaMedia());
    }
    
}
