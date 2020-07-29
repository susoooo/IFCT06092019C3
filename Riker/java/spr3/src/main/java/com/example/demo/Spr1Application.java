package com.example.demo;


import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;


@SpringBootApplication
@RestController
public class Spr1Application {
	
String new_line = "<br>";
String v_separator = "<hr>";
String h_separator = "|";

public static void main(String[] args) {
	SpringApplication.run(Spr1Application.class, args);
}

@GetMapping("")
public String main() {
	String text = "Main Page";
	String linkOne = "<a href=\"one\">one link </a>";
	String linkTwo = "<a href=\"two\">two link </a>";
	return linkOne + h_separator + linkTwo + new_line + v_separator + text;
}


@GetMapping("one")
public String one() {
	String linkMain ="<a href=\"/\">main</a>";
	String linkTwo = "<a href=\"two\">two link </a>";
	String text = "Page ONE text.<br>";
	return linkMain + h_separator + linkTwo + new_line + v_separator + text; 
}

@GetMapping("two")
public String two() {
	String linkMain ="<a href=\"/\">main</a>";
	String linkOne = "<a href=\"one\">one link </a>";
	String text = "Page Two text.<br>";
	return linkMain + h_separator + linkOne + new_line + v_separator + text; 
}

}