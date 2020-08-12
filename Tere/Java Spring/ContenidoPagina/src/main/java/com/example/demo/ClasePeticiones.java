/*
3-Crea una aplicación web que muestre el número de peticiones que ha atendido desde que se ha ejecutado.
 */
package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;



@SpringBootApplication
@RestController

public class ClasePeticiones {
     private int conexiones;
    
public static void main(String[] args) {
SpringApplication.run(ClasePeticiones.class, args);
}    
    @GetMapping("/Hello")
    public String contarConexiones() {
        this.conexiones++;
        return Integer.toString(conexiones);
    }

}
