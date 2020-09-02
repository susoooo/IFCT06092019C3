package com.movaiva.proyecto.repository;

import org.springframework.data.repository.CrudRepository;

import com.movaiva.proyecto.entity.Cliente;

public interface ClienteRepository extends CrudRepository<Cliente,Integer> {
	
}
