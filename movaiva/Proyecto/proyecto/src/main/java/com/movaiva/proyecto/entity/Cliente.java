package com.movaiva.proyecto.entity;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name="Cliente")
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
	
	public Cliente() {
		
	}

	public Cliente(String usuario, String contrasena) {
		this.usuario = usuario;
		this.contrasena = contrasena;
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

	@Override
	public String toString() {
		return "Cliente [id=" + id + ", nombre=" + nombre + ", apellidos=" + apellidos + ", usuario=" + usuario
				+ ", email=" + email + ", contrasena=" + contrasena + ", estado=" + estado + "]";
	}
	
	
}
