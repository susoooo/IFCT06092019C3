//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/*
{
   "id": 3245,
   "date": "2017-07-23T21:56:35",
   "link": "https://www.kaggle.com/bennijesus/lovecraft-fiction",
   "title": "Cthulhu Mythos",
   "author": 124553,
   "sticky": false
}
*/
//</editor-fold>

package com.gozerelgozeriano.springjson;

import java.util.concurrent.atomic.AtomicLong;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author gozerelgozeriano
 */
@RestController
public class LibroController {

     private final AtomicLong counter = new AtomicLong();
     private String date;
     private String link;
     private String title;
     private long author;
     private boolean sticky;
     
    @GetMapping("/libro")
    public Libro libro(@RequestParam(value = "date") String date,
                       @RequestParam(value="link") String link,
                       @RequestParam(value="title") String title,
                       @RequestParam(value="author") long author,
                       @RequestParam(value="sticky") boolean sticky) {
        this.date = date;
        this.link = link;
        this.title = title;
        this.author = author;
        this.sticky = sticky;
        
       return new Libro(counter.incrementAndGet(), date, link, title, author, sticky);
    }
}