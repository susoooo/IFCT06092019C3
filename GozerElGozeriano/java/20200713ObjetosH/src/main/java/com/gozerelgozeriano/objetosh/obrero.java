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
public class obrero extends asalariado{
    protected String cargo;
    
    public obrero(String DNI, String nombre, String apellido, int year, int month, int day, String pais, float sueldo, float retencion, String cargo){
        super(DNI,nombre,apellido,year,month,day,pais,sueldo,retencion);
        this.cargo = cargo;
    }
    
    public String getcargo(){
        return(cargo);
    }
    
    @Override
    public void print(){
        super.print();
        System.out.println("Cargo: " + cargo);
    }
    
}
