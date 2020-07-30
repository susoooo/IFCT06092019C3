/*
2. Crea un servicio web al que se le envie un texto y devuelva su longitud, el número de caracteres que contiene, el de letras y el de números.
*/
package com.gozerelgozeriano.springjson;

import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author gozerelgozeriano
 */
@RestController
public class LengthTextController {

    @GetMapping("/lengthtext")
    public String checktext(@RequestParam("text") String text, Model map) {
        map.addAttribute("Texto",text);
        map.addAttribute("Longitud",text.length());
        map.addAttribute("Letras",getletras(text));
        map.addAttribute("Numeros",getnumeros(text));
        return map.toString();
    }
    
    private int getletras(String text){
        int count;
        count = 0;
        for(char c: text.toCharArray()){
            if(Character.isLetter(c)){ count++; }
        }
        return(count);
    }
    
    private int getnumeros(String text){
        int count;
        count = 0;
        for(char c: text.toCharArray()){
            if(Character.isDigit(c)){ count++; }
        }
        return(count);
    }
    
}