/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.demo;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
/**
 *
 * @author Usuario
 */
@Entity // This tells Hibernate to make a table out of this class // This tells Hibernate to make a table out of this class
public class Entidad {
@Id
@GeneratedValue(strategy=GenerationType.AUTO)
private Integer id;
private String texto;


public Integer getId() {return id;}
public void setId(Integer id) {this.id = id;}
public String getTexto() {return texto;}
public void setTexto(String texto) {this.texto = texto;}}