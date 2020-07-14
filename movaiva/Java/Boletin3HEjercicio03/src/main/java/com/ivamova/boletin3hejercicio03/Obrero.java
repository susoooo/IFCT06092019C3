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
public class Obrero extends Asalariado {
    private String cargo;

    public Obrero(String dni, String nombre, String apellido1, String apellido2, String fechanac, float sueldo, float retencion,String cargo) {
        super(dni, nombre, apellido1, apellido2, fechanac, sueldo, retencion);
        this.cargo = cargo;
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }
    
    public void imprimir()
    {
        super.imprimir();
        System.out.println("Cargo que ocupa: "+cargo);
    }
}
