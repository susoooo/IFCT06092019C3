/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.salario_semanal;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Usuario
 */
public class Ejercicio6 {
    public static void main (String[]args)
    {
     try{
         int horas7 = 0;
         float salario = 0;
        System.out.println("Introducca el numero horas trabajadas");
                
        BufferedReader nf =
                new BufferedReader (new InputStreamReader(System.in));
            int horas = Integer.parseInt (nf.readLine());
        
        System.out.println("Introducca el precio que cobra por hora");
           
        BufferedReader ph =
                new BufferedReader (new InputStreamReader(System.in));
            int precioxh = Integer.parseInt (ph.readLine());
            
            if(horas>40){
                horas7=horas-40;
                horas=40;
                salario = precioxh*(40+((horas7*50)/100)+horas7);
            }
            else{
                salario=horas*precioxh;
              }
            if(horas7>9)
            {salario=((horas7-9)+2+horas+18)*precioxh;}
            System.out.printf("El salario es %f", salario);
            
        }catch(IOException ex){
            System.out.println("Error de entrada");
        }
    }
}
