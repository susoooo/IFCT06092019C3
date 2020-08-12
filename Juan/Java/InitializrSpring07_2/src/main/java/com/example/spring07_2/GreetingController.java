/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_2;

/**
 *
 * @author Usuario
 */
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class GreetingController {

	private static final String template = "%s";
        private int longitud;
        private int caracteres;
        private int letras;
        private int numeros;

	@GetMapping("/greeting")
	public Greeting greeting(@RequestParam(value = "name", defaultValue = "World") String name) {
        longitud=name.length();
        char [] Arraycadena ;
        char car;
        numeros=0;
        letras=0;
        caracteres=0;
        Arraycadena=name.toCharArray();
        for(int i =0;i<Arraycadena.length;i++){
            car=Arraycadena[i];
            caracteres++;
            if(car>=48 && car<=57){
                numeros++;
            }else{
                letras++;
            }
            };             
		return new Greeting(longitud, caracteres, letras, numeros, String.format(template, name));
                
	}
}