

/*Ejercicio 2: Cambio de dólares a euros.
Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros.*/

import java.util.Scanner;

public class euros {
    
    
    public static void main(String[] args) 
 {
    float euros = 0;
    float dolares = 0;

    Scanner entrada = new Scanner(System.in);
    
    System.out.println("Digame una cantidad de dólares: ");
    dolares = entrada.nextFloat();
    
    euros = dolares/ 1.33250f; // euros = dolares*(float) 1.33250;
      
    System.out.println("El cambio a euros es igual a "+euros);
    
 }
    
}
