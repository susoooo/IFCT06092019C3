/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.o.portatil;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class EjercicioO2 {
   
        
    public static void main(String []args){
        String eleccion="";
        
        System.out.println("Simulador de un ordenador");
        ordenador objpc;
        objpc = new ordenador();
        while(!eleccion.equals("salir")){
        System.out.println("Introducca la accion a realizar en minusculas");
        Scanner in = new Scanner(System.in);
        eleccion = in.nextLine();
        switch(eleccion){
            case "encender":
                objpc.power_on();
                break;
            case "apagar":
                objpc.power_off();
                break;
            case "enchufar":
                objpc.plug_in();
                break;
            case "desenchufar":
                objpc.plug_out();
                break;
            case "cargar":
                objpc.charge();
                break;
            default:
                System.out.println("A ordenado salir o no a escrito una orden aceptada");}
        }
    }
}    
    class ordenador{
        boolean encendido = false;
        boolean enchufado = false;
        boolean cargado = false;
        
        public void power_on (){
            if(encendido  == false && cargado || encendido  == false && enchufado)
            {encendido=true;
            System.out.println("El ordenador esta encendido");}

        }
        public void power_off (){
            if(encendido)
            {encendido=false;
            System.out.println("El ordenador esta apagado");}
           
        }    
        public void plug_in(){
            if(enchufado  == false)
            {enchufado=true;
             System.out.println("El ordenador esta enchufado");}
            
        }

        public void plug_out(){
            if(enchufado && encendido == false)
            {enchufado=false;
             System.out.println("El ordenador esta desenchufado");}
            
        }

        public void charge(){
            int pc;
            if(cargado)
            {System.out.println("El ordenador esta cargado");}
                       
            if(cargado == false && enchufado){    
            for(pc=0; pc==100; pc++){
                {System.out.println("El ordenador esta al " +pc);}
            }
            cargado=true;}
        }
    }

