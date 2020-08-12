package com.movaiva.productmanager;

public class changeName {
	
	private String name;
	private String newName;
	
	public changeName()
	{
		
	}
	
	public changeName(String name, String newName) {
		super();
		this.name = name;
		this.newName = newName;
	}
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	public String getNewName() {
		return newName;
	}
	
	public void setNewName(String newName) {
		this.newName = newName;
	}
	
	

	@Override
	public String toString() {
		return "changeName [name=" + name + ", newName=" + newName + "]";
	}
	
	

}
