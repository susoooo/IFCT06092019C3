


import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Usuario
 */
public class Prueba {
    public static void main(String[] args) throws IOException
    {
         int c;    
FileInputStream prueba;
        prueba = new FileInputStream("C:\\Users\\Usuario\\Documents\\prueba.txt");
        //while ((c = prueba.read()) !=-1){System.out.printf("*");}
FileOutputStream cierre=
         new FileOutputStream("C:\\Users\\Usuario\\Documents\\cierre.txt");
 while ((c = prueba.read()) !=-1){
	cierre.write(c);
 }
prueba.close(); cierre.close();


}


    }

   

   

