/*2. Crea un servicio web al que se le envie un texto y devuelva su longitud, 
el número de caracteres que contiene, el de letras y el de números.*/


package com.longitud.demo;


import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController


public class ServicioWeb {
    
        private String texto;

	public static void main(String[] args) {
		SpringApplication.run(ServicioWeb.class, args);
	}
  
        
    @GetMapping("/ServicioWeb")
        
    public ClaseContenedora Web(@RequestParam(value = "texto", defaultValue = "World") String text) {
            
        this.texto= text;    
        
            return (new ClaseContenedora(texto));
           
        }
 
}    
