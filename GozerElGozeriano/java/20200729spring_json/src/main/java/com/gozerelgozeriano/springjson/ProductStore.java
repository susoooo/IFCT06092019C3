//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/*
4. Crea un servicio web que gestione una lista de precios de productos (sin almacenarlos en disco)
	- Las consultas a la lista de precios se harán en la dirección /consulta. Si no se especifica ningún parámetro, se devolverán cada uno de los productos con su precio asociado.
	- Para añadir un nuevo producto a la lista, se enviará una petición a la dirección /add indicando el nombre del producto y el precio
	- Para cambiar el precio de un producto de la lista, se enviará una petición a la dirección /change_money indicando el nombre del producto y el nuevo precio
	- Para cambiar el nombre de un producto de la lista, se enviará una petición a la dirección /change_name indicando el nombre del producto y el nuevo nombre.
	- Para consultar el precio de un producto en concreto, se enviará una petición a la dirección /consulta indicando el nombre del producto.
*/
//</editor-fold>

package com.gozerelgozeriano.springjson;

/**
 *
 * @author gozerelgozeriano
 */
public class ProductStore {
    
    private final Product[] store;
    private int index;
    
    public ProductStore(){
        store = new Product[256];
        index = 0;
    }
    
    public Product[] query(String product){
        Product[] querylist;
        int index2;
        if(product.equals("ALLPRODUCTS")){
            querylist = new Product[index];
            System.arraycopy(store, 0, querylist, 0, index);
        }else{
            index2=0;
            Product[] sublist;
            sublist = new Product[256];
            for(int i=0;i<256;i++){
                if(product.equalsIgnoreCase(store[i].getnombre())){
                    sublist[index2]=store[i];
                    index2++;
                }
            }
            querylist = new Product[index2];
            System.arraycopy(sublist, 0, querylist, 0, index2);
        }
        return querylist;
    }
    
    public void addproduct(String name, double precio){
        if(index<256){
            store[index] = new Product(name,precio);
            index++;
        }
    }
    
    public void changename(String oldname, String newname){
        for(int i=0;i<index;i++){
            if(oldname.equalsIgnoreCase(store[i].getnombre())){
                store[i].setnombre(newname);
            }
        }
    }
    
    public void changeprecio(String name, double newprecio){
        for(int i=0;i<index;i++){
            if(name.equalsIgnoreCase(store[i].getnombre())){
                store[i].setprecio(newprecio);
            }
        }
    }
}
