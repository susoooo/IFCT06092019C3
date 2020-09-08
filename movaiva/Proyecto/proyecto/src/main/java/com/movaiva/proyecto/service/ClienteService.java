package com.movaiva.proyecto.service;

import java.util.ArrayList;
import java.util.List;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.entity.Cliente;
import com.movaiva.proyecto.repository.ClienteRepository;

@Service
@Transactional
public class ClienteService {
	
	@Autowired
	private ClienteRepository clienteRepository;

	public ClienteService(ClienteRepository clienteRepository) {
		this.clienteRepository = clienteRepository;
	}
	
	public void save(Cliente cliente) {
		clienteRepository.save(cliente);
	}
	
	public List<Cliente> findAll(){
		List<Cliente> clientes=new ArrayList<Cliente>();
		for (Cliente cliente:clienteRepository.findAll()) {
			clientes.add(cliente);
		}
		return clientes;
	}
	
	public Integer findId(String usuario,String email) {
		return clienteRepository.findId(usuario, email);
	}
}
