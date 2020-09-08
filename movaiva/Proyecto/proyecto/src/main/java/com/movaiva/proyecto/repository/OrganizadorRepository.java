package com.movaiva.proyecto.repository;

import java.util.Optional;

import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.proyecto.entity.Organizador;

public interface OrganizadorRepository extends CrudRepository<Organizador,Integer> {
	
	@Query("select o.id from Organizador o where o.usuario=:usuario and o.email=:email")
	public Integer findId(String usuario,String email);
	@Query("select o from Organizador o where o.id=:id")
	public Optional<Organizador> findById(Integer id);
	@Modifying
	@Query("update Organizador o set o.nombre=:nombre, o.apellidos=:apellidos, o.contrasena=:password, o.cuentaBancaria=:cuenta where o.id=:id")
	public void update(String nombre,String apellidos,String password,String cuenta,Integer id);

}
