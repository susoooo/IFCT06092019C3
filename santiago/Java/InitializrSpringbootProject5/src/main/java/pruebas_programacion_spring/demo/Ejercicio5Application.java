package pruebas_programacion_spring.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Ejercicio5Application {

	public static void main(String[] args) {
		SpringApplication.run(Ejercicio5Application.class, args);
	}
@GetMapping("/hola")
    public String hola(@RequestParam(value = "name", defaultValue = "mundo cruel") String name) {
        return ("<iframe src=\"https://www.slackware.com\" width=\"100%\" height=\"95%\"title=\"Que mal programao!!!\"></iframe>");
    }

@GetMapping("/adios")
    public String adios(@RequestParam(value = "name", defaultValue = "mundo cruel") String name) {
        return ("<iframe src=\"https://www.qubes-os.org\" width=\"100%\" height=\"95%\"title=\"Que mal programao!!!\"></iframe>");
    }
}
