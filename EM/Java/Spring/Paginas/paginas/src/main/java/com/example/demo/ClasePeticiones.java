
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

    /**
     *
     * @return
     */
    @GetMapping("/Hello")
    public String contarConexiones() {
        this.conexiones++;
        return Integer.toString(conexiones);
    }
    
}
//}ión de 1 incluya enlaces para ir de una página a otra.