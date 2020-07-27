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
    private Double precios[];
    private String descuento;
    private String entrega;
    private String cliente;
    private String direccion;
    private double precio=0;

    public Pedido(String masa, String[] ingredientes,Double[] precios, String descuento, String entrega) {
        this.masa = masa;
        this.ingredientes = ingredientes;
        this.precios=precios;
        this.descuento = descuento;
        this.entrega = entrega;
    }

    public Pedido() {
        
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
    
    public Double[] getPrecios() {
        return precios;
    }

    public void setPrecios(Double[] precios) {
        this.precios = precios;
    }
    
    public void calcularPrecio()
    {
        for(int contador=0;contador<precios.length;contador++)
        {
            if(precios[contador]!=null){
                precio+=precios[contador];
            }
            
        }
        
        precio-=precio*(Integer.parseInt(descuento)/100);
    }
    
    public String imprimir()
    {
        calcularPrecio();
        String texto="";
        texto+="Masa: "+masa;
        texto+="\t"+precios[0]+"\n";
        texto+="Ingredientes: \n";
        for(int contador=0;contador<ingredientes.length;contador++){
            if(ingredientes[contador]!=null){
               texto+=ingredientes[contador];
               texto+="\t"+precios[contador+1]+"\n";
            }
        }
        texto+="Descuento: "+descuento+"%\n";
        texto+="Forma de entrega: "+entrega+"\n";
        if(entrega.equalsIgnoreCase("domicilio")){
            texto+="Cliente: "+cliente+"\n";
            texto+="Dirección: "+direccion+"\n";
        }
        texto+="Precio: "+precio+" Euros";
        return texto;
    }
}
