package com.ivamova.springweb01ejercicio01;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springweb01ejercicio01Application {

    public static void main(String[] args) {
        SpringApplication.run(Springweb01ejercicio01Application.class, args);
    }

    @GetMapping("/hola")
    public String hello(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
        return String.format("Hola %s!", name);
    }
    
    @GetMapping("/mira")
    public String look(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
        return String.format("Esto es una prueba %s!", name);
    }
    
    @GetMapping("/adios")
    public String goodbye(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
        return String.format("Adiós %s!", name);
    }

}
