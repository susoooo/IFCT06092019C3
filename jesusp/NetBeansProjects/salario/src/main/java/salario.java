
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
public class salario {

    /**
     *
     * @param args
     * @throws java.io.IOException
     */
    public static void main(String[] args) throws IOException
     {
         int hora;
         float sala;
         float extra;
         float sext;
         float total;
          total =  (float) 0.0;
         System.out.println("¿Cuántas horas?");
         BufferedReader in =
                     new BufferedReader(new InputStreamReader(System.in));
         hora=Integer.parseInt(in.readLine());         
         System.out.println("SalarioHora:");
         sala=Float.parseFloat(in.readLine());
         if(hora <= 40)
         {
             total=sala*hora;
         }else
         {
             if(hora>40)
             {
                 extra=hora-40;
                 total=(float) (sala*40+(extra*sala*1.5));
             }else
             {
                 if(hora>50)
                 {
                     sext=hora-50;
                     total=(float) (sala*40+(10*sala*1.5)+(sext*sala*2));
                     
                 }
             }
         }
         System.out.printf("El salario bruto es:%.2f", total);
     }

    private static String readLine() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
