package com.movaiva.productmanager.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

import com.movaiva.productmanager.service.ProductService;

@RestController
public class ProductManagerRestController {
	
	@Autowired
	private ProductService productService;
	
	@GetMapping("/allProducts")
	public String all() {
		return productService.findAll().toString();
	}
}