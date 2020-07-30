/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.factorial;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Usuario
 */
public class Ejercicio4 {
    public static void main (String[]args)
    {
     try{
        System.out.println("Introducca numero para calcular su factorial");
                
        BufferedReader nf =
                new BufferedReader (new InputStreamReader(System.in));
        int numero = Integer.parseInt (nf.readLine());
        
        int factorial = 1;
        
        while(numero!=0)
        {
            factorial = factorial*numero;
            numero--;
        }
        System.out.printf("El factorial es %d\n", factorial);
        
        }catch(IOException ex){
            System.out.println("Error de entrada");
        }
    }
}
