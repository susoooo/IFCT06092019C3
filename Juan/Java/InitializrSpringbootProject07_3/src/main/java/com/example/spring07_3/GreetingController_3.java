/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_3;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author Usuario
 */
@RestController
public class GreetingController_3 {

    public int contador;
    public Integer[] lista;
    
    public GreetingController_3(){
        contador=0;
    }
    
     @GetMapping("/add")
	public String addnumber(@RequestParam(value = "numero", defaultValue = "Add number") String number) {            
            int num;
            Integer[] nlista;
            num=Integer.parseInt(number);
            contador++;
            nlista=new Integer[contador];
            for(int i=0;i<contador-2;i++){
                nlista[i]=lista[i];
            }
            if (contador==1){
                nlista[0]=lista[0];
            }            
            nlista[contador-1]=num;
            lista=nlista.clone();
            
//            lista=new Integer[contador];          
//            lista = nlista.clone();
            
		return String.format("Posición %s, Número guardado: %d ",contador, num);
	}
        
    @GetMapping("/query")
        public Greeting_3b listado() {
            return new Greeting_3b(this.lista);
        } 
}
