/*
4-Crea una aplicación web que muestre cuanto tiempo lleva ejecutandose. (pista:

System.currentTimeMillis()
 */
package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController

public class tiempo {
    private static long segundos;
   
    
public static void main(String[] args) {
    SpringApplication.run(tiempo.class, args);
    
    segundos= System.currentTimeMillis(); 
   
}    

@GetMapping("/Hora")

    public String contarTiempo() {
             
        return Long.toString(System.currentTimeMillis()-segundos);   
    }
      
   }
