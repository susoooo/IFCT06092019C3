/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.interfacebasededatos.accessingdatamysql;

/**
 *
 * @author Usuario
 */
public class BDProductos {
    
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
