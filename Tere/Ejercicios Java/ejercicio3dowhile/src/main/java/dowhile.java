/*
Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while).
 */

import java.util.Scanner;

public class dowhile {
    
     public static void main(String[] args) 
 {
    int numero =0;
    int numero2 = 0;
    
     
    Scanner entrada = new Scanner(System.in);
    
    System.out.println("Digame un numero: ");
    numero = entrada.nextInt();
    
    System.out.println("Digame otro numero: ");
    numero2 = entrada.nextInt();
    
     
    numero=1;

    do
    {
	System.out.println(numero);
	numero++;
    }
    while(numero<= numero2);
    
}
}