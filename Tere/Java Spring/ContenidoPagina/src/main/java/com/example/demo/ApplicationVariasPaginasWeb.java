/*1-Crea una aplicación web que tenga varias páginas.*/

package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class ApplicationVariasPaginasWeb {

public static void main(String[] args) {
SpringApplication.run(ApplicationVariasPaginasWeb.class, args);
}

@GetMapping("/hello")
public String hello(@RequestParam(value = "name", defaultValue = "World") String name) {
return String.format("Hello %s!", name);
}

@GetMapping("/hasta luego")
public String hastaluego(@RequestParam(value = "name", defaultValue = "World") String name) {
return String.format("Hasta luego %s!", name);
}

@GetMapping("/Adios")
public String Adios(@RequestParam(value = "name", defaultValue = "World") String name) {
return String.format("Adios %s!", name);
}

}
