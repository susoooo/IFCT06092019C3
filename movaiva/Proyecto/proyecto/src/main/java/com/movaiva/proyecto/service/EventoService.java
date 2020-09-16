package com.movaiva.proyecto.service;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.entity.Evento;
import com.movaiva.proyecto.entity.Organizador;
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
	
	public Optional<Evento> findById(Integer id) {
		return eventoRepository.findById(id);
	}
	
	public List<Evento> findByOrganizador(Organizador organizador){
		List<Evento> eventos=new ArrayList<Evento>();
		for (Evento evento:eventoRepository.findByOrganizador(organizador)) {
			eventos.add(evento);
		}
		return eventos;
	}
	
	public void update(Evento evento) {
		eventoRepository.update(evento.getNombre(), evento.getDireccion(), evento.getProvincia(), evento.getCategoria(), evento.getAforo(), evento.getInicio(), evento.getFin(), evento.geteventoId());
	}
	
	public void delete(Evento evento) {
		eventoRepository.updateEstado(evento.geteventoId());
	}
}
