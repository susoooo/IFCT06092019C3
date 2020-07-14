/*
 2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. 
En la clase obrero, guarda el nombre del cargo que desempeña. Para la clase médico, 
guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los 
constructores y metodos get y set que creas necesarios.
3-Crea un programa que, utilizando las clases anteriores, 
cree un objeto para almacenar datos sobre una persona que no es asalariada, un asalariado 
que no es médico ni obrero, sobre dos asalariados y sobre un médico. Todos los objetos 
creados deberán contener datos en sus propiedades. Haz que el programa muestre los 
datos de los distintos objetos creados por pantalla.

 */
package com.ivamova.boletin3hejercicio03;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Ejercicio03 {

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
        int pacientes;
        String cargo;
        
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

        Persona p1=new Persona(dni,nombre,apellido1,apellido2,fechanac);
        p1.imprimir();
        
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
        entrada.nextLine();
        System.out.println("Introduzca la retención: ");
        retencion=entrada.nextFloat();
        entrada.nextLine();
        
        Asalariado a1=new Asalariado(dni,nombre,apellido1,apellido2,fechanac,sueldo,retencion);
        a1.imprimir();
        
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
        entrada.nextLine();
        System.out.println("Introduzca la retención: ");
        retencion=entrada.nextFloat();
        entrada.nextLine();
        System.out.println("Introduzca los pacientes a cargo: ");
        pacientes=entrada.nextInt();
        entrada.nextLine();
        
        Medico m1=new Medico(dni,nombre,apellido1,apellido2,fechanac,sueldo,retencion,pacientes);
        m1.imprimir();
        
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
        entrada.nextLine();
        System.out.println("Introduzca la retención: ");
        retencion=entrada.nextFloat();
        entrada.nextLine();
        System.out.println("Introduzca el cargo: ");
        cargo=entrada.nextLine();
        
        Obrero o1=new Obrero(dni,nombre,apellido1,apellido2,fechanac,sueldo,retencion,cargo);
        o1.imprimir();
        
    }
}
