/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.movaiva.springrestweb01;

import java.time.LocalDateTime;

/**
 *
 * @author Usuario
 */
public class Libro {
    
    private final long id;
    private final LocalDateTime date;
    private final String link;
    private final String title;
    private final long author;
    private final boolean sticky;

    public Libro(long id, LocalDateTime date, String link, String title, long author, boolean sticky) {
        this.id = id;
        this.date = date;
        this.link = link;
        this.title = title;
        this.author=author;
        this.sticky = sticky;
    }

    public long getId() {
        return id;
    }

    public LocalDateTime getDate() {
        return date;
    }

    public String getLink() {
        return link;
    }

    public String getTitle() {
        return title;
    }

    public boolean isSticky() {
        return sticky;
    }
    
    
    
}
