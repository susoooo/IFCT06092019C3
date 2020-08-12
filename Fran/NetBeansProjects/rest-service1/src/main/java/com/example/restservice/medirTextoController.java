/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.restservice;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class medirTextoController 
{
    private int contador = 0;
    private int letras = 0;
    private int numeros = 0;

    @GetMapping("/medirTexto")
    public medirTexto medirTexto(@RequestParam(value = "texto", defaultValue = "") String texto) 
    {        
        for (contador = 0; contador < texto.length(); contador++)
        {
            if (Character.isLetter(texto.charAt(contador)))
            {
                letras++;
            }
            else
            {
                if (Character.isDigit(texto.charAt(contador)))
                {
                    numeros++;
                }
            }
        }
            return new medirTexto(texto.length(), letras, numeros);
    }
}
