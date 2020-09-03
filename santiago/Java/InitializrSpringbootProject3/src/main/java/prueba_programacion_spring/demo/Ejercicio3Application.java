package prueba_programacion_spring.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Ejercicio3Application {
int contador = 0;

	public static void main(String[] args) {
		SpringApplication.run(Ejercicio3Application.class, args);
	}
        
@GetMapping("/hello")
    public String hello(@RequestParam(value = "name", defaultValue = "mundo cruel") String name) {
        contador=contador+1;
        return (String.valueOf(contador));
    }
}