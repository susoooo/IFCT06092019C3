
import java.util.Scanner;

/*
Ejercicio 3
Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while).
 */

/**
 *
 * @author Usuario
 */
public class ejercicio03 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        int primerNumero;
        int segundoNumero;
        int contador;
        primerNumero=0;
        segundoNumero=0;
        contador=0;
        System.out.println("---NUMEROS ENTRE X E Y---");
        Scanner entrada=new Scanner(System.in)        ;
        System.out.println("Introdzca el primer número: ");
        primerNumero=entrada.nextInt();
        System.out.println("Introduzca el segundo número: ");
        segundoNumero=entrada.nextInt();
        entrada.close();
        System.out.println("---BUCLE FOR---");
        for(contador=primerNumero;contador<=segundoNumero;contador++)
        {
            System.out.print(contador+" ");
        } 
        System.out.println("");
        System.out.println("---WHILE---");
        contador=primerNumero;
        while(contador <= segundoNumero)
        {
            System.out.print(contador+" ");
            contador++;
        }
        System.out.println("");
        System.out.println("---DO WHILE---");
        contador=primerNumero;
        do
        {
            System.out.print(contador+" ");
            contador++;
        }while(contador <= segundoNumero);
        System.out.println("");
        
        
    }
}
