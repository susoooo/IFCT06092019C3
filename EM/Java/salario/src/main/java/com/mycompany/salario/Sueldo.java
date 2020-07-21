/*
Se desea almacenar los sueldos de operarios. Cuando se ejecuta el programa se 
debe pedir la cantidad de sueldos a ingresar. Luego crear un vector con dicho tamaño.
 */
package com.mycompany.salario;

/**
 *
 * @author Usuario
 */
        
 import java.util.Scanner;
public class Sueldo {
    private Scanner teclado;
    private int[] sueldos;
	
    public void cargar()
    {
        teclado=new Scanner(System.in);
        System.out.print("Cuantos sueldos cargará:");
        int cant;
        cant=teclado.nextInt();
        sueldos=new int[cant];
        for(int f=0;f<sueldos.length;f++) {
            System.out.print("Ingrese sueldo:");
            sueldos[f]=teclado.nextInt();
        }	
    }
	
    public void imprimir() {
        for(int f=0;f<sueldos.length;f++) {
            System.out.println(sueldos[f]);
        }
    }
	
    public static void main(String[] ar) {
        PruebaVector8 pv=new PruebaVector8();
        pv.cargar();
        pv.imprimir();
    }
}      

    
    
    
    
    
    
    
    
