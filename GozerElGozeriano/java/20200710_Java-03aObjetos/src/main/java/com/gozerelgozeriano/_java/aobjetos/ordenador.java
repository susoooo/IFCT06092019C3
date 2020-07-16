/*
2-Crea una clase que represente un ordenador.
Deberá incluir al menos métodos para enchufarlo, desenchufarlo, encenderlo, y apagarlo.
Crea un programa que enchufe un portatil, lo encienda, lo cargue, lo apague y lo desenchufe.
 */
package com.gozerelgozeriano._java.aobjetos;

public class ordenador {
    private boolean enchufado;
    private boolean encendido;
    
    public void ordenador(){
        this.enchufado = false;
        this.encendido = false;
    }
    
    public void enchufar(){
        if(!enchufado){
            enchufado=true;
            System.out.println("Ordenador enchufado.");
        }else{
            System.out.println("El ordenador ya está enchufado.");
        }
    }
    public void desenchufar(){
        if(enchufado){
            enchufado=false;
            System.out.println("Ordenador desenchufado.");
        }else{
            System.out.println("El ordenador ya está desenchufado.");
        }
    }
    public void encender(){
        if(!enchufado){
            System.out.println("El ordenador no está enchufado.");
        }else{
            if(!encendido){
                encendido=true;
                System.out.println("Ordenador encendido.");
            }else{
                System.out.println("El ordenador ya está encendido.");   
            }
        }
    }
    
    public void apagar(){
        if(!enchufado){
            System.out.println("El ordenador no está enchufado.");
        }else{
            if(encendido){
                encendido=false;
                System.out.println("Ordenador apagado.");
            }else{
                System.out.println("El ordenador ya está apagado.");   
            }
        }
    }
}
