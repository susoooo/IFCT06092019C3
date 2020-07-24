/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.guiprogramadod;

/**
 *
 * @author Usuario
 */
public class Pedido {
    private String masa;
    private String ingredientes[];
    private String descuento;
    private String entrega;
    private String cliente;
    private String direccion;
    private double precio;

    public Pedido(String masa, String[] ingredientes, String descuento, String entrega) {
        this.masa = masa;
        this.ingredientes = ingredientes;
        this.descuento = descuento;
        this.entrega = entrega;
    }

    public String getMasa() {
        return masa;
    }

    public void setMasa(String masa) {
        this.masa = masa;
    }

    public String[] getIngredientes() {
        return ingredientes;
    }

    public void setIngredientes(String[] ingredientes) {
        this.ingredientes = ingredientes;
    }

    public String getDescuento() {
        return descuento;
    }

    public void setDescuento(String descuento) {
        this.descuento = descuento;
    }

    public String getEntrega() {
        return entrega;
    }

    public void setEntrega(String entrega) {
        this.entrega = entrega;
    }

    public String getCliente() {
        return cliente;
    }

    public void setCliente(String cliente) {
        this.cliente = cliente;
    }

    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public double getPrecio() {
        return precio;
    }

    public void setPrecio(double precio) {
        this.precio = precio;
    }
    
    public String imprimir()
    {
        String texto="";
        texto+="Masa: "+masa+"\n";
        texto+="Ingredientes: \n";
        for(int contador=0;contador<ingredientes.length;contador++){
            texto+="\t"+ingredientes[contador]+"\n";
        }
        texto+="Descuento: "+descuento+"%\n";
        texto+="Forma de entrega: "+entrega+"\n";
        if(entrega.contains("domicilio")){
            texto+="Cliente: "+cliente+"\n";
            texto+="Dirección: "+direccion+"\n";
        }
        texto+="Precio: "+precio+" Euros";
        return texto;
    }
}
