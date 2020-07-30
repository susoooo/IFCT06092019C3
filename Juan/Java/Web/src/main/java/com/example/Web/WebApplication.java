package com.example.Web;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class WebApplication {
    public int contador;

	public static void main(String[] args) {
		SpringApplication.run(WebApplication.class, args);
	}
        @GetMapping("/miweb1")
	public String miwebprimera(@RequestParam(value = "name", defaultValue = "primera sin nombre") String name) {
            contador++;
            
		return String.format("Página %s, Contador: %d ", name, contador);
	}
        
        @GetMapping("/miweb2")
	public String miwebsegunda(@RequestParam(value = "name", defaultValue = "segunda sin nombre") String name) {
		return String.format("Página %s", name);
	}
        
        @GetMapping("/starwars")
	public String starwars(@RequestParam(value = "name", defaultValue = "<iframe src=\"https://www.starwars.com\" width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe>") String name) {
		return String.format("%s", name);
	}
        
        @GetMapping("/elcuarto")
	public String elcuarto(@RequestParam(value = "name", defaultValue = "segunda sin nombre") String name) {
            long tiempo;
            tiempo=System.currentTimeMillis();
            name= String.valueOf(tiempo).toString();
            return String.format("%s", name);
	}
}

