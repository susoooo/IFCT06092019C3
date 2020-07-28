package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class DemoApplication {
    
Integer access_count = 0;

    public static void main(String[] args) {
	SpringApplication.run(DemoApplication.class, args);
    }
    
    @GetMapping("/*")
    public void aumentar_contador() { 
        access_count++;
        System.out.println("Access #" + access_count);
    }

    @GetMapping("/index")
    public String index() {
        String index_page = 
                "<html>\n" +
                "<body>\n" +
                "<h1>Paginas</h1>\n" +
                "<hr>\n" +
                "<a href=\"/hello\">Hello</a><br>\n" +
                "<a href=\"/portal\">Portal</a><br>\n" +
                "<a href=\"/contador\">Contador</a><br>\n" +
                "<a href=\"/uptime\">Uptime</a><br>\n" +
                "</body>\n" +
                "</html>";
        
        aumentar_contador();
        
        return index_page;
    }
    
    @GetMapping("/hello")
    public String hello(@RequestParam(value = "name", defaultValue = "World") String name) {
        String hello_page = String.format("Hello %s!", name);
        
        aumentar_contador();
        
        return hello_page;
    }
    
    @GetMapping("/portal")
    public String portal() {
        String portal_page = "<iframe src=\"https://www.wiby.me\" width=\"100%\" height=\"100%\"title=\"Que bien programao!!!\"></iframe>";
        
        aumentar_contador();
        
        return portal_page;
    }
    
    @GetMapping("/contador")
    public String contador() {
        String contador_page = 
                "<html>\n" +
                "<body>\n" +
                "Numero de accessos: \n" + access_count.toString() +
                "</body>\n" +
                "</html>\n";
        
        aumentar_contador();
        
        return contador_page;
    }
    
    @GetMapping("/uptime")
    public String uptime() {
    String uptime_page = 
            "Uptime: " +
            Long.toString(System.currentTimeMillis());
    
    aumentar_contador();
    
    return uptime_page;
    }
}
