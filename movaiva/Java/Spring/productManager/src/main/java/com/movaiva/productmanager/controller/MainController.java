package com.movaiva.productmanager.controller;

import java.util.ArrayList;
import java.util.List;

import javax.servlet.http.HttpServletRequest;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;

import com.movaiva.productmanager.changeName;
import com.movaiva.productmanager.entity.Product;
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
	
	@GetMapping("/formAdd")
	public String newProduct(Model model) {
		Product product=new Product();
		model.addAttribute(product);
		return "formAdd";
	}
	
	@PostMapping("/addProduct")
	public String addProduct(HttpServletRequest request,@ModelAttribute Product product) {
		List<String> errors=new ArrayList<String>();
		List <Product> products=productService.findAll();
		Boolean repetido=false;
		for(Product p:products) {
			if(p.getName().equalsIgnoreCase(product.getName())) {
				repetido=true;
			}
		}
		
		if(repetido) {
			errors.add("Producto ya existente");
		}
		
		if(errors.size()==0)
		{
			productService.save(product);
			return "addProduct";
		}else {
			request.setAttribute("errors", errors);
			request.setAttribute("product", product);
			return "formAdd";
		}	
	}
	
	@GetMapping("/formName")
	public String updateName(Model model)
	{
		changeName change=new changeName();
		model.addAttribute(change);
		return "formName";
	}
	
	@PostMapping("/changeName")
	public String update(HttpServletRequest request,@ModelAttribute changeName change) {
		List<String> errors=new ArrayList<String>();
		List <Product> products=productService.findAll();
		Boolean repetido=false;
		for(Product p:products) {
			if(p.getName().equalsIgnoreCase(change.getNewName())) {
				repetido=true;
			}
		}
		
		if(repetido) {
			errors.add("Producto ya existente");
		}
		
		if(errors.size()==0)
		{
			productService.update(change.getNewName(),change.getName());
			request.setAttribute("products", productService.findAll());
			return "index";
		}else {
			request.setAttribute("errors", errors);
			request.setAttribute("change", change);
			return "formName";
		}	
	}
}
