
package com.modelobasededatos.accessingdatamysql;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;


@Entity // This tells Hibernate to make a table out of this class
public class BDClientes {
@Id
@GeneratedValue(strategy=GenerationType.AUTO)

private Integer IdCliente;
private String nombrecomercial;
private String nombrefiscal;
private String DNI;
private String Direccion;
private String CP;
private String Ciudad;
private String Provincia;
private String Pais;
private String Telefono;
private String email;
private String pago;
private String Banco;
private String IBAN;
private String sinIVA;
private String RE;
private String IRPF;
private String Observaciones;




public Integer getIdCliente() {return IdCliente;}
public void setIdCliente(Integer IdCliente) {this.IdCliente = IdCliente;}

public String getNombrecomercial() {return nombrecomercial;}
public void setNombrecomercial(String nombrecomercial) {this.nombrecomercial = nombrecomercial;}

public String getNombrefiscal() {return nombrefiscal;}
public void setNombrefiscal(String nombrefiscal) {this.nombrefiscal = nombrefiscal;}

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

public String getEmail() {return email;}
public void setEmail(String email) {this.email = email;}

public String getpago() {return pago;}
public void setpago(String pago) {this.pago = pago;}

public String getBanco() {return Banco;}
public void setBanco(String Banco) {this.Banco = Banco;}

public String getIBAN() {return IBAN;}
public void setIBAN(String IBAN) {this.IBAN = IBAN;}

public String getsinIVA() {return sinIVA;}
public void setsinIVA(String sinIVA) {this.sinIVA = sinIVA;}

public String getRE() {return RE;}
public void setRE(String RE) {this.RE = RE;}

public String getIRPF() {return IRPF;}
public void setIRPF(String IRPF) {this.IRPF = IRPF;}

public String getObservaciones() {return Observaciones;}
public void setObservaciones(String Observaciones) {this.Observaciones = Observaciones;}


}


/*
Nombre Comercial
Nombre Fiscal 
NIF/DNI
Dirección
Código Postal
Ciudad
Provincia
País
Teléfono
Email
Forma de pago: Contado/Transferencia/Giro 30-60-90 días
Banco
IBAN/BIC
Facturar sin IVA: Si/No
Aplicar RE (Recargo de equivalencia): Si/No
Aplicar IRPF: Si/No
Observaciones

*/
