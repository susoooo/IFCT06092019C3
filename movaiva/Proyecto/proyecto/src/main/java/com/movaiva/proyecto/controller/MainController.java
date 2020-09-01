package com.movaiva.proyecto.controller;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class MainController {
	
	@GetMapping("/")
	public String home(HttpServletRequest request,HttpSession session) {
		System.out.println(session.getAttributeNames().toString());
		
		return "index";
	}

}
