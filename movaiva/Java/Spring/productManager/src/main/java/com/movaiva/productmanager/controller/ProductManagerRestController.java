package com.movaiva.productmanager.controller;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ProductManagerRestController {
	
	@GetMapping("/hola")
	public String hola() {
		return "Hola mundo";
	}
}