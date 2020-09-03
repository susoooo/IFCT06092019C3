/* 2. Crea un servicio web al que se le envie un texto y devuelva su longitud, 
el número de caracteres que contiene, el de letras y el de números. */
package com.movaiva.springrestweb02;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class Springrestweb02Application {

	public static void main(String[] args) {
		SpringApplication.run(Springrestweb02Application.class, args);
	}
        
        @GetMapping("/informacion")
	public Texto informacionTexto(@RequestParam(value = "texto", defaultValue = "Grant Hyatt 204") String texto) {
                int numCaracteres=0;
                int numLetras=0;
                int numNumeros=0;
                for(int contador=0;contador<texto.length();contador++){
                    char caracter=texto.charAt(contador);
                    if(Character.isLetterOrDigit(caracter)){
                        numCaracteres++;
                        if(Character.isLetter(caracter)){
                            numLetras++;
                        }else if(Character.isDigit(caracter)){
                            numNumeros++;
                        }
                    }
                }
		return new Texto(texto.length(),numCaracteres,numLetras, numNumeros);
	}

}
