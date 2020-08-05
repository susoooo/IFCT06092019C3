/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_1b;


/**
 *
 * @author Usuario
 */
public class Greeting {
    private final int id;
    private final String date;
    private final String link;
    private final String title;
    private final int author;
    private final boolean sticky;

	public Greeting(int id, String date, String link, String title, int author, boolean sticky) {
        this.id= id;
        this.date = date;
        this.link = link;
        this.title = title;
        this.author = author;
        this.sticky= sticky;
        
	}

	public int getId() {
            return id;
	}

	public String getDate() {
            return date;
	}
        public String getLink() {
            return link;
	}
        
        public String getTitle() {
		return title;
	}
        
        public int getAuthor(){
            return author;
        }
        
        public boolean getSticky(){
            return sticky;
        }
            
}
