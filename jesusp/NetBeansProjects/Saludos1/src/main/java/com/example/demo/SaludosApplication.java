  package com.example.demo;
              import org.springframework.boot.SpringApplication;
              import org.springframework.boot.autoconfigure.SpringBootApplication;
              import org.springframework.web.bind.annotation.GetMapping;
              import org.springframework.web.bind.annotation.RequestParam;
              import org.springframework.web.bind.annotation.RestController;
              
              @SpringBootApplication
              @RestController
              public class SaludosApplication {
                
                  
                  public static void main(String[] args) {
                  SpringApplication.run(SaludosApplication.class, args);
                  }
                  
                  @GetMapping("/hello")
                  public String hello(@RequestParam(value = "name", defaultValue = "World") String name) {
                  return String.format("Hello %s!", name);
                  }
                  @GetMapping("/hola")
                  public String hola(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
                  return String.format("Hola %s!", name);
                  }
                  @GetMapping("/goodbye")
                  public String goodbye(@RequestParam(value = "name", defaultValue = "World") String name) {
                  return String.format("GoodBye %s!", name);
                  }
                  @GetMapping("/adios")
                  public String adios(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
                  return String.format("Adiós %s!", name);
                  }
                  
              }
