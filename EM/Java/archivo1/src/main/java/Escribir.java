/*
Crear un programa que abra un fichero llamado “prueba.txt” (previamente creado 
con el block de notas y guardado en la misma carpeta donde este el programa) y 
que muestre el contenido del mismo por pantalla carácter a carácter.
 */



import java.io.FileWriter;
import java.io.IOException;



public class Escribir {
  
    public static void main(String[]args)throws IOException {
  
        FileWriter fichero= new FileWriter ("C:/Users/Usuario/Documents/Java/prueba.txt");
        
        for(int x=0; x<10;x++){
        fichero.write("Fila Numero" + x + "\n");
              
        }
        

  fichero.close();      
        
        
        
        
    }
    
    }