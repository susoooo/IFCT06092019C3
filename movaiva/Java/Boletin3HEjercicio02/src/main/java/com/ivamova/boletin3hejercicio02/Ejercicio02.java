/*
 2-A partir de la clase persona crea una clase asalariado que guarde información 
sobre el sueldo que cobra la persona neto al mes y la retención que se le aplica 
en la nómina. Crea al menos un constructor y un los correspondientes métodos de 
get y set.
 */
package com.ivamova.boletin3hejercicio02;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Ejercicio02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Scanner entrada=new Scanner(System.in);
        String dni;
        String nombre;
        String apellido1;
        String apellido2;
        String fechanac;
        float sueldo;
        float retencion;
        
        System.out.println("Introduzca el dni: ");
        dni=entrada.nextLine();
        System.out.println("Introduzca el nombre: ");
        nombre=entrada.nextLine();
        System.out.println("Intorduzca el primer apellido: ");
        apellido1=entrada.nextLine();
        System.out.println("Introduzca el segundo apellido: ");
        apellido2=entrada.nextLine();
        System.out.println("Introduzca la fecha de nacimiento: ");
        fechanac=entrada.nextLine();
        System.out.println("Introduzca el sueldo neto al mes: ");
        sueldo=entrada.nextFloat();
        System.out.println("Introduzca la retención: ");
        retencion=entrada.nextFloat();
        
        Asalariado a1=new Asalariado(dni,nombre,apellido1,apellido2,fechanac,sueldo,retencion);
        a1.imprimir();
        
    }
}
