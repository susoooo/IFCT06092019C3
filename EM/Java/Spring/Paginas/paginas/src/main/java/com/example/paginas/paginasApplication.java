package com.example.paginas;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class paginasApplication {

public static void main(String[] args) {
SpringApplication.run(paginasApplication.class, args);
}

@GetMapping("/hello")
public String hello(@RequestParam(value = "name", defaultValue = "World") String name) {
return String.format("Hello %s!", name);
}

@GetMapping("/Teresa")
public String Teresa(@RequestParam(value = "name", defaultValue = "Lopez") String name) {
return String.format("Teresa %s!", name);
}

@GetMapping("/Frank")
public String Frack(@RequestParam(value = "name", defaultValue = "Perez") String name) {
return String.format("Frank %s!", name);
}

@GetMapping("/Youtube")
public String Youtube(@RequestParam(value = "name", defaultValue = "") String name) {
return ("<iframe src=\"https://www.starwars.com\" width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe>");

}

@GetMapping("/Incremento")




}


       


