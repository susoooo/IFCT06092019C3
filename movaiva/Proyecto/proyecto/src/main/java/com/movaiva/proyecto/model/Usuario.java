package com.movaiva.proyecto.model;

public class Usuario {
	private Integer id;
	private String nick;
	private String email;
	private String password;
	private String nombre;
	private String apellidos;
	private String cuentaBancaria;
	private String tipo;
	
	
	public Usuario() {
		
	}
	
	public Usuario(String nick,String email, String password,String tipo) {		
		this.nick = nick;
		this.password = password;
		this.email=email;
		this.tipo=tipo;
	}

	public Integer getId() {
		return id;
	}

	public void setId(Integer id) {
		this.id = id;
	}

	public String getNick() {
		return nick;
	}

	public void setNick(String nick) {
		this.nick = nick;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
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

	public String getCuentaBancaria() {
		return cuentaBancaria;
	}

	public void setCuentaBancaria(String cuentaBancaria) {
		this.cuentaBancaria = cuentaBancaria;
	}

	@Override
	public String toString() {
		return "Usuario [id=" + id + ", nick=" + nick + ", email=" + email + ", password=" + password + ", nombre="
				+ nombre + ", apellidos=" + apellidos + ", cuentaBancaria=" + cuentaBancaria + ", tipo=" + tipo + "]";
	}
}
