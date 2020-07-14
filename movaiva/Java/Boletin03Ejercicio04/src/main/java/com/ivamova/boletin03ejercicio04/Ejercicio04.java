/*
 4-Crea una clase que represente a un alumno. Cada alumno se identifica por su DNI. 
Se desea almacenar información de su nombre, sus apellidos, y sus notas finales 
en las asignaturas en las que se ha matriculado. De dichas asignaturas se dese almacenar 
tambien el nombre. Un alumno como mucho puede haberse matriculado de 30 asignaturas. 
Crea un programa en el que se pueda meter los datos de un alumno , y que calcule 
la nota media del alumno, utilizando objetos. Construye la clase que representa 
al alumno como hija de la clase definida en el apartado 5.
 */
package com.ivamova.boletin03ejercicio04;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Ejercicio04 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Scanner entrada=new Scanner(System.in);
        String dni;
        String nombre;
        String apellidos;
        Asignatura asignaturas[]=new Asignatura[5];
        String nombreAsig;
        float notaAsig;
        
        System.out.println("Introduzca el dni del alumno: ");
        dni=entrada.nextLine();
        System.out.println("Introduzca el nombre del alumno: ");
        nombre=entrada.nextLine();
        System.out.println("Introduzca los apellidos del alumno: ");
        apellidos=entrada.nextLine();
        for(int contador=0; contador<asignaturas.length;contador++)
        {
            System.out.println("Introduzca el nombre de la asignatura: ");
            nombreAsig=entrada.nextLine();
            System.out.println("Introduzca la nota de la asignatura: ");
            notaAsig=entrada.nextFloat();
            entrada.nextLine();
            asignaturas[contador]=new Asignatura(nombreAsig,notaAsig);
        }
        
        Alumno a1=new Alumno(dni,nombre,apellidos,asignaturas);
        a1.imprimir();
    }
}
