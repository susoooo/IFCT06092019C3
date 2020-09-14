package com.movaiva.proyecto.repository;

import java.util.List;

import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.proyecto.entity.Evento;
import com.movaiva.proyecto.entity.Organizador;


public interface EventoRepository extends CrudRepository<Evento,Integer> {
	
	@Query("select e from Evento e where e.organizador=:organizador")
	public List<Evento> findByOrganizador(Organizador organizador); 
	
}
