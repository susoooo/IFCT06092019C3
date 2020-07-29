package com.example.springrest07;

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
						"<a href=\"/weird_list\">03. Weird list</a><br>\n" +
						"<a href=\"/price_list_manager\">04. Price list manager</a><br>\n" +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	@GetMapping("/json_preview")
	public String json_preview() {
		String response = 
						"<html>\n" +
						"<body>\n" +
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
	@GetMapping("/weird_list")
	public String weird_list() {
		String response =
						"<html>\n" +
						"<body>\n" +
						"<a href=\"/weird_list/add\">/add</a><br>\n" +
						"<a href=\"/weird_list/query\">/query</a><br>\n" +
						"<a href=\"/weird_list/remove\">/remove</a><br>\n" +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	@GetMapping("/price_list_manager")
	public String price_list_manager() {
		String response =
						"<html>\n" +
						"<body>\n" +
						"<a href=\"/price_list_manager/consulta\">/consulta</a><br>\n" +
						"<a href=\"/price_list_manager/add\">/add</a><br>\n" +
						"<a href=\"/price_list_manager/change_money\">/change_money</a><br>\n" +
						"<a href=\"/price_list_manager/change_name\">/change_name</a><br>\n" +
						"<hr>" +
						"<a href=\"/price_list_amanger/mas_caro\">/mas_caro</a><br>\n" +
						"<a href=\"/price_list_amanger/mas_barato\">/mas_barato</a><br>\n" +
						"<a href=\"/price_list_amanger/media\">/media</a><br>\n" +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	
}
