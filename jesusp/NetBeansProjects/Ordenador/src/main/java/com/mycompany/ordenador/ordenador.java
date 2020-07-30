/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.ordenador;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 * @author Usuario
 */
class portatil {
    boolean encendido;
    boolean enchufado;
    void encender(){
        if (encendido == false){
            encendido = true;
        System.out.println("Ordenador encendido");
        }
        else{System.out.println("Ya está encendido.");}    
    }
     void apagar(){
         if (encendido == true){
            encendido = false;
        System.out.println("Ordenador apagado.");
        }
        else{System.out.println("Ya está apagado.");}
    }
      void enchufar(){
        if (enchufado == false){
            encendido = true;
        System.out.println("Ordenador enchufado");
        }
        else{System.out.println("Ya está enchufado.");}
      }
     void desenchufar(){
         if (enchufado == true){
            enchufado = false;
        System.out.println("Ordenador desenchufado");
        }
        else{System.out.println("Ya está desenchufado.");}
    }
}
public class ordenador {
    public static void main(String[] args) throws IOException{
        portatil a = new portatil();
        int opcion;
        System.out.println("Elige una opcion:\n");
        System.out.println ("0.Encender ordenador\n");
        System.out.println("1.Apagar ordenador\n");
        System.out.println("2.Enchufar ordenador\n") ;
        System.out.println ("3.Desenchufar ordenador\n");
        BufferedReader in =
                    new BufferedReader(new InputStreamReader(System.in));
            opcion= Integer.parseInt(in.readLine());
        switch(opcion){
            case 0: a.encender();            
            break;
            case 1: a.apagar();            
            break;
            case 2: a.enchufar();            
            break;
            case 3: a.desenchufar();            
            break;
            default: System.out.println("Error.");
        }
        
               
    }
}
