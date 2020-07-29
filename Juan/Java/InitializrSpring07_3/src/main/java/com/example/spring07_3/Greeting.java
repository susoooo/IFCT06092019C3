/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_3;


/**
 *
 * @author Usuario
 */
public class Greeting {
    private final String name;
    private final String location;

	public Greeting(String name, String location) {
		
                this.name = name;
		this.location = location;
	}

	public String getName() {
		return name;
	}

	public String getLocation() {
		return location;
	}
}
