/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.SpringRest07.rrc;

import java.util.Vector;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author Usuario
 */
@RestController
public class NumberListController {
	
	NumberList number_list = new NumberList();
	
	@GetMapping("/list")
	public String list() {
		String response =
						"<html>\n" +
						"<body>\n" +
						"<a href=\"/index\">/index</a><br>" +
						"<hr>" +
						"<a href=\"/list/add\">/add</a><br>\n" +
						"<a href=\"/list/query\">/query</a><br>\n" +
						"<a href=\"/list/remove\">/remove</a><br>\n" +
						"</body>\n" +
						"</html>";
		
		return response;
	}
	@GetMapping("/list/add")
	public String list_add(@RequestParam(name = "entry", defaultValue = "") String entry) {
		String response;
		Integer entry_number;
		
		if(entry.isEmpty()) { 
			response = "/add?entry=[0-9]+"; 
		}
		else if(entry.matches("[0-9]+")) {
			entry_number = Integer.parseInt(entry);
			number_list.add(entry_number);
			response = "number added";
		} else {
			response = "entry not a number";
		}
		
		return response;
	}
	@GetMapping("/list/remove")
	public String list_remove() {
		String response;
		Integer removed_number;
		
		if(number_list.size() > 0) {
			removed_number = number_list.remove_last();
			response = "removed last number: " + removed_number.toString();
		} else {
			response = "list is empty";
		}
		
		return response;
	}
	@GetMapping("/list/query")
	public NumberList list_query() {
		return number_list;
	}
	
}
