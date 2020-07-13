/*
 3. Crear un programa capaz de copiar un fichero (word por ejemplo, o cualquier 
otro tipo) en otro. El fichero creado se llamará “copia_de” y el nombre del archivo 
a copiar. El nombre del fichero a copiar se le deberá pasar como argumento al programa 
en el momento de ejecutarlo. Si no existe un fichero con el nombre especificado, 
se mostrará un mensaje de error por pantalla y se saldrá del programa. 
 */
package com.ivamova.boletin02ejercicio03;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio03 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Scanner entrada = new Scanner(System.in);
        BufferedReader bfR = null;
        BufferedWriter bfW = null;
        int texto;
        String[] rutas;
        String rutaArchivo;
        String rutaDestino;
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
