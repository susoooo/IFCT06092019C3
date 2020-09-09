package com.movaiva.proyecto.entity;

import java.util.Date;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

@Entity
@Table(name="evento")
public class Evento {
	
	@Id
	@GeneratedValue(strategy=GenerationType.IDENTITY)
	@Column(name="id_eve")
	private Integer id;
	@Column(name="nombre_eve")
	private String nombre;
	@Column(name="direccion_eve")
	private String direccion;
	@Column(name="aforo_eve")
	private Integer aforo;
	@Column(name="inicio_eve")
	private Date inicio;
	@Column(name="fin_eve")
	private Date fin;
	@Column(name="estado_eve")
	private String estado;
	
	@ManyToOne
	@JoinColumn(name="id_cat")
	private Categoria categoria;
	
	@ManyToOne
	@JoinColumn(name="id_pro")
	private Provincia provincia;
	
	@ManyToOne
	@JoinColumn(name="id_org")
	private Organizador organizador;

	public Evento() {
		
	}

	public Evento(String nombre, String direccion, Integer aforo, Date inicio, Date fin, String estado,
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

	public Date getInicio() {
		return inicio;
	}

	public void setInicio(Date inicio) {
		this.inicio = inicio;
	}

	public Date getFin() {
		return fin;
	}

	public void setFin(Date fin) {
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

	public Integer getId() {
		return id;
	}
	

	@Override
	public String toString() {
		return "Evento [id=" + id + ", nombre=" + nombre + ", direccion=" + direccion + ", aforo=" + aforo + ", inicio="
				+ inicio + ", fin=" + fin + ", estado=" + estado + ", categoria=" + categoria + ", provincia="
				+ provincia + ", organizador=" + organizador + "]";
	}
	
	
	
	
	
	

}
