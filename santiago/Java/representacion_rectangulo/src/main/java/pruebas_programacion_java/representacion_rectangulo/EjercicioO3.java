/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.representacion_rectangulo;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class EjercicioO3 {
    public static void main(String []args){
        rectangulo objrec;
        objrec = new rectangulo();
        int opcion = 0;
                
        while(opcion!=7){
        System.out.println("Representacion de un rectangulo\n 1 Cambiar base\n 2 Cambiar altura");
        System.out.println(" 3 Calcular area\n 4 Calcular perimetro\n 7 Para salir\n");
        Scanner in = new Scanner(System.in);
        opcion = in.nextInt();
        
        switch(opcion){
            case 1: System.out.println("Introduca el nuevo tamaño de la base");
            objrec.cbase(in.nextFloat());
                break;
                
            case 2: System.out.println("Introduca el nuevo tamaño de la altura");
            objrec.caltura(in.nextFloat());
                break;
                
            case 3: Float Arearec = objrec.carea();
            System.out.println("El area es: "+Arearec);
                break;
                
            case 4: Float Perimetrorec = objrec.cperimetro();
            System.out.println("El perimetro es: "+Perimetrorec);
                break;
        }
       }        
    }
}

class rectangulo{
    Float base;
    Float altura;
    Float area;
    Float perimetro;
    
    public void cbase(Float arg){
         base = arg;
    }
    public void caltura(Float arg2){
        altura = arg2;
    }
    public Float carea(){
        area=base*altura;
        return area;
    }
    public Float cperimetro(){
        perimetro=2*base+2*altura;
        return perimetro;
    }
}