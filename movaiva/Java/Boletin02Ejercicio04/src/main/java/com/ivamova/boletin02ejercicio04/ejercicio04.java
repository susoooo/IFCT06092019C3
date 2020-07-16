/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ivamova.boletin02ejercicio04;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio04 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Scanner entrada = new Scanner(System.in);
        BufferedReader bfR = null;
        BufferedWriter bfW = null;
        int texto;
        boolean minuscula=false;
        String[] rutas;
        String rutaArchivo;
        String rutaDestino;
        char letra;
        char[] vocalMinuscula={'a','e','i','o','u'};
        char[] vocalMayuscula={'A','E','I','0','U'};
        rutaDestino = "";
        try {
            System.out.println("Introduzca la ruta y nombre del archivo: ");
            rutaArchivo = entrada.nextLine();
            System.out.println("Introduzca la ruta de destino: ");
            rutaDestino=entrada.nextLine();
            rutas = rutaArchivo.split("\\\\");
            if(rutaDestino.chars().count()==0){
                rutaDestino = "copia_de_" + rutas[rutas.length - 1];            
            }else
            {
                rutaDestino += "\\copia_de_" + rutas[rutas.length - 1];            
            }
            bfR = new BufferedReader(new FileReader(rutaArchivo));
            bfW = new BufferedWriter(new FileWriter(rutaDestino));
            while ((texto = bfR.read()) != -1) {
                letra=(char)texto;
                switch(letra)
                {
                    case 'a','e','i','o','u','á','é','í','ó','ú':
                        texto=Character.toUpperCase(letra);
                        break;
                    case 'A','E','I','O','U','Á','É','Í','Ó','Ú':
                        texto=Character.toLowerCase(letra);
                        break;
                    default:
                        break;
                }
                
                bfW.write(texto);
            }
            entrada.close();
            System.out.println("Fichero copiado correctamente");
            bfR.close();
            bfW.close();
        } catch (FileNotFoundException ex) {
            System.out.println("El fichero no existe");
        } catch (IOException ex) {
            System.out.println(ex);
        }

    }
}
