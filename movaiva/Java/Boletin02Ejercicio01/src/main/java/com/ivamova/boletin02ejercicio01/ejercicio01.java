/*
 1.Crear un programa que abra un fichero llamado “prueba.txt” (previamente creado 
con el block de notas y guardado en la misma carpeta donde este el programa) y que 
muestre el contenido del mismo por pantalla carácter a carácter.
 */
package com.ivamova.boletin02ejercicio01;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        String texto;
        BufferedReader bfr=null;
        Scanner entrada = new Scanner(System.in);
        String archivo;
        try {
            System.out.println("Introduzca la ruta y nombre del archivo: ");
            archivo = entrada.nextLine();            
            bfr=new BufferedReader(new FileReader(archivo));
            
            while((texto=bfr.readLine())!=null)
            {
                System.out.println(texto);   
            }
            bfr.close();
        } catch (IOException ex) {
            System.err.println(ex);
        }
            
    }
}
