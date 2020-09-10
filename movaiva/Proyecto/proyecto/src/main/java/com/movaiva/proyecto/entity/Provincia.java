package com.movaiva.proyecto.entity;

import java.util.ArrayList;
import java.util.List;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import javax.persistence.Table;

@Entity
@Table(name="provincia")
public class Provincia {
	
	
	@Id
	@GeneratedValue(strategy=GenerationType.IDENTITY)
	@Column(name="id_pro")
	private Integer id;
	@Column(name="nombre_pro")
	private String nombre;
	
	@OneToMany(mappedBy="provincia" )
	private List<Evento> listaEvento;
	
	public Provincia() {
		this.listaEvento=new ArrayList<Evento>();
	}

	public Integer getId() {
		return id;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public List<Evento> getListaEvento() {
		return listaEvento;
	}
	
	public void addEvento(Evento e) {
		this.listaEvento.add(e);		
	}

	public void setListaEvento(List<Evento> listaEvento) {
		this.listaEvento = listaEvento;
	}

	@Override
	public String toString() {
		return "Provincia [id=" + id + ", nombre=" + nombre + ", listaEvento=" + listaEvento.toString() + "]";
	}
	
}
