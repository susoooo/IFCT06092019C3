// 4.Crear un programa que abra un archivo de texto y que genere otro fichero con los mismos contenidos
// que el original, pero con las vocales que en el original figuren en minúsculas cambiadas a mayusculas,
// y las que en el original figuren en mayusculas cambiadas a minúsculas.

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
                FileWriter fw = new FileWriter("vowels_"+s[0]);
                BufferedReader in = new BufferedReader(fr);
                BufferedWriter on = new BufferedWriter(fw);
                int c;
                int u_c;
                while((c=in.read()) != -1){

                    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                        u_c = Character.toUpperCase(c);
                    } else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                        u_c = Character.toLowerCase(c);
                    else
                        u_c =c;
                    fw.write(u_c);
                }
                in.close();
                on.close();
            }
            catch (EOFException e) { System.out.println(e); }
            catch (IOException e) { System.out.println(e); }
        }
    }
}
