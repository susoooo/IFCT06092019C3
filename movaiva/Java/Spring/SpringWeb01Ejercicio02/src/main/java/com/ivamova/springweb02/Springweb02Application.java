package com.ivamova.springweb02;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springweb02Application {

    public static void main(String[] args) {
        SpringApplication.run(Springweb02Application.class, args);
    }

    @GetMapping("/index")
    public String starwarsURL() {
        return "<iframe src=\"https://www.starwars.com\" width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe>";
    }

}
