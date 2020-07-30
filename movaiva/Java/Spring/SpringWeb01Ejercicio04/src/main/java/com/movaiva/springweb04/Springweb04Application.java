package com.movaiva.springweb04;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springweb04Application {
    private long tiempo=System.currentTimeMillis();

    public static void main(String[] args) {
        SpringApplication.run(Springweb04Application.class, args);
    }

    @GetMapping("/index")
    public String countMillis() {
        long ahora=System.currentTimeMillis();
        long transcurrido=ahora-tiempo;
        return String.format("La página lleva ejecutandose %d minutos",transcurrido/(1000*60));
    }

}
