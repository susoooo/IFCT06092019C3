/*
 2.Crear un programa que abra un fichero llamado "prueba.txt" y que cuente el número 
de letras que contiene y lo muestre por pantalla.
 */
package com.ivamova.boletin02ejercicio02;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Usuario
 */
public class ejercicio02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Scanner entrada = new Scanner(System.in);
        BufferedReader bfr = null;
        int texto;
        int contadorLetras;
        String rutaArchivo;
        contadorLetras = 0;
        rutaArchivo = "";
        try {
            System.out.println("Introduzca la ruta y nombre del archivo: ");
            rutaArchivo = entrada.nextLine();
            bfr = new BufferedReader(new FileReader(rutaArchivo));
            while ((texto = bfr.read()) != -1) {

                if ((char) texto != ' ' && (char) texto != '\n' && (char) texto != '\r') {
                    contadorLetras++;
                }
            }
            System.out.println("El archivo tiene: " + contadorLetras + " letras");
            entrada.close();
            bfr.close();
        } catch (FileNotFoundException ex) {
            System.out.println(ex);;
        } catch (IOException ex) {
            System.out.println(ex);;
        }

    }
}
