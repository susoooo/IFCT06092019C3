package com.movaiva.proyecto.repository;

import java.util.List;
import java.util.Optional;

import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.proyecto.entity.Categoria;
import com.movaiva.proyecto.entity.Evento;
import com.movaiva.proyecto.entity.Organizador;
import com.movaiva.proyecto.entity.Provincia;


public interface EventoRepository extends CrudRepository<Evento,Integer> {
	
	@Query("select e from Evento e where e.estado='A' and e.organizador=:organizador")
	public List<Evento> findByOrganizador(Organizador organizador);
	@Query("select e from Evento e where e.id=:id")
	public Optional<Evento> findById(Integer id);
	@Modifying
	@Query("update Evento e set e.nombre=:nombre, e.direccion=:direccion, e.categoria=:categoria, e.provincia=:provincia, e.aforo=:aforo, e.inicio=:inicio, e.fin=:fin where e.id=:id")
	public void update(String nombre,String direccion,Provincia provincia,Categoria categoria,Integer aforo,String inicio,String fin,Integer id);	
	@Modifying
	@Query("update Evento e set e.estado='D' where e.id=:id")
	public void updateEstado(Integer id);
}
