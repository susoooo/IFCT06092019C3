/*
4. Crea un servicio web que gestione una lista de precios de productos (sin almacenarlos en disco)
	- Las consultas a la lista de precios se harán en la dirección /consulta. 
          Si no se especifica ningún parámetro, se devolverán cada uno de los productos 
          con su precio asociado.
	- Para añadir un nuevo producto a la lista, se enviará una petición a la 
          dirección /add indicando el nombre del producto y el precio
	- Para cambiar el precio de un producto de la lista, se enviará una petición 
          a la dirección /change_money indicando el nombre del producto y el nuevo precio
	- Para cambiar el nombre de un producto de la lista, se enviará una petición 
          a la dirección /change_name indicando el nombre del producto y el nuevo nombre.
	- Para consultar el precio de un producto en concreto, se enviará una petición 
          a la dirección /consulta indicando el nombre del producto.

5. Añade al servicio anterior la capacidad de solicitar que calcule estadísticas sobre los precios 
de los productos, incluyendo:
	- El precio del producto más caro
	- El precio del producto más barato
	- La media de los precios de los productos
	
6. Añade una página al servicio web anterior que al acceder a ella, muestre un menú que permita 
realizar todas las acciones indicadas en los apartados 4 y 5.
*/
package com.movaiva.springrestweb04;

import java.util.HashMap;
import java.util.Map;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springrestweb04Application {
    
    private final HashMap<String,Double> listaPrecios=new HashMap<String,Double>() {};

	public static void main(String[] args) {
		SpringApplication.run(Springrestweb04Application.class, args);
	}
        
	
		@GetMapping("/menu")
		public String menu() {
			return cabecera();
		}
        
        @GetMapping("/consulta")
	public HashMap<String,Double> consulta(@RequestParam(value = "producto", defaultValue = "nada") String producto) {
                if(producto.equals("nada")){
                    return listaPrecios;
                }else{
                    HashMap<String,Double> nuevaLista=new HashMap<String,Double>();
                    nuevaLista.put(producto, listaPrecios.get(producto));
                    return nuevaLista;
                }
	}
        
        @GetMapping("/add")
	public void add(@RequestParam(value = "producto", defaultValue = "nuevoProducto") String nuevoProducto,
                @RequestParam(value = "precio", defaultValue = "0") String precio) {
                listaPrecios.put(nuevoProducto, Double.parseDouble(precio));
	}
        
        @GetMapping("/change_money")
	public void change_money(@RequestParam(value = "producto", defaultValue = "producto") String producto,
                @RequestParam(value = "precio", defaultValue = "0") String precio) {
                listaPrecios.remove(producto);
                listaPrecios.put(producto, Double.parseDouble(precio));
	}
        
        @GetMapping("/change_name")
	public void change_name(@RequestParam(value = "producto", defaultValue = "producto") String producto,
                @RequestParam(value = "nuevoNombre", defaultValue = "producto") String nuevoNombre) {
                double precio=listaPrecios.get(producto);
                listaPrecios.remove(producto);
                listaPrecios.put(nuevoNombre, precio );
	}
        
        @GetMapping("/statistics")
        public String statistics()
        {
            double precio=0;
            String producto="";
            String texto="";
            String textoFormateado="";
            double suma=0;
            int contador=0;
            Map.Entry<String,Double> entry = listaPrecios.entrySet().iterator().next();
            precio=entry.getValue();
            for(String entrada : listaPrecios.keySet())
            {
                if(precio<listaPrecios.get(entrada)){
                    precio=listaPrecios.get(entrada);
                    producto=entrada;
                }
                contador++;
                suma+=listaPrecios.get(entrada);
            }
            texto="<ul><li>El producto con el precio más caro: %s %.2f</li>";
            textoFormateado=String.format(texto, producto,precio);
            
            for(String entrada : listaPrecios.keySet())
            {
                if(precio>listaPrecios.get(entrada)){
                    precio=listaPrecios.get(entrada);
                    producto=entrada;
                }
            }
            texto="<li>El producto con el precio más barato: %s %.2f</li>";
            textoFormateado+=String.format(texto, producto,precio);
            
            suma=suma/contador;
            
            texto="<li>La media de los precios es: %.2f</li></ul>";
            textoFormateado+=String.format(texto, suma);
            return textoFormateado;
            
        }
        
        public String cabecera() {
        	String html;

        	html="<ul>"
        			+ "<li><a href=\"formadd\">Añadir producto</a></li>"
        			+ "<li><a href=\"formsearch\">Consultar producto</a></li>"
        			+ "<li><a href=\"formmoney\">Cambiar precio</a></li>"
        			+ "<li><a href=\"formname\">Cambiar nombre</a></li>"
        			+ "</ul>";
        	return html;
        }

}