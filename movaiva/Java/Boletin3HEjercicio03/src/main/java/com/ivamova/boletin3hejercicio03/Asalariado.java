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
public class Asalariado extends Persona {
    private float sueldo;
    private float retencion;

    public Asalariado(String dni,String nombre,String apellido1,String apellido2,String fechanac,float sueldo, float retencion) {
        super(dni,nombre,apellido1,apellido2,fechanac);
        this.sueldo = sueldo;
        this.retencion = retencion;
    }

    public float getSueldo() {
        return sueldo;
    }

    public void setSueldo(float sueldo) {
        this.sueldo = sueldo;
    }

    public float getRetencion() {
        return retencion;
    }

    public void setRetencion(float retencion) {
        this.retencion = retencion;
    }
    
    public void imprimir()
    {
        super.imprimir();
        System.out.println("Salario neto al mes: "+sueldo);
        System.out.println("Retención: "+retencion);
    }
}
