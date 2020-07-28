/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.condiciones;
import java.util.Scanner;
import java.io.IOException;
/**
 *
 * @author Usuario
 */
public class Ejercicio5 {
    public static void main (String[]args)
    {      
        try{
            System.out.println("introducca tres numeros");
            
            Scanner in = new Scanner(System.in);
            int n1 = in.nextInt();
            int n2 = in.nextInt();
            int n3 = in.nextInt();
            in.close();
            
            if(n1 == n2){
                if(n2 == n3)
                {System.out.println("Los tres numeros son iguales");}
                else{
                        if(n2 < n3)
                           {System.out.println("El ultimo numero es el menor los otros dos son iguales");}
                        else{
                            System.out.println("El segundo numero es el menor los otros dos son iguales");
                            }
                    }
                
            } else {
                    if(n1 > n2){
                    if(n2 == n3)
                    {System.out.println("El primer numero es mayor y los dos ultimos numeros son iguales");}
                    else{
                            if(n2 > n3)
                                {System.out.println("El primer numero es mayor el segundo es el mediano y el ultimo es el menor");}
                            else{
                                 System.out.println("El primer numero es mayor el segundo es el menor y el ultimo es el mediano");
                            }
                        }
            }else {
                  if(n1 < n2){
                  if(n2==n3){System.out.println("El primer numero es el menor y el segundo y el tercero son iguales");}
                  else{
                      if(n2>n3){System.out.println("El primer numero es el menor el segundo es el mayor y el tercero es el mediano");}
                      else{
                          System.out.println("El primer numero es el menor el segundo es el mediane y el tercero es el mayor");
                      }
                  }
                  }
                }
            }
            }catch(Exception ex){
                System.out.println("Error de entrada");
            }
    }
}
