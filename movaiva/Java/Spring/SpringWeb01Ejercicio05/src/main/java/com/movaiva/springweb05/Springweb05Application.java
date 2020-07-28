package com.movaiva.springweb05;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springweb05Application {

    public static void main(String[] args) {
        SpringApplication.run(Springweb05Application.class, args);
    }

    @GetMapping("/hola")
    public String hello(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
        return String.format("Hola %s!<br><ul><li><a href=\"mira\">mira</a></li><li><a href=\"adios\">adios</a></li></ul>", name);
    }

    @GetMapping("/mira")
    public String look(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
        return String.format("Esto es una prueba %s!<br><ul><li><a href=\"hola\">hola</a></li><li><a href=\"adios\">adios</a></li></ul>", name);
    }

    @GetMapping("/adios")
    public String goodbye(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
        return String.format("Adiós %s!<br><ul><li><a href=\"hola\">hola</a></li><li><a href=\"mira\">mira</a></li></ul>", name);
    }

}
