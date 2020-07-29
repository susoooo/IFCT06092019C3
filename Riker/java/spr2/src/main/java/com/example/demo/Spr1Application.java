package com.example.demo;

import java.text.SimpleDateFormat;
import java.util.Date;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Spr1Application {

public static void main(String[] args) {
	SpringApplication.run(Spr1Application.class, args);
}

@GetMapping("/starwars")
public String starwars() {
	return "<iframe src=\"https://www.starwars.com\" width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe>";
}

}