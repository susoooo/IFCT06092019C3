// 1.Crear un programa que abra un fichero llamado “prueba.txt” (previamente creado con el block
// de notas y guardado en la misma carpeta donde este el programa) y que muestre el contenido
// del mismo por pantalla carácter a carácter.


package gal.pedro.course.various;


import java.io.FileReader;
import java.io.BufferedReader;
import java.io.EOFException;
import java.io.FileNotFoundException;
import java.io.IOException;

public class ex8 {
    public static void main(String[] s){
        int c;
        String f_name = "test.txt";

        try {
            FileReader fr = new FileReader(f_name);
            BufferedReader in = new BufferedReader(fr);
            while((c=in.read()) != -1){
                System.out.printf("%c", c);
            }
        }
        catch (EOFException e) { System.out.println(e); }
        catch (IOException e) { System.out.println(e); }

    }
}
