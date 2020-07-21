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

public class alumno {
    final int MAXMATRIC = 30;
    final private String DNI;
    final private String nombre;
    final private String apellido;
    asignatura[] notas = new asignatura[MAXMATRIC];
    private int notaspointer;
    
    public alumno(String DNI, String nombre, String apellido){
        this.DNI=DNI;
        this.nombre = nombre;
        this.apellido = apellido;
        this.notaspointer=0;
    }
    
    public void addnota(String asignatura, float nota){
        asignatura asgn = new asignatura(asignatura,nota);
        if(notaspointer<MAXMATRIC){
            notas[notaspointer] = asgn;
            notaspointer++;
        }else{
            System.out.println("Demasiadas asignaturas matriculadas.");
        }
    }
    
    public float getnotamedia(){
        int n;
        float suma=0.0f;
        for(n=0;n<notaspointer;n++){
            suma+=notas[n].getnota();
        }
        return(suma/(notaspointer));
    }
    
    public void listnotas(){
        int n;
        for(n=0;n<notaspointer;n++){
            System.out.println(notas[n].getnombre() + " " + notas[n].getnota());
        }
    }
    
}
