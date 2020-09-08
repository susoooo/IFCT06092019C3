package com.movaiva.proyecto.repository;

import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.proyecto.entity.Organizador;

public interface OrganizadorRepository extends CrudRepository<Organizador,Integer> {
	
	@Query("select o.id from Organizador o where o.usuario=:usuario and o.email=:email")
	public Integer findId(String usuario,String email);

}
