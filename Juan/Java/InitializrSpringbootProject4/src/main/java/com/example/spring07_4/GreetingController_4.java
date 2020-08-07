/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_4;
        
import java.util.ArrayList;
import java.util.List;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;
        
/**
 *
 * @author Usuario
 */

@RestController
public class GreetingController_4 {
    public int contador;
    public List<String> lista;
    

    
    public GreetingController_4(){
        contador=0;
    }
    
     @GetMapping("/add")
	public String addnumber(@RequestParam(value = "producto", defaultValue = "Add number") String producto, double precio) {            
            lista=new ArrayList<String>();
            lista.add(producto);        
		return String.format("El producto %d se ha añadido y su precio es: %f ",producto, precio);
	}
        
    @GetMapping("/consulta")
        public Greeting_4 listado(@RequestParam(value = "numero", defaultValue = "Add number") String number) {
            return new Greeting_4(this.lista);
        }

}
