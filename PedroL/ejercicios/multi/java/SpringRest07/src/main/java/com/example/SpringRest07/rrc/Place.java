/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.springrest07.rrc;

/**
 *
 * @author Usuario
 */
public class Place {
	
	private final String name;
	private final Float[] location;
	
	public Place(String name, Float[] location) { 
		this.name = name;
		this.location = location;
	}
	public String get_name() { return this.name; }
	public Float[] get_location() { return this.location; }
	
}
