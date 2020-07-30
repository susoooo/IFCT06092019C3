/*1.Crear un programa que abra un fichero llamado “prueba.txt” 
(previamente creado con el block de notas y guardado en la misma carpeta donde este el programa) 
y que muestre el contenido del mismo por pantalla carácter a carácter.*/


import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.util.Scanner;


public class abrirarchivo {
    
     public static void main(String[] args) throws FileNotFoundException {
         /*
        try {
            Scanner input = new Scanner(new File("C:\\Users\\Usuario\\Desktop\\Java\\Ejercicios\\objetos\\src\\main\\java\\com\\mycompany\\objetos\\prueba.txt"));
            while (input.hasNextLine()) {
                String line = input.nextLine();
                System.out.println(line);
            }
            input.close();
        } catch (Exception ex) {
            ex.printStackTrace();
        }*/
   try {
        int c;
FileInputStream fitxer1 = new FileInputStream("prueba.txt");// crear los 2 archivos .txt previamente
FileOutputStream fitxer2 = new FileOutputStream("prueba2.txt");//lo que hay escrito en prueba.txt me lo escribe en prueba2.txt
while ((c = fitxer1.read()) != -1) {
fitxer2.write(c);
}
fitxer1.close(); fitxer2.close();
 } catch (Exception ex) {
            ex.printStackTrace();
        }
        
}
    
    
    
    
    
    
}
