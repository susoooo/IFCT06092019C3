/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.cambio_dolares_a_euros;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Usuario
 */
public class Ejercicio2 {
    public static void main (String[]args)
    {
            try{
        System.out.println("Introducca la cantidad de dolares a cambiar");
        float euro;
        
        BufferedReader Dr =
                new BufferedReader (new InputStreamReader(System.in));
        int dolar = Integer.parseInt (Dr.readLine());
        
        euro = ((float) dolar)*((float)1.33250);//**para que entienda que es un float se añade f al final
        
        System.out.printf("Son %f euros\n", euro);
        
        }catch(IOException ex){
            System.out.println("Error de entrada");
        }
    }
}
