/*
2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico.
En la clase obrero, guarda el nombre del cargo que desempeña. Para la clase médico,
guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los
constructores y metodos get y set que creas necesarios.
*/
package com.gozerelgozeriano.objetosh;

/**
 *
 * @author Usuario
 */
public class medico extends asalariado{
    protected int pacientes;
    
    public medico(String DNI, String nombre, String apellido, int year, int month, int day, String pais, float sueldo, float retencion, int pacientes){
        super(DNI,nombre,apellido,year,month,day,pais,sueldo,retencion);
        this.pacientes = pacientes;
    }
    
    public int getpacientes(){
        return(pacientes);
    }
    
    @Override
    public void print(){
        super.print();
        System.out.println("Pacientes: " + pacientes);
    }
}
