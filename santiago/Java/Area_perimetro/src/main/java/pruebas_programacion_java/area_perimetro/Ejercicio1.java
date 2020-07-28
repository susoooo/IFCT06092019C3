/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.area_perimetro;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 * @author Usuario
 */
public class Ejercicio1 {
    public static void main (String[] args)
    {   try {
        System.out.println("Introducca el lado para calcular el area y perimetro");
        int area;
        int perimetro;

        BufferedReader Lado1 =
                new BufferedReader (new InputStreamReader(System.in));
        int i = Integer.parseInt(Lado1.readLine());
        
        System.out.println("Introducca el segundo lado");
        
        BufferedReader Lado2 =
                new BufferedReader (new InputStreamReader(System.in));
        int f = Integer.parseInt(Lado2.readLine());
        
        area =i*f;
        perimetro=i+f*2;
        System.out.printf("El area es %d\n", area);
        System.out.printf("El perimetro es %d\n", perimetro);
        } catch (IOException ex) {
            System.out.println("Error de entrada");
        }
        
    }

}
