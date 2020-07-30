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

/**
 *
 * @author gozerelgozeriano
 */
public class Libro {
    
    private final long id;
    private final String date;
    private final String link;
    private final String title;
    private final long author;
    private final boolean sticky;
    
    public Libro(long id, String date, String link, String title, long author, boolean sticky){
        this.id = id;
        this.date = date;
        this.link = link;
        this.title = title;
        this.author = author;
        this.sticky = sticky;
    }
    
    public long getid(){return id;}
    public String getdate(){return date;}
    public String getlink(){return link;}
    public String gettitle(){return title;}
    public long getauthor(){return author;}
    public boolean getsticky(){return sticky;}

}
