/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.myMySQLDemo;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;

/**
 *
 * @author Usuario
 */
@Controller
@RequestMapping(path="/demo")
public class MainController {
	
	@Autowired
	private UserRepository user_repository;
	
	@PostMapping(path="/add")
	public @ResponseBody String add_new_user(@RequestParam String name, @RequestParam String email) {
		User user = new User();
		user.set_name(name);
		user.set_email(email);
		user_repository.save(user);
		
		return "Saved";
	}
	
	@GetMapping(path="/add")
	public @ResponseBody Iterable<User> get_all_users() {
		return user_repository.findAll();
	}
	
}
