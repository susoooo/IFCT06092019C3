package com.movaiva.proyecto.repository;

import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.proyecto.entity.Cliente;

public interface ClienteRepository extends CrudRepository<Cliente,Integer> {
	
	@Query("select c.id from Cliente c where c.usuario=:usuario and c.email=:email")
	public Integer findId(String usuario,String email);
	
}
