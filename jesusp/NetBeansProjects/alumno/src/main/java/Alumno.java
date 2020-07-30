
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import static java.lang.System.in;
import java.util.logging.Level;
import java.util.logging.Logger;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Usuario
 */
class datos{
     String dni;
    String nombre;
    String apellidos;  
    float notas[] = new float[30];
    public datos(){};
    public datos(String dni,String nombre,String apellidos,float [] notas)
    {
        this.dni = dni; this.nombre = nombre;
        this.apellidos =apellidos; this.notas = notas;
    }
    String Gdatos(){
         try {
             System.out.println("Dni:");
             BufferedReader in =
                     new BufferedReader(new InputStreamReader(System.in));
             dni = in.readLine();
             System.out.println("\nNombre:");
             nombre = in.readLine();
             System.out.println("\nApellidos:");
             apellidos = in.readLine();
             
             return  dni + nombre + apellidos ;
         } catch (IOException ex) {
             Logger.getLogger(datos.class.getName()).log(Level.SEVERE, null, ex);
             return "Error";
         }
    }
    Float mednot()
    {
       int c;
       float suma = 0;
       float media = 0;
       for(c=0;c<30;c++){
         notas[c]=(float) (Math.random()%11)*10;
                PrintStream printf = System.out.printf("Notas:%.2f\n", notas[c]);
		suma=suma+notas[c];  
       }
       media=suma/c;
       return media;
       
    }
    

    private String readLine() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    private static class notas {

        public notas() {
        }
    }
    }
 class asignaturas extends datos{
     String nomasi;
     float notmed;
     public asignaturas(){}
     public asignaturas(String nomasi, float notmed){
         this.nomasi = nomasi;
         this.notmed = notmed;
     }
     String guardarnotas() throws IOException{
         System.out.println("Nota media:");
          BufferedReader in =
                     new BufferedReader(new InputStreamReader(System.in));
         notmed = Float.parseFloat(in.readLine());
         return  "Media;" + notmed + "\n";                         
     }
     
 
    
}
public class Alumno {
    public static void main(String[] args) throws IOException
    {
        datos a = new datos();
        asignaturas b = new asignaturas();
        a.Gdatos(); 
        a.mednot();
        b.guardarnotas();
        
        
    }
}
