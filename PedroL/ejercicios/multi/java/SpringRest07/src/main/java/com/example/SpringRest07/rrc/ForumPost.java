/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.springrest07.rrc;

import java.util.Date;

/**
 *
 * @author Usuario
 */
public class ForumPost {
	
	private final Integer id;
	private final String date;
	private final String link;
	private final String title;
	private final Integer author;
	private final Boolean sticky;
	
	public ForumPost(Integer id,
					         String date,
									 String link,
									 String title,
									 Integer author,
									 Boolean sticky) {
		this.id = id;
		this.date = date;
		this.link = link;
		this.title = title;
		this.author = author;
		this.sticky = sticky;
	}
	public Integer get_id() { return this.id; }
	public String get_date() { return this.date; }
	public String get_link() { return this.link; }
	public String get_title() { return this.title; }
	public Integer get_author() { return this.author; }
	public Boolean get_sticky() { return this.sticky; }
	
}
