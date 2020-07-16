/*Ejercicio 5: Condición if 4. Realizar un programa que pida tres números 
y diga cuál es el mayor, cuál es el segundo mayor, y cuál es el menor

 */
import java.util.Scanner;

public class condicionif {
    
    
    
    public static void main(String[] args) 
 {
    int numero =0;
    int numero2 = 0;
    int numero3 = 0;
    
     
    Scanner entrada = new Scanner(System.in);
    
    System.out.println("Digame un numero: ");
    numero = entrada.nextInt();
    
    System.out.println("Digame otro numero: ");
    numero2 = entrada.nextInt();
    
    System.out.println("Digame otro numero: ");
    numero3 = entrada.nextInt();
    
     
        if (numero > numero2) 
{
            if (numero > numero3) {
                System.out.println("El mayor es: " + numero);                                             
            } else {
                System.out.println("el mayor es: " + numero3);     
            }
        } else if (numero2 > numero3) {
            System.out.println("el mayor es: " + numero2);
        } else {
            System.out.println("el mayor es: " + numero3);
        }
        
         if (numero < numero2) 
{
            if (numero < numero3) {
                System.out.println("El menor es: " + numero);                                             
            } else {
                System.out.println("el menor es: " + numero3);     
            }
        } else if (numero2 < numero3) {
            System.out.println("el menor es: " + numero2);
        } else {
            System.out.println("el menor es: " + numero3);
        }
    
}
}

    

    
    

