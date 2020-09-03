package pruebas_programacion_spring.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Ejercicio2Application {

	public static void main(String[] args) {
		SpringApplication.run(Ejercicio2Application.class, args);
	}

@GetMapping("/hello")
    public String hello(@RequestParam(value = "name", defaultValue = "mundo cruel") String name) {
        return (("<iframe src=\"https://www.slackware.com\" width=\"100%\" height=\"50%\"title=\"Que mal programao!!!\"></iframe>")+("<iframe src=\"https://www.slackware.com\" width=\"100%\" height=\"50%\"title=\"Que mal programao!!!\"></iframe>"));
    }
}