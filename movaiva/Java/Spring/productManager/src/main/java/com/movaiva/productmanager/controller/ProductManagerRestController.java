package com.movaiva.productmanager.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.movaiva.productmanager.entity.Product;
import com.movaiva.productmanager.service.ProductService;

@RestController
public class ProductManagerRestController {
	
	@Autowired
	private ProductService productService;
	
	@GetMapping("/allProducts")
	public String all() {
		return productService.findAll().toString();
	}
	
	@GetMapping("/saveProducts")
	public String save(@RequestParam String nombre, @RequestParam String precio) {
		Product product=new Product(nombre,Double.parseDouble(precio));
		return "Producto guardado correctamente";
	}
}