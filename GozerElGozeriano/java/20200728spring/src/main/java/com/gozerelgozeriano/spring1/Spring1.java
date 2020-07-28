//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/*  1-Crea una aplicación web que tenga varias páginas.
    2-Crea una aplicación que muestre el contenido de una página:
    <iframe src="https://www.starwars.com" width="100%" height="80%"title="Que bien programao!!!"></iframe>
    3-Crea una aplicación web que muestre el número de peticiones que ha atendido desde que se ha ejecutado.
    4-Crea una aplicación web que muestre cuanto tiempo lleva ejecutandose. (pista:
    System.currentTimeMillis()
    5-Haz que la aplicación de 1 incluya enlaces para ir de una página a otra. */
//</editor-fold>

package com.gozerelgozeriano.spring1;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Spring1 {
        
    private int contador;
    private final double start;
        
    public static void main(String[] args) {
        SpringApplication.run(Spring1.class, args);
    }
        
    public Spring1(){
        this.contador = 0;
        this.start = System.currentTimeMillis();
    }

    @GetMapping("/hello")
    public String hello(@RequestParam(value = "name", defaultValue = "World") String name) {
        String mypage;
        contador++;
        mypage = String.format("Hello %s!", name);
        mypage += "<br><a href=\"wars\" target=\"_self\">StarWars</a>";
        mypage += "<br><a href=\"peticiones\" target=\"_self\">Peticiones</a>";
        mypage += "<br><a href=\"time\" target=\"_self\">Tiempo en línea</a>";
        return mypage;
    }
        
    @GetMapping("/wars")
    public String wars() {
        contador++;
        return "<iframe src=\"https://www.starwars.com\" width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe>";
    }
        
    @GetMapping("/peticiones")
    public String peticiones(){
        contador++;
        return(String.valueOf(contador));
    }
        
    @GetMapping("/time")
    public String time(){
        double currenttime;
        contador++;
        currenttime = System.currentTimeMillis();
        return(String.valueOf(currenttime-start));
    }
}