
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import static java.lang.System.in;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Usuario
 */
class base{
    int a;
    int b;
    
    int vera() throws IOException{ 
        System.out.println("La base es:");
         BufferedReader in =
                    new BufferedReader(new InputStreamReader(System.in));
        a = Integer.parseInt(in.readLine());
        return a;
    }
    
    int verb() throws IOException{
        System.out.println("La altura es:");
        BufferedReader in =
                    new BufferedReader(new InputStreamReader(System.in));
        b = Integer.parseInt(in.readLine());
        return b;
    }
    void cambiara(){}
    void cambiarb(){}
    int calcularPerimetro() throws IOException{
        int perimetro;        
        perimetro = a*b;
        return perimetro;
    }
    int calcularArea() throws IOException{        
        int area;        
        area = 2*a+2*b;        
        return area;        
    }

    

   
}
public class rectangulo {
    public static void main(String[] args) throws IOException{
       
        base d = new base();
        base e = new base();
        d.vera();
        d.verb();       
        System.out.println("El perímetro es:"+d.calcularPerimetro()+
                "\nEl área es:"+d.calcularArea());      
       
       e.cambiara();
       e.cambiarb();
        System.out.print(e.vera()+ ","+ e.verb());
        System.out.println("\nEl perímetro es:"+e.calcularPerimetro()+
                "\nEl área es:"+e.calcularArea());   
        }
    }

