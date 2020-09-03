/*
1-Crea una resource representation class para cada uno de los siguientes JSON:

{
   "name": "Grand Hyatt",
   "location": [25.2285, 55.3273]
}
--------
{
   "id": 3245,
   "date": "2017-07-23T21:56:35",
   "link": "https://www.kaggle.com/bennijesus/lovecraft-fiction",
   "title": "Cthulhu Mythos",
   "author": 124553,
   "sticky": false
}
*/
package com.movaiva.springrestweb01;


import java.time.LocalDateTime;
import static java.time.format.DateTimeFormatter.ISO_LOCAL_DATE_TIME;
import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springrestweb01Application {
    
    private final AtomicLong counter = new AtomicLong();

	public static void main(String[] args) {
		SpringApplication.run(Springrestweb01Application.class, args);
	}
        
        @GetMapping("/hotel")
	public Hotel hotel(@RequestParam(value = "name", defaultValue = "Grant Hyatt") String name,
                @RequestParam(value="cordX",defaultValue="25.2285") String x,
                @RequestParam(value="cordX",defaultValue="55.3273") String y) {
                Punto punto=new Punto (Double.parseDouble(x),Double.parseDouble(y));
		return new Hotel(name, punto);
	}
        
        @GetMapping("/libro")
	public Libro libro(@RequestParam(value = "date", defaultValue = "2017-07-23T21:56:35") String date,
                @RequestParam(value = "link", defaultValue = "https://www.kaggle.com/bennijesus/lovecraft-fiction") String link,
                @RequestParam(value = "title", defaultValue = "Cthulhu Mythos") String title,
                @RequestParam(value="author",defaultValue="124553") String author,
                @RequestParam(value="sticky",defaultValue="false") String sticky) {
		return new Libro(counter.incrementAndGet(),LocalDateTime.parse(date,ISO_LOCAL_DATE_TIME),link, title,
                        Long.parseLong(author),Boolean.parseBoolean(sticky));
	}
        

}
