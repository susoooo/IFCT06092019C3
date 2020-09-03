package com.example.restservice;

import java.util.ArrayList;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class numerosController 
{  
    private final ArrayList<Integer> listaNum = new ArrayList<>();
    
    String numero;

    @GetMapping("/add")
    public numeros numeros(@RequestParam(value = "texto", defaultValue = "0") String texto) 
    {
        listaNum.add(Integer.parseInt(texto));
        return new numeros(listaNum);
    }
    
    @GetMapping("/remove")
    public numeros BorraNumeros(Integer numero) 
    {
        listaNum.remove(listaNum.size()-1);
        int control = 0;
        return new numeros(listaNum, control);
    }
    
    @GetMapping("/query")
    public numeros ListaNumeros() 
    {
        return new numeros(listaNum);
    }  
}

