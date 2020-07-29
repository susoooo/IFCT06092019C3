//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/*
4. Crea un servicio web que gestione una lista de precios de productos (sin almacenarlos en disco)
	- Las consultas a la lista de precios se harán en la dirección /consulta. Si no se especifica ningún parámetro, se devolverán cada uno de los productos con su precio asociado.
	- Para añadir un nuevo producto a la lista, se enviará una petición a la dirección /add indicando el nombre del producto y el precio
	- Para cambiar el precio de un producto de la lista, se enviará una petición a la dirección /change_money indicando el nombre del producto y el nuevo precio
	- Para cambiar el nombre de un producto de la lista, se enviará una petición a la dirección /change_name indicando el nombre del producto y el nuevo nombre.
	- Para consultar el precio de un producto en concreto, se enviará una petición a la dirección /consulta indicando el nombre del producto.

Clase producto para guardar Nombre <-> Precio
*/
//</editor-fold>

package com.gozerelgozeriano.springjson;

/**
 *
 * @author gozerelgozeriano
 */
public class Product {

    private String nombre;
    private double precio;
    
    public Product(String nombre, double precio){
        this.nombre = nombre;
        this.precio = precio;
    }
    
    public String getnombre(){ return this.nombre; }
    
    public double getprecio(){ return this.precio; }
    
    public void setprecio(double precio){ this.precio = precio; }
    
    public void setnombre(String nombre){ this.nombre = nombre; }
    
}
