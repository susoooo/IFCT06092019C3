/*
 1-Crea una clase que represente a una persona. 
Al menos debe contener información sobre su nombre, apellido primero y segundo, 
fecha de nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores 
que permitan la creación de personas sin saber sus datos, conociendo su DNI, su 
nombre y apellidos, ambos, y todos los datos incluidos en la clase.
 */
package com.ivamova.boletin3hejercicio01;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Ejercicio01 {

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
        
        Persona p1=new Persona();
        System.out.println("Introduzca el dni: ");
        dni=entrada.nextLine();
        Persona p2=new Persona(dni);
        System.out.println("Introduzca el nombre: ");
        nombre=entrada.nextLine();
        System.out.println("Intorduzca el primer apellido: ");
        apellido1=entrada.nextLine();
        System.out.println("Introduzca el segundo apellido: ");
        apellido2=entrada.nextLine();
        Persona p3=new Persona(nombre,apellido1,apellido2);
        p1.imprimir();
        p2.imprimir();
        p3.imprimir();
    }
}
