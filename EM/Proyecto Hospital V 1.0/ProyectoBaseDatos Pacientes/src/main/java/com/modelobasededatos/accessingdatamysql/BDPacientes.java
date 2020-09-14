package com.modelobasededatos.accessingdatamysql;

import java.io.Serializable;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;


@Entity // This tells Hibernate to make a table out of this class
public class BDPacientes implements Serializable {
@Id
@GeneratedValue(strategy=GenerationType.AUTO)

private Integer IdPaciente;
private String nombre;
private String apellidos;
private String DNI;
private String Direccion;
private String CP;
private String Ciudad;
private String Provincia;
private String Pais;
private String Telefono;
private String movil;
private String email;
private String contacto;
private String Fechanacimiento;
private String Sexo;



public Integer getIdPaciente() {return IdPaciente;}
public void setIdPaciente(Integer IdPaciente) {this.IdPaciente = IdPaciente;}

public String getnombre() {return nombre;}
public void setnombre(String nombre) {this.nombre = nombre;}

public String getapellidos() {return apellidos;}
public void setapellidos(String apellidos) {this.apellidos = apellidos;}

public String getDNI() {return DNI;}
public void setDNI(String DNI) {this.DNI = DNI;}

public String getDireccion() {return Direccion;}
public void setDireccion(String Direccion) {this.Direccion = Direccion;}

public String getCP() {return CP;}
public void setCP(String CP) {this.CP = CP;}

public String getCiudad() {return Ciudad;}
public void setCiudad(String Ciudad) {this.Ciudad = Ciudad;}

public String getProvincia() {return Provincia;}
public void setProvincia(String Provincia) {this.Provincia = Provincia;}

public String getPais() {return Pais;}
public void setPais(String Pais) {this.Pais = Pais;}

public String getTelefono() {return Telefono;}
public void setTelefono(String Telefono) {this.Telefono = Telefono;}

public String getmovil() {return movil;}
public void setmovil(String movil) {this.movil = movil;}

public String getFechanacimiento() {return Fechanacimiento;}
public void setFechanacimiento(String Fechanacimiento) {this.Fechanacimiento = Fechanacimiento;}

public String getSexo() {return Sexo;}
public void setSexo(String Sexo) {this.Sexo = Sexo;}

public String getEmail() {return email;}
public void setEmail(String email) {this.email = email;}

public String getcontacto() {return contacto;}
public void setcontacto(String contacto) {this.contacto = contacto;}

    
    }



