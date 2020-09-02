package com.movaiva.proyecto.controller;

import java.util.Iterator;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

import com.movaiva.proyecto.model.Usuario;

@Controller
public class MainController {
	
	@GetMapping("/")
	public String home(HttpSession session) {
		Iterator<String> iter=session.getAttributeNames().asIterator();
		while(iter.hasNext()) {
			System.out.println(iter.next());
		}
		return "index";
	}
	
	
	@GetMapping("/registroUsuario")
	public String registroUsuario(Model model) {
		model.addAttribute("usuario",new Usuario());
		
		return "formRegistro";
	}
	

}
