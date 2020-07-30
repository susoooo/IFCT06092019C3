package com.example.demo;


import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;


@SpringBootApplication
@RestController
public class Spr1Application {
	
long start_time = System.currentTimeMillis();
	 
public static void main(String[] args) {
	SpringApplication.run(Spr1Application.class, args);
}

@GetMapping("")
public String uptime() {
	
	return "Uptime: " + (int)(System.currentTimeMillis()-start_time)/1000 + "seconds.";
}

}