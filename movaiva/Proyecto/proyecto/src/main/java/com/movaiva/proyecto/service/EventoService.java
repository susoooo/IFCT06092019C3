package com.movaiva.proyecto.service;

import java.util.ArrayList;
import java.util.List;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.entity.Evento;
import com.movaiva.proyecto.repository.EventoRepository;

@Service
@Transactional
public class EventoService {
	
	@Autowired
	private EventoRepository eventoRepository;

	public EventoService(EventoRepository eventoRepository) {
		this.eventoRepository = eventoRepository;
	}
	
	public List<Evento> findAll(){
		List<Evento> eventos=new ArrayList<Evento>();
		for (Evento evento:eventoRepository.findAll()) {
			eventos.add(evento);
		}
		return eventos;
	}
	
	public void save(Evento evento) {
		eventoRepository.save(evento);
	}
	
}
