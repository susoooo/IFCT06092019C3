/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.myMySQLDemo;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

/**
 *
 * @author Usuario
 */
@Entity
public class User {
	
	@Id
	@GeneratedValue(strategy=GenerationType.AUTO)
	private Integer id;
	
	private String name;
	private String email;
	
	public Integer get_id() { return id; }
	public String get_name() { return name; }
	public String get_email() { return email; }
	public void set_id(Integer id) { this.id = id; }
	public void set_name(String name) { this.name = name; }
	public void set_email(String email) { this.email = email; }
	
}
