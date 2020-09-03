// 2.Crear un programa que abra un fichero llamado "prueba.txt" y que cuente el número de letras que contiene y lo muestre por pantalla.


import java.io.FileReader;
import java.io.BufferedReader;
import java.io.EOFException;
import java.io.FileNotFoundException;
import java.io.IOException;


public class ex9 {
    public static void main(String[] s){
        int c;
        String f_name = "test.txt";
        int counter=0;
        try {
            FileReader fr = new FileReader(f_name);
            BufferedReader in = new BufferedReader(fr);
            while((c=in.read()) != -1){
                if(Character.isLetter(c))
                    counter++;
            }
            System.out.printf("Total letters: %d\n", counter);
        }
        catch (EOFException e) { System.out.println(e); }
        catch (IOException e) { System.out.println(e); }

    }
}
