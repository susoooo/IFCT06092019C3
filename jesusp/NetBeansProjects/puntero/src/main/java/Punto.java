
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Usuario
 */
 class Puntero {
        int x;
        int y;
        int z;       
        int verx;
        int very;
        int verz;  
   
        int verx () throws IOException{
            
                return x;
}
         int very () throws IOException{ 
                    
                return y;
}
          int verz () throws IOException{
                        
                return z;
}
        void cambiarx(int a){x=a;}
        void cambiary(int b){y=b;}
        void cambiarz(int c){z=c;}

    private String readLine() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
        public class Punto{
    public static void main(String[] args) throws IOException
    {
        
        Puntero e = new Puntero();
        Puntero f = new Puntero();
        Puntero g = new Puntero();
        e.verx();
        f.very();
        g.verz();
        e.cambiarx(5);
        f.cambiary(7);
        g.cambiarz(9);
        System.out.println(e.verx() + "," + f.very() + "," + g.verz());        
        
    }
    }

