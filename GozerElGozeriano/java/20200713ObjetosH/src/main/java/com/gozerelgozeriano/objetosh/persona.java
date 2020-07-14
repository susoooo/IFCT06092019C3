/*
1-Crea una clase que represente a una persona. Al menos debe contener información
sobre su nombre, apellido primero y segundo, fecha de nacimiento, lugar de
nacimiento y pais de nacimiento. Crea constructores que permitan la creación de
personas sin saber sus datos, conociendo su DNI, su nombre y apellidos, ambos, y
todos los datos incluidos en la clase.
 */
package com.gozerelgozeriano.objetosh;

public class persona {
    protected String DNI;
    protected String nombre;
    protected String apellido;
    protected fecha birthdate;
    protected String pais;
    
    public persona(){
        
    }
    
    public persona(String DNI){
        this.DNI = DNI;
    }
    
    public persona(String nombre, String apellido){
        this.nombre = nombre;
        this.apellido = apellido;
    }
    
    public persona(String DNI, String nombre, String apellido){
        this.DNI = DNI;
        this.nombre = nombre;
        this.apellido = apellido;
    }
    
    public persona(String DNI, String nombre, String apellido, int year, int month, int day, String pais){
        this.DNI = DNI;
        this.nombre = nombre;
        this.apellido = apellido;
        this.birthdate = new fecha(year,month,day);
        this.pais = pais;
    }
    
    public void print(){
        System.out.println(DNI);
        System.out.println(apellido +", "+nombre);
        birthdate.print();
        System.out.println(pais);
    }
    
}
