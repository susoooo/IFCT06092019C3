package com.movaiva.proyecto.controller;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;

import com.movaiva.proyecto.entity.Cliente;
import com.movaiva.proyecto.entity.Organizador;
import com.movaiva.proyecto.model.Usuario;
import com.movaiva.proyecto.service.ClienteService;
import com.movaiva.proyecto.service.OrganizadorService;

@Controller
public class MainController {

	@Autowired
	private ClienteService clienteService;
	@Autowired
	private OrganizadorService organizadorService;

	@GetMapping("/")
	public String home(HttpSession session) {
		Iterator<String> iter = session.getAttributeNames().asIterator();
		while (iter.hasNext()) {
			System.out.println(iter.next());
		}
		return "index";
	}

	@GetMapping("/registroUsuario")
	public String registroUsuario(Model model) {
		model.addAttribute("usuario", new Usuario());
		return "formRegistro";
	}

	@PostMapping("/registrar")
	public String registrar(HttpServletRequest request,@ModelAttribute Usuario usuario) {
		System.out.println(">>>>Registrar: Usuario -- "+usuario.toString());
		List <Cliente> clientes=clienteService.findAll();
		List <Organizador> organizadores=organizadorService.findAll();
		List <String> errores=new ArrayList<String>();
		for(Cliente cliente:clientes) {
			if(usuario.getNick().equals(cliente.getUsuario())) {
				errores.add("El usuario ya esta en uso");
			}
			if(usuario.getEmail().equals(cliente.getEmail())) {
				errores.add("El correo ya esta registrado");
			}
			if(errores.size()>0) {
				break;
			}
		}
		
		if(errores.size()==0) {
			for (Organizador organizador : organizadores) {
				if (usuario.getNick().equals(organizador.getUsuario())) {
					errores.add("El usuario ya esta en uso");
				}
				if (usuario.getEmail().equals(organizador.getEmail())) {
					errores.add("El correo ya esta registrado");
				}
				if (errores.size() > 0) {
					break;
				}
			}
		}
				
		if(errores.size()>0)
		{
			request.setAttribute("errores", errores);
			request.setAttribute("usuario", usuario);
			return "formRegistro";
		}else
		{
			if (usuario.getTipo().equalsIgnoreCase("cliente")) {
				Cliente cliente = new Cliente(usuario.getNick(), usuario.getPassword(), usuario.getEmail());
				System.out.println(">>>>Registrar: Cliente --" + cliente.toString());
				clienteService.save(cliente);
				Integer id = clienteService.findId(usuario.getNick(), usuario.getEmail());
				System.out.println(">>>>Registrar: Id Usuario --" + id);
				usuario.setId(id);
			} else {
				Organizador organizador = new Organizador(usuario.getNick(), usuario.getPassword(), usuario.getEmail());
				System.out.println(">>>>Registrar: Organizador --" + organizador.toString());
				organizadorService.save(organizador);
				Integer id = organizadorService.findId(usuario.getNick(), usuario.getEmail());
				System.out.println(">>>>Registrar: Id Usuario --" + id);
				usuario.setId(id);
			}
			request.setAttribute("usuario", usuario);
			return "index";
		}
	}

	@GetMapping("/inicioSesion")
	public String incioSesion(Model model) {
		model.addAttribute("usuario", new Usuario());
		return "formInicio";
	}

	@PostMapping("/iniciar")
	private String iniciar(HttpServletRequest request,@ModelAttribute Usuario usuario) {
		System.out.println(">>>>Iniciar: Usuario -- "+usuario.toString());
		List <Cliente> clientes=clienteService.findAll();
		List <Organizador> organizadores=organizadorService.findAll();
		boolean encontrado=false;
		List <String> errores=new ArrayList<String>();
		for(Cliente cliente:clientes) {
			if(usuario.getNick().equals(cliente.getUsuario())) {
				if(usuario.getPassword().equals(cliente.getContrasena())) {
					usuario.setId(cliente.getId());
					usuario.setTipo("cliente");
					encontrado=true;
				}
			}
			if(encontrado) {
				break;
			}
		}
		
		if(!encontrado) {
			for (Organizador organizador : organizadores) {
				if (usuario.getNick().equals(organizador.getUsuario())) {
					if(usuario.getPassword().equals(organizador.getContrasena())) {
						usuario.setId(organizador.getId());
						usuario.setTipo("organizador");
						encontrado=true;
					}
				}
				if (encontrado) {
					break;
				}
			}
		}
				
		if(!encontrado)
		{
			errores.add("Usuario o contraseña incorrectos");
			request.setAttribute("errores", errores);
			request.setAttribute("usuario", usuario);
			return "formInicio";
		}else
		{			
			
			request.setAttribute("usuario", usuario);
			return "index";
		}
	}
	
	@GetMapping("/cerrarSesion")
	private String cerrarSesion(Model model) {
		model.addAttribute("usuario",new Usuario());
		return "index";
	}
}
