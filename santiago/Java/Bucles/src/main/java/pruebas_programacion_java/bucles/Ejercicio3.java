/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.bucles;
import java.util.Scanner;
import java.io.IOException;
/**
 *
 * @author Usuario
 */
public class Ejercicio3 {
    public static void main (String[]args)
    {      
        try{
            System.out.println("introducca dos numeros");
            
            Scanner in = new Scanner(System.in);
            int n1 = in.nextInt();
            int n2 = in.nextInt();
            in.close();
            
            int i;
            for(i=0; i<2; i++){
            System.out.printf("El primer numero es %d\n", n1);
            System.out.printf("El segundo numero es %d\n", n2);
            }
            while(i<5){
                System.out.printf("El primer numero es %d en bucle while\n", n1);
                System.out.printf("El segundo numero es %d en bucle while\n", n2);
                i++;
            }
            
            do{
                System.out.printf("El primer numero es %d en bucle do while\n", n1);
                System.out.printf("El segundo numero es %d en bucle do while\n", n2);
                i++;
            }while(i<7);
            
            }catch(Exception ex){
            System.out.println("Error de entrada");
        }
    }
}
