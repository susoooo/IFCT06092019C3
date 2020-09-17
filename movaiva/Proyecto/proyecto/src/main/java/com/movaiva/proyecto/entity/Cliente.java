package com.movaiva.proyecto.entity;

import java.util.HashSet;
import java.util.Set;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.JoinTable;
import javax.persistence.ManyToMany;
import javax.persistence.Table;

@Entity
@Table(name="cliente")
public class Cliente {
	@Id
	@GeneratedValue(strategy=GenerationType.IDENTITY)
	@Column(name="id_cli")
	private Integer id;
	@Column(name="nombre_cli")
	private String nombre;
	@Column(name="apellidos_cli")
	private String apellidos;
	@Column(name="usuario_cli")
	private String usuario;
	@Column(name="email_cli")
	private String email;
	@Column(name="contrasena_cli")
	private String contrasena;
	@Column(name="estado_cli")
	private String estado;
	
	@ManyToMany
	@JoinTable(name="participa",
			joinColumns = {
                    @JoinColumn(name = "id_cli", referencedColumnName = "id_cli",
                            nullable = false, updatable = false)},
            inverseJoinColumns = {
                    @JoinColumn(name = "id_eve", referencedColumnName = "id_eve",
                            nullable = false, updatable = false)})
    private Set<Evento> eventos = new HashSet<>();
	
	
	public Cliente() {
		
	}

	public Cliente(String usuario, String contrasena, String email) {
		this.usuario = usuario;
		this.contrasena = contrasena;
		this.email=email;
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

	public String getApellidos() {
		return apellidos;
	}

	public void setApellidos(String apellidos) {
		this.apellidos = apellidos;
	}

	public String getUsuario() {
		return usuario;
	}

	public void setUsuario(String usuario) {
		this.usuario = usuario;
	}

	public String getContrasena() {
		return contrasena;
	}

	public void setContrasena(String contrasena) {
		this.contrasena = contrasena;
	}

	public String getEstado() {
		return estado;
	}

	public void setEstado(String estado) {
		this.estado = estado;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}
	
	public void addEvento(Evento evento) {
		if(this.eventos==null) {
			this.eventos=new HashSet<>();
		}
		this.eventos.add(evento);
	}
	
	public void removeEvento(Evento evento) {
        this.eventos.remove(evento);
        evento.getClientes().remove(this);
    }

	@Override
	public String toString() {
		return "Cliente [id=" + id + ", nombre=" + nombre + ", apellidos=" + apellidos + ", usuario=" + usuario
				+ ", email=" + email + ", contrasena=" + contrasena + ", estado=" + estado + "]";
	}
	
	
}
