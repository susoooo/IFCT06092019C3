package com.movaiva.proyecto.controller;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Optional;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

import com.movaiva.proyecto.entity.Cliente;
import com.movaiva.proyecto.entity.Evento;
import com.movaiva.proyecto.entity.Organizador;
import com.movaiva.proyecto.model.Usuario;
import com.movaiva.proyecto.service.CategoriaService;
import com.movaiva.proyecto.service.ClienteService;
import com.movaiva.proyecto.service.EventoService;
import com.movaiva.proyecto.service.OrganizadorService;
import com.movaiva.proyecto.service.ProvinciaService;

@Controller
public class MainController {

	@Autowired
	private ClienteService clienteService;
	@Autowired
	private OrganizadorService organizadorService;
	@Autowired
	private CategoriaService categoriaService;
	@Autowired
	private ProvinciaService provinciaService;
	@Autowired
	private EventoService eventoService;

	@GetMapping("/")
	public String home(HttpServletRequest request,HttpSession session,Model model) {
		Usuario usuario=(Usuario) session.getAttribute("usuario");
		List<Evento> eventos=new ArrayList<>();
		request.getSession().setAttribute("usuario", usuario);
		model.addAttribute("usuario", usuario);
		System.out.println(">>>>Home: Sesion -- "+session.getAttribute("usuario"));
		eventos=cargarEventos(usuario);
		model.addAttribute("eventos", eventos);
		model.addAttribute("categorias",categoriaService.findAll());
		model.addAttribute("provincias",provinciaService.findAll());		
		model.addAttribute("buscarEvento", new Evento());
		return "index";
	}

	@GetMapping("/registroUsuario")
	public String registroUsuario(Model model) {
		model.addAttribute("usuario", new Usuario());
		return "formRegistro";
	}

	@PostMapping("/registrar")
	public String registrar(HttpServletRequest request,@ModelAttribute Usuario usuario,Model model) {
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
				cliente.setEstado("A");
				System.out.println(">>>>Registrar: Cliente --" + cliente.toString());
				clienteService.save(cliente);
				Integer id = clienteService.findId(usuario.getNick(), usuario.getEmail());
				System.out.println(">>>>Registrar: Id Usuario --" + id);
				usuario.setId(id);
			} else {
				Organizador organizador = new Organizador(usuario.getNick(), usuario.getPassword(), usuario.getEmail());
				organizador.setEstado("A");
				System.out.println(">>>>Registrar: Organizador --" + organizador.toString());
				organizadorService.save(organizador);
				Integer id = organizadorService.findId(usuario.getNick(), usuario.getEmail());
				System.out.println(">>>>Registrar: Id Usuario --" + id);
				usuario.setId(id);
			}
			request.getSession().setAttribute("usuario", usuario);
			//model.addAttribute("buscarEvento", new Evento());
			return "redirect:/";
		}
	}

	@GetMapping("/inicioSesion")
	public String incioSesion(Model model) {
		model.addAttribute("usuario", new Usuario());
		return "formInicio";
	}

	@PostMapping("/iniciar")
	private String iniciar(HttpServletRequest request,@ModelAttribute Usuario usuario) {		
		List <Cliente> clientes=clienteService.findAll();
		List <Organizador> organizadores=organizadorService.findAll();
		boolean encontrado=false;
		boolean borrado=false;
		List <String> errores=new ArrayList<String>();
		System.out.println(">>>>Iniciar: Usuario -- "+usuario.toString());
		for(Cliente cliente:clientes) {
			if((usuario.getNick().equals(cliente.getUsuario())) && (usuario.getPassword().equals(cliente.getContrasena()))) {
				if(cliente.getEstado()!=null && cliente.getEstado().equalsIgnoreCase("A")) {
					usuario.setId(cliente.getId());
					usuario.setEmail(cliente.getEmail());
					usuario.setNombre(cliente.getNombre());
					usuario.setApellidos(cliente.getApellidos());
					usuario.setTipo("cliente");
					encontrado=true;
				}else {
					borrado=true;
				}
			}
			if(encontrado) {
				break;
			}
		}
		
		if(!encontrado) {
			for (Organizador organizador : organizadores) {
				if (usuario.getNick().equals(organizador.getUsuario()) && (usuario.getPassword().equals(organizador.getContrasena()))) {
					if(organizador.getEstado().equalsIgnoreCase("A")) {
						usuario.setId(organizador.getId());
						usuario.setEmail(organizador.getEmail());
						usuario.setNombre(organizador.getNombre());
						usuario.setApellidos(organizador.getApellidos());
						usuario.setCuentaBancaria(organizador.getCuentaBancaria());
						usuario.setTipo("organizador");
						encontrado=true;
					}else {
						
						borrado=true;
					}
				}
				if (encontrado) {
					break;
				}
			}
		}
				
		if(!encontrado)
		{
			if(borrado) {
				errores.add("El usuario fue borrado");
			}else{
				errores.add("Usuario o contraseña incorrectos");
			}
			request.setAttribute("errores", errores);
			request.setAttribute("usuario", usuario);
			return "formInicio";
		}else
		{			
			System.out.println(">>>>Iniciar: Usuario -- "+usuario.toString());
			request.getSession().setAttribute("usuario", usuario);
			return "redirect:/";
		}
	}
	
	@GetMapping("/cerrarSesion")
	private String cerrarSesion(HttpServletRequest request) {
		request.getSession().invalidate();
		//model.addAttribute("buscarEvento", new Evento());
		return "redirect:/";
	}
	
	@GetMapping("/formEdicion")
	private String formEdicion(HttpServletRequest request,Model model) {
		model.addAttribute("usuario",request.getSession().getAttribute("usuario"));
		System.out.println(">>>> FromEdicion: Usuario -- "+request.getSession().getAttribute("usuario"));
		return "formEdicion";
	}
	
	@PostMapping("/editar")
	private String editar(HttpServletRequest request,@ModelAttribute Usuario usuario) {
		System.out.println(">>>> Editar: Usuario -- "+usuario.toString());
		System.out.println(">>>> Editar: Sesión -- "+request.getSession().getAttribute("usuario").toString());
		if(request.getSession().getAttribute("usuario")!=null) {
			if(usuario.getTipo().equalsIgnoreCase("cliente")) {
				Optional<Cliente> opCliente=clienteService.findById(usuario.getId());
				Cliente cliente=opCliente.get();
				cliente.setNombre(usuario.getNombre());
				cliente.setApellidos(usuario.getApellidos());
				if(usuario.getPassword()!=null && !usuario.getPassword().equalsIgnoreCase("")) {
					cliente.setContrasena(usuario.getPassword());
				}
				clienteService.update(cliente);			
			}else {
				Optional<Organizador> opOrganizador=organizadorService.findById(usuario.getId());
				Organizador organizador=opOrganizador.get();
				organizador.setNombre(usuario.getNombre());
				organizador.setApellidos(usuario.getApellidos());
				organizador.setCuentaBancaria(usuario.getCuentaBancaria());
				if(usuario.getPassword()!=null && !usuario.getPassword().equalsIgnoreCase("")) {
					organizador.setContrasena(usuario.getPassword());
				}
				organizadorService.update(organizador);
			}
			
			request.getSession().setAttribute("usuario", usuario);
			System.out.println(">>>> Editar: Sesión -- "+request.getSession().getAttribute("usuario").toString());			
		}
		//model.addAttribute("buscarEvento", new Evento());
		return "redirect:/";
	}
	
	@GetMapping("/formCrearEvento")
	public String formCrearEvento(HttpServletRequest request,Model model) {
		model.addAttribute("usuario",request.getSession().getAttribute("usuario"));
		model.addAttribute("categorias",categoriaService.findAll());
		model.addAttribute("provincias",provinciaService.findAll());
		model.addAttribute("evento",new Evento());
		System.out.println(">>>> FromCrearEvento: Usuario -- "+request.getSession().getAttribute("usuario"));
		System.out.println(">>>> FromCrearEvento: Usuario -- "+model.getAttribute("categorias"));
		System.out.println(">>>> FromCrearEvento: Usuario -- "+model.getAttribute("provincias"));
		if(request.getSession().getAttribute("usuario")!=null) {
			return "formCrearEvento";	
		}else {
			//model.addAttribute("buscarEvento", new Evento());
			return "redirect:/";
		}
		
	}
	
	@PostMapping("/crearEvento")
	public String crearEvento(HttpServletRequest request,@ModelAttribute Evento evento) {
		//System.out.println(">>>> CrearEvento: Evento -- "+evento.toString());
		Usuario usuario=(Usuario) request.getSession().getAttribute("usuario");
		if(usuario!=null)
		{
			System.out.println(">>>> CrearEvento: Sesión -- "+usuario.toString());
			Optional<Organizador> opOrganizador=organizadorService.findById(usuario.getId());
			Organizador organizador=opOrganizador.get();
			System.out.println(">>>> CrearEvento: Organizador -- "+organizador);
			evento.setOrganizador(organizador);
			evento.setEstado("A");
			eventoService.save(evento);
			request.getSession().setAttribute("usuario", usuario);			
		}
		//model.addAttribute("buscarEvento", new Evento());
		return "redirect:/";
	}
	/*
	@GetMapping("/misEventos")
	public String misEventos(HttpServletRequest request,Model model) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		if(usuario!=null) {
			System.out.println(">>>> MisEventos: Sesión -- "+usuario.toString());
			Optional<Organizador> opOrganizador=organizadorService.findById(usuario.getId());
			Organizador organizador=opOrganizador.get();
			System.out.println(">>>> MisEventos: Organizador -- "+organizador.toString());
			List<Evento> misEventos=eventoService.findByOrganizador(organizador);
			model.addAttribute("eventos",misEventos);
			model.addAttribute("usuario",usuario);				
			return "misEventos";
		}else{
			//model.addAttribute("buscarEvento", new Evento());
			return "redirect:/";
		}
	}
	*/
	@GetMapping("/formEditarEvento")
	public String formEditarEvento(@RequestParam Integer id,HttpServletRequest request, Model model) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		if(usuario!=null) {		
			System.out.println(">>>> formEditarEvento: Sesión -- "+usuario.toString());
			Optional<Evento> opEvento=eventoService.findById(id);
			Evento evento=opEvento.get();
			System.out.println(">>>> formEditarEvento: Evento -- "+evento.toString());
			model.addAttribute("evento",evento);
			model.addAttribute("usuario", usuario);
			model.addAttribute("categorias",categoriaService.findAll());
			model.addAttribute("provincias",provinciaService.findAll());
			return "formEditarEvento";
		}else {
			//model.addAttribute("buscarEvento", new Evento());
			return "redirect:/";
		}
	}
	
	@PostMapping("/editarEvento")
	public String editarEvento(HttpServletRequest request,@ModelAttribute Evento evento) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		if(usuario!=null) {
			System.out.println(">>>> EditarEvento: Sesión -- "+usuario.toString());
			System.out.println(">>>> EditarEvento: Evento -- "+evento.toString());
			eventoService.update(evento);
			request.getSession().setAttribute("usuario", usuario);			
		}
		return "redirect:/misEventos";
	}
	
	@PostMapping("/editarEstado")
	public String editarEstado(HttpServletRequest request,@ModelAttribute Evento evento) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		if(usuario!=null) {	
			System.out.println(">>>> EditarEstado: Sesión -- "+usuario.toString());
			//System.out.println(">>>> EditarEstado: Evento -- "+evento.toString());
			eventoService.delete(evento);
			request.getSession().setAttribute("usuario", usuario);			
		}
		return "redirect:/misEventos";
	}
	
	
	@GetMapping("/unirseEvento")
	public String unirseEvento(@RequestParam Integer id,HttpServletRequest request, Model model) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		if(usuario!=null) {		
			System.out.println(">>>> UnisreEvento: Sesión -- "+usuario.toString());
			Optional<Evento> opEvento=eventoService.findById(id);
			Evento evento=opEvento.get();
			System.out.println(">>>> UnirseEvento: Evento -- "+evento.toString());
			Cliente cliente=clienteService.findById(usuario.getId()).get();
			cliente.addEvento(evento);
			clienteService.save(cliente);
			model.addAttribute("usuario", usuario);			
		}
		//model.addAttribute("buscarEvento", new Evento());
		return "redirect:/";
	}
	
	
	@GetMapping("/misReservas")
	public String misReservas(HttpServletRequest request,Model model) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		boolean esta;
		if(usuario!=null) {
			System.out.println(">>>> MisReservas: Sesión -- "+usuario.toString());
			Cliente cliente=clienteService.findById(usuario.getId()).get();
			System.out.println(">>>> MisEventos: Cliente -- "+cliente.toString());
			List<Evento> eventos=eventoService.findAll();
			List<Evento> misEventos=new ArrayList<Evento>();;
			for(Evento e:eventos) {
				esta=false;
				for(Cliente c: e.getClientes()) {
					if(cliente==c) {
						esta=true;
					}
				}
				if(esta) {
					misEventos.add(e);
				}
			}
			model.addAttribute("eventos",misEventos);
			model.addAttribute("usuario",usuario);				
			return "misReservas";
		}else{
			//model.addAttribute("buscarEvento", new Evento());
			return "redirect:/";
		}
	}
	
	@GetMapping("/borrarEvento")
	public String borrarEvento(@RequestParam Integer id,HttpServletRequest request, Model model) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		//model.addAttribute("buscarEvento", new Evento());
		if(usuario!=null) {
			Cliente cliente=clienteService.findById(usuario.getId()).get();
			Evento evento=eventoService.findById(id).get();
			cliente.removeEvento(evento);
			clienteService.update(cliente);
			request.getSession().setAttribute("usuario", usuario);
			return "redirect:/misReservas";	
		}else {			
			return "redirect:/";	
		}		
	}
	
	@GetMapping("/listarParticipantes")
	public String listarParticipantes(@RequestParam Integer id,HttpServletRequest request, Model model) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");
		//model.addAttribute("buscarEvento", new Evento());
		if(usuario!=null) {
			Evento evento=eventoService.findById(id).get();
			model.addAttribute("participantes",evento.getClientes());
			request.getSession().setAttribute("usuario", usuario);
			return "listarParticipantes";	
		}else {			
			return "redirect:/";	
		}
	}
	
	@PostMapping("/buscar")
	public String buscar(HttpServletRequest request, @ModelAttribute Evento buscarEvento, Model model) {
		Usuario usuario=(Usuario)request.getSession().getAttribute("usuario");		
		List<Evento> eventoCargados=new ArrayList<>();
		List<Evento> eventos=new ArrayList<>();
		List<String> errores=new ArrayList<>();
		eventoCargados=cargarEventos(usuario);
		request.getSession().setAttribute("usuario", usuario);
		model.addAttribute("usuario", usuario);
		System.out.println(">>>> Buscar: Sesion -- "+request.getSession().getAttribute("usuario"));
		//System.out.println(">>>> Buscar: buscarEvento -- "+buscarEvento.toString());
		if(buscarEvento.getNombre()=="" && buscarEvento.getCategoria()==null && buscarEvento.getProvincia()==null) {
			errores.add("Parámetros insuficientes");
			model.addAttribute("errores", errores);
		}else {
			for (Evento e : eventoCargados) {
				if (buscarEvento.getNombre() != "") {
					if (buscarEvento.getCategoria() != null) {
						if (buscarEvento.getProvincia() != null) {
							if (buscarEvento.getNombre().equalsIgnoreCase(e.getNombre())
									&& buscarEvento.getCategoria() == e.getCategoria()
									&& buscarEvento.getProvincia() == e.getProvincia()) {
								eventos.add(e);
							}
						} else {
							if (buscarEvento.getNombre().equalsIgnoreCase(e.getNombre())
									&& buscarEvento.getCategoria() == e.getCategoria()) {
								eventos.add(e);
							}
						}
					} else {
						if (buscarEvento.getProvincia() != null) {
							if (buscarEvento.getNombre().equalsIgnoreCase(e.getNombre())
									&& buscarEvento.getProvincia() == e.getProvincia()) {
								eventos.add(e);
							}
						} else {
							if (buscarEvento.getNombre().equalsIgnoreCase(e.getNombre())) {
								eventos.add(e);
							}
						}
					}
				} else {
					if (buscarEvento.getCategoria() != null) {
						if (buscarEvento.getProvincia() != null) {
							if (buscarEvento.getCategoria() == e.getCategoria()
									&& buscarEvento.getProvincia() == e.getProvincia()) {
								eventos.add(e);
							}
						} else {
							if (buscarEvento.getCategoria() == e.getCategoria()) {
								eventos.add(e);
							}
						}
					} else {
						if (buscarEvento.getProvincia() != null) {
							if (buscarEvento.getProvincia() == e.getProvincia()) {
								eventos.add(e);
							}
						}
					}
				}
			}
		}
		model.addAttribute("eventos", eventos);
		model.addAttribute("categorias",categoriaService.findAll());
		model.addAttribute("provincias",provinciaService.findAll());		
		model.addAttribute("buscarEvento", new Evento());
		return "index";
	}
	
	public List<Evento> cargarEventos(Usuario usuario){
		boolean esta=false;
		List<Evento> eventos=new ArrayList<>();
		if(usuario!=null) {			
			if(usuario.getTipo().equalsIgnoreCase("cliente")) {
				Cliente cliente=clienteService.findById(usuario.getId()).get();
				List<Evento> misEventos=eventoService.findAll();
				for(Evento e:misEventos) {
					esta=false;
					for(Cliente c: e.getClientes()) {
						if(cliente==c) {
							esta=true;
						}
					}
					if(!esta) {
						eventos.add(e);
					}
				}
			}else {
				Organizador organizador=organizadorService.findById(usuario.getId()).get();
				eventos=eventoService.findByOrganizador(organizador);
			}
		}else {
			eventos=eventoService.findAll();
		}
		return eventos;
	}
}
