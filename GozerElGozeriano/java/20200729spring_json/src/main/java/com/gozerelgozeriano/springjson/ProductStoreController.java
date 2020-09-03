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

import java.util.Arrays;
import java.util.Map;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author gozerelgozeriano
 */
@RestController
public class ProductStoreController {
    private ProductStore store = new ProductStore();
    
    @GetMapping("/store/add")
    public void add(@RequestParam(value = "name") String name,
                    @RequestParam(value = "prize") double prize) {
        store.addproduct(name,prize);
    }
    
    @GetMapping("/store/query")
    public String query(@RequestParam(value="name", defaultValue="ALLPRODUCTS") String name){
        String text;
        text = "";
        Map<String, Object> map;
        map = new ModelMap();

        for(Product prd: store.query(name)){
            map.clear();
            map.put("name", prd.getnombre());
            map.put("prize",prd.getprecio());
            text += map.toString()+"<br>";
        }
        return text;
    }
    
    @GetMapping("/store/change_money")
    public void changeprize(@RequestParam(value = "name") String name,
                            @RequestParam(value = "prize") double prize) {
        store.changeprecio(name,prize);
        
    }
    
    @GetMapping("/store/change_name")
    public void changename(@RequestParam(value = "oldname") String oldname,
                           @RequestParam(value = "newname") String newname) {
        store.changename(oldname,newname);
        
    }
    
}
