package com.movaiva.productmanager;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ProductManagerRestController {
	
	@GetMapping("/")
	public String hola() {
		return "Hola mundo";
	}
}
