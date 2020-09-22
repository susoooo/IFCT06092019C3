
package com.modelobasededatos.accessingdatamysql;

import java.io.Serializable;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;


@Entity // This tells Hibernate to
public class BDCitas implements Serializable {
@Id
@GeneratedValue(strategy=GenerationType.AUTO)


private Integer IdCitas;
private String nombre;
private String apellidos;
private String DNI;
private String Especializacion;
private String Fechadelacita;




public String getnombre() {return nombre;}
public void setnombre(String nombre) {this.nombre = nombre;}

public String getapellidos() {return apellidos;}
public void setapellidos(String apellidos) {this.apellidos = apellidos;}

public String getDNI() {return DNI;}
public void setDNI(String DNI) {this.DNI = DNI;}

public String getEspecializacion() {return Especializacion;}
public void setEspecializacion(String Especializacion) {this.Especializacion = Especializacion;}

public String getFechadelacita() {return Fechadelacita;}
public void setFechadelacita(String Fechadelacita) {this.Fechadelacita = Fechadelacita;}    

   
public Integer getIdCitas() {return IdCitas;}
public void setIdCitas(Integer IdCitas) {this.IdCitas = IdCitas;}


    
   
}


