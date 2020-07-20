/*
Ejercicio 2: Cambio de dólares a euros.
Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros.
 */

import java.io.*;

public class Cambio {
  
  public static void main( String[] args ) throws Exception  
    
  {
       BufferedReader teclado;
       float dolar;
       float euros;
       String linea;  
      
      teclado = new BufferedReader( new InputStreamReader(System.in) );
      
       System.out.print("Cantidad (dolares): ");
       linea = teclado.readLine();
       dolar = Integer.parseInt(linea);
       euros = dolar*(float)1.33250;
       System.out.println(dolar+" Euros. corresponden a "+euros+" euros.");
      
  }
}

