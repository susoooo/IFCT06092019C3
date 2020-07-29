package pruebas_programacion_spring.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Ejercicio1Application {

	public static void main(String[] args) {
		SpringApplication.run(Ejercicio1Application.class, args);
	}

@GetMapping("/hello")
    public String hello(@RequestParam(value = "name", defaultValue = "mundo cruel") String name) {
        return String.format("Hola %s!", name);
    }

@GetMapping("/adios")
    public String adios(@RequestParam(value = "name", defaultValue = "mundo cruel") String name) {
        return String.format("Adios %s!", name);
    }
}