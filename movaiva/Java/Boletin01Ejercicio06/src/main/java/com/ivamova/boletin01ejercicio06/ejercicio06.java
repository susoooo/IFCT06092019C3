/*
 Ejercicio 6: Escriba un programa en C que calcule el salario semanal de un trabajador, 
a partir de las horas trabajadas y el precio cobrado por hora. Ambos valores deben 
ser solicitados al usuario. La jornada normal es de 40 horas semanales. Las horas 
extra se pagan un cincuenta por ciento más caras que las normales, y pasan a pagarse 
al doble que las normales a partir de las 50 horas trabajadas.
 */
package com.ivamova.boletin01ejercicio06;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ejercicio06 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        double salario;
        double precioHora;
        double horas;
        double horasNormal;
        double horasExtra;
        double horasDoble;
        double extra;
        double doble;
        double precioExtra;
        double precioMas50;
        double resto;
        salario = 0;
        horas = 0;
        horasExtra = 0;
        horasDoble = 0;
        horasNormal = 0;
        precioHora = 0;
        extra = 0;
        doble = 0;
        precioExtra = 0.5;
        precioMas50 = 2;
        resto = 0;
        Scanner entrada = new Scanner(System.in);
        System.out.println("---CALCULO SALARIO SEMANAL---");
        System.out.println("Introduzca las hora trabajadas: ");
        horas = entrada.nextDouble();
        System.out.println("Introduzca el precio por hora: ");
        precioHora = entrada.nextDouble();
        entrada.close();

        if (horas > 50) {
            horasDoble = horas - 50;            
            horasExtra = horas - 40 - horasDoble;
        } else if (horas > 40) {
            horasExtra = horas - 40;
        }
        
        extra = precioHora * precioExtra * horasExtra;
        doble = precioHora * precioMas50 * horasDoble;
        horasNormal = horas - horasExtra - horasDoble;
        salario = horasNormal * precioHora + extra + doble;

        System.out.println("El salario de un trabajador que trabaja " + horas + " horas y cobra por hora " + precioHora + " es " + salario);

    }
}
