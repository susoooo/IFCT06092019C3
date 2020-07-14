/*
2-A partir de la clase persona crea una clase asalariado que guarde información
sobre el sueldo que cobra la persona neto al mes y la retención que se le aplica
en la nómina. Crea al menos un constructor y los correspondientes métodos de
get y set.
 */
package com.gozerelgozeriano.objetosh;

public class asalariado extends persona {
    protected float sueldo;
    protected float retencion;
    
    public asalariado(String DNI, String nombre, String apellido, int year, int month, int day, String pais, float sueldo, float retencion){
        super(DNI,nombre,apellido,year,month,day,pais);
        this.sueldo = sueldo;
        this.retencion = retencion;
    }
    
    public void setsueldo(float sueldo){
        this.sueldo = sueldo;
    }
    
    public float getsueldo(){
        return(sueldo);
    }
    
    public void setretencion(float retencion){
        this.retencion = retencion;
    }
    
    public float getretencion(){
        return(retencion);
    }
    
    @Override
    public void print(){
        super.print();
        System.out.println("Sueldo: " + sueldo +"€");
        System.out.println("Retención: " + retencion);
    }
    
}
