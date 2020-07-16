/*
4-Crea una clase que represente a un alumno. Cada alumno se identifica por su DNI.
Se desea almacenar información de su nombre, sus apellidos, y sus notas finales en
las asignaturas en las que se ha matriculado. De dichas asignaturas se dese
almacenar tambien el nombre. Un alumno como mucho puede haberse matriculado de 30
asignaturas. Crea un programa en el que se pueda meter los datos de un alumno , y
que calcule la nota media del alumno, utilizando objetos. Construye la clase que
representa al alumno como hija de la clase definida en el apartado 5.
 */
package com.gozerelgozeriano._java.aobjetos;
public class ej4 {
    public static void main(String[] args){
        alumno almn = new alumno("12478965J","Jason","Vorges");
        almn.addnota("Splasher art", 9.10f);
        almn.addnota("Slow persecution", 7.50f);
        almn.listnotas();
        System.out.println(almn.getnotamedia());
    }
}