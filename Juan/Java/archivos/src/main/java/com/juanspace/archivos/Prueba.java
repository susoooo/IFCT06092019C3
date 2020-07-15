/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.archivos;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.lang.reflect.Array;
import java.nio.CharBuffer;

/**
 *
 * @author Usuario
 */
public class Prueba {
    
    public static void muestraContenido(String archivo) throws FileNotFoundException, IOException {
      String cadena;
      FileReader f = new FileReader(archivo);
      BufferedReader b = new BufferedReader(f);
      while((cadena = b.readLine())!=null) {
          System.out.println(cadena);
      }
      b.close();
}
    
    public static void contarEspacios(String archivo) throws FileNotFoundException, IOException {
        int caracter;
        int contador=0;
        FileReader f = new FileReader(archivo);     
        while((caracter = f.read())!=-1){
            if(caracter!=' ')
            contador++;
        }
        System.out.println(contador);
    }
    
    public static void main(String[] args) throws IOException{
    
    // muestraContenido("prueba.txt");
      contarEspacios("prueba.txt"); 
    }
}
