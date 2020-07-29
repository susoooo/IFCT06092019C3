//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/*1-Crea una resource representation class para cada uno de los siguientes JSON:

{
   "name": "Grand Hyatt",
   "location": [25.2285, 55.3273]
}
--------
{
   "id": 3245,
   "date": "2017-07-23T21:56:35",
   "link": "https://www.kaggle.com/bennijesus/lovecraft-fiction",
   "title": "Cthulhu Mythos",
   "author": 124553,
   "sticky": false
}
------------
2. Crea un servicio web al que se le envie un texto y devuelva su longitud, el número de caracteres que contiene, el de letras y el de números.
3. Crea un servicio web que en la dirección /add permita añadir un número a una lista, en la dirección /query devuelva todos los números de la lista, y en la dirección /remove elimine el último número que se añadio.
4. Crea un servicio web que gestione una lista de precios de productos (sin almacenarlos en disco)
	- Las consultas a la lista de precios se harán en la dirección /consulta. Si no se especifica ningún parámetro, se devolverán cada uno de los productos con su precio asociado.
	- Para añadir un nuevo producto a la lista, se enviará una petición a la dirección /add indicando el nombre del producto y el precio
	- Para cambiar el precio de un producto de la lista, se enviará una petición a la dirección /change_money indicando el nombre del producto y el nuevo precio
	- Para cambiar el nombre de un producto de la lista, se enviará una petición a la dirección /change_name indicando el nombre del producto y el nuevo nombre.
	- Para consultar el precio de un producto en concreto, se enviará una petición a la dirección /consulta indicando el nombre del producto.
5. Añade al servicio anterior la capacidad de solicitar que calcule estadísticas sobre los precios de los productos, incluyendo:
	- El precio del producto más caro
	- El precio del producto más barato
	- La media de los precios de los productos
6. Añade una página al servicio web anterior que al acceder a ella, muestre un menú que permita realizar todas las acciones indicadas en los apartados 4 y 5.*/
//</editor-fold>

package com.gozerelgozeriano.spring2;

import org.springframework.boot.SpringApplication;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author gozerelgozeriano
 */
@RestController
public class main {
    public static void main(String[] args) {
        SpringApplication.run(GreetingController.class, args);
    }
}
