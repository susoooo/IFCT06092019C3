/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.intro;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import static java.lang.System.in;
import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class calculo {
     public static void main(String[] args){

        //Declaracion
        Scanner scn= new Scanner(System.in);
int lado1;
int lado2;
float area;
float perimetro;

//Introduce datos
System.out.println("Introduce el valor en centímetros del primer lado de un rectángulo \n");
//entrada
lado1 = scn.nextInt();
System.out.println("Introduce el valor en centímetros del segundo lado de un rectángulo \n");
lado2 = scn.nextInt();
//Operaciones
area=lado1*lado2;
perimetro=(2*lado1)+(2*lado2);
//Salida de datos por pantalla
System.out.println("La superficie del rectángulo es de:  " + area + "\nEl perímetro del rectángulo es de: " + perimetro);
    }
}
