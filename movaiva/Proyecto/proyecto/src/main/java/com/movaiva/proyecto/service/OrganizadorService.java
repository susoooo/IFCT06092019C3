package com.movaiva.proyecto.service;

import java.util.ArrayList;
import java.util.List;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.entity.Organizador;
import com.movaiva.proyecto.repository.OrganizadorRepository;

@Service
@Transactional
public class OrganizadorService {
	
	@Autowired
	private OrganizadorRepository organizadorRepository;

	public OrganizadorService(OrganizadorRepository organizadorRepository) {
		this.organizadorRepository = organizadorRepository;
	}
	
	public void save(Organizador organizador) {
		organizadorRepository.save(organizador);
	}
	
	public List<Organizador> findAll(){
		List<Organizador> organizadores=new ArrayList<Organizador>();
		for(Organizador organizador:organizadorRepository.findAll()) {
			organizadores.add(organizador);
		}
		return organizadores;		
	}
	

}
