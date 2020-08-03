/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.SpringRest07.rrc;

import java.util.HashMap;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author Usuario
 */
@RestController
public class PriceListController {
	
	HashMap<String, Float> test = new HashMap<>() {
		{
			put("a", 6.6f);
			put("b", 7.7f);
			put("c", 8.8f);
		}
	};
	PriceList price_list = new PriceList(test);
	
	@GetMapping("/price_list")
	public String price_list() {
		String response =
						"<html>\n" +
						"<body>\n" +
						"<a href=\"/index\">/index</a><br>" +
						"<hr>" +
						"<a href=\"/price_list/consulta\">/consulta</a><br>\n" +
						"<a href=\"/price_list/add\">/add</a><br>\n" +
						"<a href=\"/price_list/change_money\">/change_money</a><br>\n" +
						"<a href=\"/price_list/change_name\">/change_name</a><br>\n" +
						"<hr>" +
						"<a href=\"/price_list/mas_caro\">/mas_caro</a><br>\n" +
						"<a href=\"/price_list/mas_barato\">/mas_barato</a><br>\n" +
						"<a href=\"/price_list/media\">/media</a><br>\n" +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	@GetMapping("/price_list/consulta")
	public Object consulta(@RequestParam(name = "product", defaultValue = "") String product) { 
		Object consulta = new Object();
		
		if(product.isBlank()) {
			consulta = price_list.get_all();
		} else {
			consulta = price_list.get(product);
		}
		
		return consulta;
	}@GetMapping("/price_list/add")
	public String add(@RequestParam(name = "product", defaultValue = "") String product,
	                  @RequestParam(name = "price", defaultValue = "") String price) { 
		String response = "?product=...&price=...";
		
		if(!product.isBlank() && !price.isBlank()) {
			price_list.add(product, Float.parseFloat(price));
			response = "added";
		}
		
		return response;
	}
	@GetMapping("/price_list/change_money")
	public String change_money(@RequestParam(name = "product", defaultValue = "") String product,
	                           @RequestParam(name = "price", defaultValue = "") String price) {
		String response = "?product=...&price=...";
		
		if(!product.isBlank() && !price.isBlank()) {
			if( price_list.change_price(product, Float.parseFloat(price)) ) {
				response = "changed money";
			} else {
				response = "product not found";
			}
		}
		
		return response;
	}
	@GetMapping("/price_list/change_name")
	public String change_name(@RequestParam(name = "current_name", defaultValue = "") String current_name,
	                          @RequestParam(name = "new_name", defaultValue = "") String new_name) {
		String response = "?current_name=...&new_name=...";
		
		if(!current_name.isBlank() && !new_name.isBlank()) {
			if(price_list.change_name(current_name, new_name)) {
				response = "changed name";
			} else {
				response = "product not found";
			}
		}
		
		return response;
	}
	@GetMapping("/price_list/mas_caro")
	public Object mas_caro() {
		return price_list.get_most_expensive();
	}
	@GetMapping("/price_list/mas_barato")
	public Object mas_barato() {
		return price_list.get_least_expensive();
	}
	@GetMapping("/price_list/media")
	public Object media() {
		return price_list.get_median();
	}
	
}
