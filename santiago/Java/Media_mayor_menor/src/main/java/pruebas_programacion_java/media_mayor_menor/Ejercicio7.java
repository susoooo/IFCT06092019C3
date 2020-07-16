/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.media_mayor_menor;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
/**
 *
 * @author Usuario
 */
public class Ejercicio7 {
    public static void main (String[]args)
    {
     try{
           float notas[];
           String nombre[];
           String apellido1[];
           String apellido2[];
           
           notas = new float[20];
           nombre = new String[20];
           apellido1 = new String[20];
           apellido2 = new String[20];
           
           int c;
           int nalumnos = 0;
           float notamedia = 0;
           float notamenor = 11;
           float notamayor = 0;
           int opcion;
           
        BufferedReader nf =
            new BufferedReader (new InputStreamReader(System.in));
            Scanner in = new Scanner(System.in);
        
        do{
            System.out.println("1 Listar notas\n 2 Calcular la media\n  3 Calcular el menor\n   4 Calcular el mayor\n");
            opcion = Integer.parseInt (nf.readLine());
            
            switch (opcion){
                case 1: 
                    for(c=0; c<nalumnos; c++){
                    System.out.println(c+" "+ nombre[c]+ " " +apellido1[c]+ " " +apellido2[c]+ " " +notas[c]);
                    }
                    break;
                    
                case 2:
                    for(c=0; c<nalumnos; c++){                    
                    notamedia=notamedia+notas[c];
                    }
                    notamedia=notamedia/nalumnos;
                    System.out.println("La nota media es " +notamedia);
                    break;
                    
                case 3:
                    for(c=0; c<nalumnos; c++){
                        if(notamenor>notas[c]){
                            notamenor=notas[c];
                        }
                    }
                    System.out.println("La nota menor es " +notamenor);
                    break;
                    
                case 4:
                    for(c=0; c<nalumnos; c++){
                    if(notamayor<notas[c]){
                        notamayor=notas[c];
                    }
                    }
                    System.out.println("La nota mayor es " +notamayor);
                    break;
                    
                default:
                    System.out.println("Introducca el numero de alumnos que desea introduccir");
                    
                    nalumnos = in.nextInt();
                    in.nextLine();
                            
                    for(c=0; c< nalumnos; c++){
                        System.out.printf("Introducca el nombre y apellidos seguido de la nota del %d alumno\n", c+1);                    
                        nombre[c] = in.nextLine();
                        System.out.println("nombre"+nombre[c]);
                        apellido1[c] =in.nextLine();
                        System.out.println("apellido"+apellido1[c]);
                        apellido2[c] =in.nextLine();
                        System.out.println("apellido2"+apellido2[c]);
                        notas[c] = in.nextFloat();
                    }
                    
            }}while(opcion!=0);
        in.close();
        }catch(IOException ex){
            System.out.println("Error de entrada"+ex);
        }
    }
}
