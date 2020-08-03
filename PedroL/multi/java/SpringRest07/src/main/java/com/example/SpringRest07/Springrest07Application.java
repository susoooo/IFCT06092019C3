package com.example.springrest07;

import java.util.ArrayList;
import java.util.List;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springrest07Application {

	public static void main(String[] args) {
		SpringApplication.run(Springrest07Application.class, args);
	}
	
	@GetMapping("/error")
	public String error() {
		return "This is my useless error page :))))))))";
	}
	@GetMapping("/index")
	public String index() {
		String response = 
						"<html>\n" +
						"<body>\n" +
						"<a href=\"/json_preview\">01. JSON preview</a><br>" +
						"<a href=\"/length_of\">02. Length of</a><br>\n" +
						"<a href=\"/list\">03. Number list</a><br>\n" +
						"<a href=\"/price_list\">04. Price list</a><br>\n" +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	@GetMapping("/json_preview")
	public String json_preview() {
		String response = 
						"<html>\n" +
						"<body>\n" +
						"<a href=\"/index\">/index</a><br>" +
						"<hr>" +
						"<a href=\"/json_preview/place\">a) Place</a><br>\n" +
						"<a href=\"/json_preview/forum_post\">b) Forum post</a>\n" +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	@GetMapping("/length_of")
	public String length_of(@RequestParam(value = "entry", defaultValue = "") String entry) {
		String response, body;
		Integer length, letter_count = 0, number_count = 0;
		
		length = entry.length();
		for(var c : entry.toCharArray()) {
			if(Character.isLetter(c)) { letter_count++; }
			if(Character.isDigit(c)) { number_count++; }
		}
		
		body = 
						(!entry.isEmpty()) ?
						"length: " + length.toString() + "<br>" +
						"letter_count: " + letter_count.toString() + "<br>" +
						"number_count: " + number_count.toString() + "<br>"
						:
						"/length_of?entry=your string here";
		response =
						"<html>\n" +
						"<body>\n" +
						body +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	
}
