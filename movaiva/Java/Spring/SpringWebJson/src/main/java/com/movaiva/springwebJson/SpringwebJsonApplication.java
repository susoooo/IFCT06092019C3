package com.movaiva.springwebJson;

import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class SpringwebJsonApplication {
    
    private static final String template="Hola %s!";
    private static final AtomicLong counter=new AtomicLong();
    

	public static void main(String[] args) {
		SpringApplication.run(SpringwebJsonApplication.class, args);
	}
        
        @GetMapping("/saludos")
    public Saludo saludos(@RequestParam(value = "name", defaultValue = "Mundo") String name) {
        return new Saludo(counter.incrementAndGet(),String.format(template, name));
    }

}
