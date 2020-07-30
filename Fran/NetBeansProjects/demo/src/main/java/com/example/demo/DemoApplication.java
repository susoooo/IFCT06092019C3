package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class DemoApplication 
{

   int numPeticiones = 0;
   long tiempoInicio = System.currentTimeMillis();
   long tiempoActual;
   long tiempoEjecucion;
    
    public static void main(String[] args) 
    {
        SpringApplication.run(DemoApplication.class, args);
    }

    @GetMapping("/hello")
    public String hello(@RequestParam(value = "name", defaultValue = "World") String name) 
    {
        numPeticiones++;
        
        return String.format("Hello %s!", name, "<a href=\"127.0.0.1:8080/hola\" Hola></a>");
    }
    
    @GetMapping("/hola")
    public String hola(@RequestParam(value = "name", defaultValue = "World") String name) 
    {
        numPeticiones++;
        return String.format("Hola %s!", name);
    }
    
    @GetMapping("/adios")
    public String adios(@RequestParam(value = "name", defaultValue = "World") String name) 
    {
        numPeticiones++;
        return String.format("Adios %s!", name);
    }
    
    @GetMapping("/saludos")
    public String saludos(@RequestParam(value = "name", defaultValue = "World") String name) 
    {
        numPeticiones++;
        return String.format("Saludos %s!", name);
    }
    
    @GetMapping("/web")
    public String web() 
    {
        String urlWeb = "\"https://www.starwars.com \"";
        numPeticiones++;
        
        return ("<HTML><iframe src=" + urlWeb + " width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe><HTML>");
    }
    
    @GetMapping("/peticiones")
    public String peticiones()
    {
        numPeticiones++;
        return String.format("SE HAN ATENDIDO %s peticiones", numPeticiones);
    }
    
    @GetMapping("/tiempo")
    public String tiempo()
    {
        tiempoActual = System.currentTimeMillis();
        
        tiempoEjecucion = (tiempoActual - tiempoInicio) / 1000;
        
        return String.format("Tiempo que lleva ejecutándose: %s segundos", tiempoEjecucion);
    }
}
