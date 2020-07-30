// Crear un programa capaz de copiar un fichero (word por ejemplo, o cualquier otro tipo) en otro.
// El fichero creado se llamará “copia_de” y el nombre del archivo a copiar. El nombre del fichero
// a copiar se le deberá pasar como argumento al programa en el momento de ejecutarlo. Si no existe
// un fichero con el nombre especificado, se mostrará un mensaje de error por pantalla y se saldrá del programa. 


import java.io.FileReader;
import java.io.FileWriter;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.EOFException;
import java.io.FileNotFoundException;
import java.io.IOException;


public class ex10 {
    public static void main(String[] s){
        // System.out.println(s.length);
        if(s.length != 1){
            System.out.println("ERROR! this fxxxxxx program only accepts one argument!");
        } else {
            try {
                FileReader fr = new FileReader(s[0]);
                FileWriter fw = new FileWriter("copy_of_"+s[0]);
                BufferedReader in = new BufferedReader(fr);
                BufferedWriter on = new BufferedWriter(fw);
                int c;
                while((c=in.read()) != -1){
                    fw.write(c);
                }
                in.close();
                on.close();
            }
            catch (EOFException e) { System.out.println(e); }
            catch (IOException e) { System.out.println(e); }
        }
    }
}
