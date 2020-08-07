package com.movaiva.productmanager.controller;

import javax.servlet.http.HttpServletRequest;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;

import com.movaiva.productmanager.service.ProductService;

@Controller
public class MainController {
	
	@Autowired
	private ProductService productService;

	@GetMapping("/")
	public String home(HttpServletRequest request) {
		request.setAttribute("products", productService.findAll());
		return "index";
	}
	
}
