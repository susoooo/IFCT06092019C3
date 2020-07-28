package com.movaiva.springweb03;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springweb03Application {
    private int conections=0;

    public static void main(String[] args) {
        SpringApplication.run(Springweb03Application.class, args);
    }

    @GetMapping("/index")
    public String countConections() {
        this.conections++;
        return Integer.toString(conections);
    }

}
