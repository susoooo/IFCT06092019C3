
package com.modelobasededatos.accessingdatamysql;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;


@Entity // This tells Hibernate to make a table out of this class
public class BDProductos {
@Id
@GeneratedValue(strategy=GenerationType.AUTO)

private Integer IdProducto;
private String nombreproducto;
private Float precio;
private Float IVA;
private Float PVP;
private Float Descuento;
private String Descripcion;



public Integer getIdProducto() {return IdProducto;}
public void setIdProducto(Integer IdProducto) {this.IdProducto = IdProducto;}

public String getnombreproducto() {return nombreproducto;}
public void setnombreproducto(String nombreproducto) {this.nombreproducto = nombreproducto;}

public Float getprecio() {return precio;}
public void setprecio(Float precio) {this.precio = precio;}

public Float getIVA() {return IVA;}
public void setIVA(Float IVA) {this.IVA = IVA;}

public Float getPVP() {return PVP;}
public void setPVP(Float PVP) {this.PVP = PVP;}

public Float getDescuento() {return Descuento;}
public void setDescuento(Float Descuento) {this.Descuento = Descuento;}

public String getDescripcion() {return Descripcion;}
public void setDescripcion(String Descripcion) {this.Descripcion = Descripcion;}

}



