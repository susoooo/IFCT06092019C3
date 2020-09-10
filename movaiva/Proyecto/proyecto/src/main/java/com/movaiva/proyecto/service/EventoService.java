package com.movaiva.proyecto.service;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.repository.EventoRepository;

@Service
@Transactional
public class EventoService {
	
	@Autowired
	private EventoRepository eventoRepository;

	public EventoService(EventoRepository eventoRepository) {
		this.eventoRepository = eventoRepository;
	}
	
	
	
}
