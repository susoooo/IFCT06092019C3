
import java.util.Scanner;

/*
 Ejercicio 5: 
Condición if 4. Realizar un programa que pida tres números y diga cuál es el 
mayor, cuál es el segundo mayor, y cuál es el menor
 */
/**
 *
 * @author Usuario
 */
public class ejercicio05 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        System.out.println("---COMPARADOR DE NÚMEROS---");
        float numero1;
        float numero2;
        float numero3;
        float mayor;
        float medio;
        float menor;
        numero1 = 0;
        numero2 = 0;
        numero3 = 0;
        mayor = 0;
        menor = 0;
        medio = 0;

        Scanner entrada = new Scanner(System.in);
        System.out.println("Introduzca el primer número:");
        numero1 = entrada.nextFloat();

        System.out.println("Introduzca el segundo número:");
        numero2 = entrada.nextFloat();

        System.out.println("Introduzca el tercer número:");
        numero3 = entrada.nextFloat();
        
        entrada.close();

        if ((numero1 > numero2) && (numero1 > numero3)) {
            mayor = numero1;
            if (numero2 > numero3) {
                medio = numero2;
                menor = numero3;
            } else {
                medio = numero3;
                menor = numero2;
            }
        } else if ((numero2 > numero1) && (numero2 > numero3)) {
            mayor = numero2;
            if (numero1 > numero3) {
                medio = numero1;
                menor = numero3;
            } else {
                medio = numero3;
                menor = numero1;
            }
        } else {
            mayor = numero3;
            if (numero1 > numero2) {
                medio = numero1;
                menor = numero2;
            } else {
                medio = numero2;
                menor = numero1;
            }
        }
        System.out.print(mayor);
        if (mayor == medio) {
            System.out.print(" = ");
        } else {
            System.out.print(" > ");
        }
        System.out.print(medio);
        if (medio == menor) {
            System.out.print(" = ");;
        } else {
            System.out.print(" > ");
        }
        System.out.println(menor);

    }
}
