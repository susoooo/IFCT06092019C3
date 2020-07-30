/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.boletin3hejercicio03;

/**
 *
 * @author Usuario
 */
public class Medico extends Asalariado {
    private int pacientes;

    public Medico(String dni, String nombre, String apellido1, String apellido2, String fechanac, float sueldo, float retencion,int pacientes) {
        super(dni, nombre, apellido1, apellido2, fechanac, sueldo, retencion);
        this.pacientes = pacientes;
    }

    public int getPacientes() {
        return pacientes;
    }
    
    public void imprimir()
    {
        super.imprimir();
        System.out.println("Pacientes: "+pacientes);
    }
}
