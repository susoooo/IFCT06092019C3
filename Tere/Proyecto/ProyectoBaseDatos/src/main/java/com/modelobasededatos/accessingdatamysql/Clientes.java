
package com.modelobasededatos.accessingdatamysql;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;


@Entity // This tells Hibernate to make a table out of this class
public class Clientes {
@Id
@GeneratedValue(strategy=GenerationType.AUTO)

private Integer id;
private String nombrecomercial;
private String nombrefiscal;
private String email;

public Integer getId() {return id;}
public void setId(Integer id) {this.id = id;}

public String getNombrecomercial() {return nombrecomercial;}
public void setNombrecomercial(String nombrecomercial) {this.nombrecomercial = nombrecomercial;}

public String getNombrefiscal() {return nombrefiscal;}
public void setNombrefiscal(String nombrefiscal) {this.nombrefiscal = nombrefiscal;}

public String getEmail() {return email;}
public void setEmail(String email) {this.email = email;}

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
