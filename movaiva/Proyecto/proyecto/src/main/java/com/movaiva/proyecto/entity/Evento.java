package com.movaiva.proyecto.entity;

import java.util.Date;
import java.util.HashSet;
import java.util.Set;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToMany;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

@Entity
@Table(name="evento")
public class Evento {
	
	@Id
	@GeneratedValue(strategy=GenerationType.IDENTITY)
	@Column(name="id_eve")
	private Integer eventoId;
	@Column(name="nombre_eve")
	private String nombre;
	@Column(name="direccion_eve")
	private String direccion;
	@Column(name="aforo_eve")
	private Integer aforo;
	@Column(name="inicio_eve")
	private String inicio;
	@Column(name="fin_eve")
	private String fin;
	@Column(name="estado_eve")
	private String estado;
	
	@ManyToOne
	@JoinColumn(name="id_cat")// Columna de la tabla evento que enlaza con la tabla categoria
	private Categoria categoria;
	
	@ManyToOne
	@JoinColumn(name="id_pro")// Columna de la tabla evento que enlaza con la tabla provincia
	private Provincia provincia;
	
	@ManyToOne
	@JoinColumn(name="id_org")// Columna de la tabla evento que enlaza con la tabla organizador
	private Organizador organizador;
	
	@ManyToMany(mappedBy = "eventos")
    private Set<Cliente> clientes = new HashSet<>();

	public Evento() {
		
	}

	public Evento(String nombre, String direccion, Integer aforo, String inicio, String fin, String estado,
			Categoria categoria, Provincia provincia, Organizador organizador) {
		super();
		this.nombre = nombre;
		this.direccion = direccion;
		this.aforo = aforo;
		this.inicio = inicio;
		this.fin = fin;
		this.estado = estado;
		this.categoria = categoria;
		this.provincia = provincia;
		this.organizador = organizador;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getDireccion() {
		return direccion;
	}

	public void setDireccion(String direccion) {
		this.direccion = direccion;
	}

	public Integer getAforo() {
		return aforo;
	}

	public void setAforo(Integer aforo) {
		this.aforo = aforo;
	}

	public String getInicio() {
		return inicio;
	}

	public void setInicio(String inicio) {
		this.inicio = inicio;
	}

	public String getFin() {
		return fin;
	}

	public void setFin(String fin) {
		this.fin = fin;
	}

	public String getEstado() {
		return estado;
	}

	public void setEstado(String estado) {
		this.estado = estado;
	}

	public Categoria getCategoria() {
		return categoria;
	}

	public void setCategoria(Categoria categoria) {
		this.categoria = categoria;
	}

	public Provincia getProvincia() {
		return provincia;
	}

	public void setProvincia(Provincia provincia) {
		this.provincia = provincia;
	}

	public Organizador getOrganizador() {
		return organizador;
	}

	public void setOrganizador(Organizador organizador) {
		this.organizador = organizador;
	}

	public Integer geteventoId() {
		return eventoId;
	}
	
	public void seteventoId(Integer id) {
		this.eventoId=id;
	}
	
	public Set<Cliente> getClientes() {
		return clientes;
	}

	
	@Override
	public String toString() {
		return "Evento [id=" + eventoId + ", nombre=" + nombre + ", direccion=" + direccion + ", aforo=" + aforo + ", inicio="
				+ inicio + ", fin=" + fin + ", estado=" + estado + ", categoria=" + categoria.toString() + ", provincia="
				+ provincia.toString() + ", organizador=" + organizador.toString() + "]";
	}
	
	
	
	
	
	

}
