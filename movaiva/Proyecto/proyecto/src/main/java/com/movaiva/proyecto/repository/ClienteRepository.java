package com.movaiva.proyecto.repository;

import java.util.Optional;

import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.proyecto.entity.Cliente;

public interface ClienteRepository extends CrudRepository<Cliente,Integer> {
	
	@Query("select c.id from Cliente c where c.usuario=:usuario and c.email=:email")
	public Integer findId(String usuario,String email);
	@Query("select c from Cliente c where c.id=:id")
	public Optional<Cliente> findById(Integer id);
	@Modifying
	@Query("update Cliente c set c.nombre=:nombre, c.apellidos=:apellidos, c.contrasena=:password where c.id=:id")
	public void update(String nombre,String apellidos,String password,Integer id);
	
}
