package com.movaiva.proyecto.entity;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name="Organizador")
public class Organizador {
	@Id
	@GeneratedValue(strategy=GenerationType.IDENTITY)
	@Column(name="id_org")
	private Integer id;
	@Column(name="nombre_org")
	private String nombre;
	@Column(name="apellidos_org")
	private String apellidos;
	@Column(name="usuario_org")
	private String usuario;
	@Column(name="email_org")
	private String email;
	@Column(name="contrasena_org")
	private String contrasena;
	@Column(name="cuenta_bancaria_org")
	private String cuentaBancaria;
	@Column(name="estado_org")
	private String estado;
	
	public Organizador() {
		
	}

	public Organizador(String usuario, String contrasena) {
		this.usuario = usuario;
		this.contrasena = contrasena;
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

	public String getCuentaBancaria() {
		return cuentaBancaria;
	}

	public void setCuentaBancaria(String cuentaBancaria) {
		this.cuentaBancaria = cuentaBancaria;
	}

	public String getEstado() {
		return estado;
	}

	public void setEstado(String estado) {
		this.estado = estado;
	}

	public Integer getId() {
		return id;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	@Override
	public String toString() {
		return "Organizador [id=" + id + ", nombre=" + nombre + ", apellidos=" + apellidos + ", usuario=" + usuario
				+ ", email=" + email + ", contrasena=" + contrasena + ", cuentaBancaria=" + cuentaBancaria + ", estado="
				+ estado + "]";
	}

	
	
}
