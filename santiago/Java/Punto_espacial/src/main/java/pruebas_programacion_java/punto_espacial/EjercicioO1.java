/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.punto_espacial;

/**
 *
 * @author Usuario
 */
public class EjercicioO1 {
    
     public static void main (String[]args)
     {
         System.out.println("Punto espacial");
         coordenada objcoordenadas;
         objcoordenadas = new coordenada();
         double cz;
         System.out.printf("\n");
         
         System.out.println("Las coordenadas del primer objeto son:");
            objcoordenadas.x();
            objcoordenadas.px();
            objcoordenadas.y();
            objcoordenadas.py();
            cz = objcoordenadas.z();
            System.out.printf("z = %f\n\n", cz);
         
         coordenada objcoordenada2;
         objcoordenada2 = new coordenada();
         System.out.println("Las coordenadas del segundo objeto son:");
            objcoordenada2.x();
            objcoordenada2.px();
            objcoordenada2.y();
            objcoordenada2.py();
            cz = objcoordenada2.z();
            System.out.printf("z = %f\n\n", cz);
            
         coordenada objcoordenada3;
         objcoordenada3 = new coordenada();
         System.out.println("Las coordenadas del tercer objeto son:");
            objcoordenada3.x();
            objcoordenada3.px();
            objcoordenada3.y();
            objcoordenada3.py();
            cz = objcoordenada3.z();
            System.out.printf("z = %f", cz);
     }
}
class coordenada
    {
      double coordenadax;
      double coordenaday;
      double coordenadaz;
      
      public void x(){ 
         
          coordenadax = Math.random();
      }
      
      public void y(){
          
          coordenaday = Math.random();
      }
      
      public double z(){
          
          coordenadaz = Math.random();
          return coordenadaz;
      }
      
      public void px(){
         System.out.println("x = " +coordenadax);
      }
      
       public void py(){
         System.out.printf("y = %f\n", coordenaday);
      }
    }