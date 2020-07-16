/*
2-Crea una clase que represente un ordenador.
Deberá incluir al menos métodos para enchufarlo, desenchufarlo, encenderlo, y apagarlo.
Crea un programa que enchufe un portatil, lo encienda, lo cargue, lo apague y lo desenchufe.
 */
package com.gozerelgozeriano._java.aobjetos;
import java.util.Scanner;
public class ej2 {
    public static void main(String[] args){
        ordenador cacharro = new ordenador();
        int option;
        Scanner sc = new Scanner(System.in);
        do{
            System.out.println("1)Enchufar\n2)Encender\n3)Desenchufar\n4)Apagar\n5)Salir");
            option=sc.nextInt();
            switch(option){
                case 1 -> cacharro.enchufar();
                case 2 -> cacharro.encender();
                case 3 -> cacharro.desenchufar();
                case 4 -> cacharro.apagar();             }
        }while(option!=5);
    }
}