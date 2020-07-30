/*1-Crea una aplicación web que tenga varias páginas.

2-Crea una aplicación que muestre el contenido de una página:

<iframe src="https://www.starwars.com" width="100%" height="80%"title="Que bien programao!!!"></iframe>

 

*/

package com.example.demo;

import java.awt.Desktop;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
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

@GetMapping("/concellodelugo")
public String concellodelugo()  {
return ("<iframe src=\"https://www.starwars.com\" width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe>");
}

}
