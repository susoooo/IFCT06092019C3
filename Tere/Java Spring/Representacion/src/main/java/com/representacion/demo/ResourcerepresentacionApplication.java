/*
1-Crea una resource representation class para cada uno de los siguientes JSON:

{
   "id": 3245,
   "date": "2017-07-23T21:56:35",
   "link": "https://www.kaggle.com/bennijesus/lovecraft-fiction",
   "title": "Cthulhu Mythos",
   "author": 124553,
   "sticky": false
}
*/


package com.representacion.demo;


public class ResourcerepresentacionApplication {
    
        long id;
	String date;
        String link;
        String title;
        String author;
        String sticky;

        
       public ResourcerepresentacionApplication(long id, String date, String link, String titl, String author, String sticky) {
		this.id = id;
		this.date = date;
                this.link =link;
                this.title=titl;
                this.author=author;
                this.sticky=sticky;
	}
	public long getId() {return id;}
       
        public void setId(long id){this.id = 3245;}
              
	
        public String getDate() {return date;}
        public void setDate(String date){this.date = "2017-07-23T21:56:35";}
        
        public String getlink() {return link;}
        public void setlink(String link){this.link = "https://www.kaggle.com/bennijesus/lovecraft-fiction";}
        
        public String getTitle() {return title;}
        public void setTitle(String title){this.title = "Cthulhu Mythos";}
        
        public String getauthor() {return author;}
        public void setauthor(String author){this.author = "124553";}
        
        public String getSticky() {return sticky;}
        public void setSticky(String sticky){this.sticky = "false";}
        
        
}


        
        /*
        public class Greeting {

	private final long id;
	private final String content;

	public Greeting(long id, String content) {
		this.id = id;
		this.content = content;
	}
	public long getId() {return id;}
	public String getContent() {return content;}
}*/

      












