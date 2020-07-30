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

@GetMapping("/hello")
public String hello(@RequestParam(value = "name", defaultValue = "World") String name) {
	return String.format("Hello %s!", name);
}
@GetMapping("/goodbye")
public String goodbye(@RequestParam(value = "name", defaultValue = "World") String name) {
	return String.format("Goodbye %s!", name);
}
@GetMapping("/time")
public String time(@RequestParam(value = "name", defaultValue = "World") String name) {
    SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");  
    Date date = new Date();  
    return String.format("Agora na Galiza é : " + formatter.format(date));
}

}