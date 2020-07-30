/*
3. Crea un servicio web que en la dirección /add permita añadir un número a una 
lista, en la dirección /query devuelva todos los números de la lista, y en la dirección 
/remove elimine el último número que se añadio.
*/
package com.movaiva.springrestweb03;

import java.util.ArrayList;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springrestweb03Application {
    
        private final ArrayList<Integer> lista=new ArrayList<Integer>();

	public static void main(String[] args) {
		SpringApplication.run(Springrestweb03Application.class, args);
	}
        
        @GetMapping("/add")
	public void add(@RequestParam(value = "numero", defaultValue = "0") String numero) {
                lista.add(Integer.parseInt(numero));
	}
        
        @GetMapping("/query")
	public ArrayList<Integer> query() {
                return lista;
	}
        
        @GetMapping("/remove")
	public void remove() {
                lista.remove(lista.size()-1);
	}

}
