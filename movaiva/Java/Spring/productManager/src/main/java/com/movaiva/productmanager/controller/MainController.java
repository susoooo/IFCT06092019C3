package com.movaiva.productmanager.controller;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.concurrent.atomic.AtomicInteger;

import javax.servlet.http.HttpServletRequest;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

import com.movaiva.productmanager.entity.Product;
import com.movaiva.productmanager.service.ProductService;

@Controller
public class MainController {
	
	@Autowired
	private ProductService productService;

	@GetMapping("/")
	public String home(HttpServletRequest request,Model model) {
		Product productSearch=new Product();
		request.setAttribute("products", productService.findAll());
		model.addAttribute("productSearch", new Product());
		return "index";
	}
	
	@GetMapping("/formAdd")
	public String newProduct(Model model) {
		model.addAttribute("product",new Product());
		model.addAttribute("productSearch", new Product());
		return "formAdd";
	}
	
	@PostMapping("/addProduct")
	public String addProduct(HttpServletRequest request,@ModelAttribute Product product,Model model) {
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
		
		model.addAttribute("productSearch", new Product());
		
		if(errors.size()==0)
		{
			
			productService.save(product);
			request.setAttribute("products", productService.findAll());			
			return "index";
		}else {
			request.setAttribute("errors", errors);
			request.setAttribute("product", product);
			return "formAdd";
		}	
	}
	
	@GetMapping("/formEdit")
	public String updateName(@RequestParam Integer id,Model model)	{
		Optional<Product> product=productService.findById(id);
		model.addAttribute("product",product);
		model.addAttribute("prodcutSearch",new Product());
		return "formEdit";
	}
	
	@PostMapping("/editProduct")
	public String update(HttpServletRequest request,@ModelAttribute Product product,Model model) {
		List<String> errors=new ArrayList<String>();
		List <Product> products=productService.findAll();
		Boolean repetido=false;
		for(Product p:products) {
			if((p.getName().equalsIgnoreCase(product.getName()))&&(p.getId()!=product.getId())) {
				repetido=true;				
			}
		}
		
		if(repetido) {
			errors.add("Producto ya existente");
		}
		
		model.addAttribute("productSearch", new Product());
		
		if(errors.size()==0)
		{
			productService.update(product.getId(),product.getName(),product.getPrize());
			request.setAttribute("products", productService.findAll());
			return "index";
		}else {
			request.setAttribute("errors", errors);
			request.setAttribute("product", product);
			return "formEdit";
		}	
	}
	
	@PostMapping("/searchProduct")
	public String searchProduct(HttpServletRequest request, @ModelAttribute Product product,Model model){
		request.setAttribute("products", productService.findByName(product.getName()));
		model.addAttribute("productSearch", new Product());
		return "index";
	}
	
	@GetMapping("/statistics")
	public String statistics(HttpServletRequest request,Model model) {
		Product maxPrize=null;
		Product minPrize=null;
		List<String> statistics=new ArrayList<String>();
		double aux=0;
		double sum=0;
		List <Product> products=productService.findAll();
		for(Product product:products) {
			if(product.getPrize()>aux) {
				aux=product.getPrize();
				maxPrize=product;
			}
			sum+=product.getPrize();
		}
		for(Product product:products) {
			if(product.getPrize()<aux) {
				aux=product.getPrize();
				minPrize=product;
			}
		}
		statistics.add(String.format("El producto con mayor precio es %s %.2f", maxPrize.getName(),maxPrize.getPrize()));
		statistics.add(String.format("El producto con menor precio es %s %.2f", minPrize.getName(),minPrize.getPrize()));
		statistics.add(String.format("La media de todos los precios es %.2f", (sum/products.size())));
		
		model.addAttribute("productSearch", new Product());
		request.setAttribute("statistics", statistics);
		return "statistics";
	}
	
}
