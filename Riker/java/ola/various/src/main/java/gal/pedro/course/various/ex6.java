/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/* Escriba un programa en C que calcule el salario semanal de un trabajador, a partir de las
horas trabajadas y el precio cobrado por hora. Ambos valores deben ser solicitados al usuario.
La jornada normal es de 40 horas semanales. Las horas extra se pagan un cincuenta por ciento más 
caras que las normales, y pasan a pagarse al doble que las normales a partir de las 50 horas
trabajadas. */

package gal.pedro.course.various;
import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class ex6 {
   public static void main(String[] s){
        Scanner in = new Scanner(System.in);
        
        int hours;
        float hour_value;
        float total;
        
        
        System.out.print("Hours? ");
        hours = in.nextInt();
        System.out.print("Hour value? ");
        hour_value = in.nextFloat();
        
        if(hours> 40){
            total = hour_value * 40;
            if(hours > 50){
                total += hour_value*1.5*10 + (hours-50)*2*hour_value;
            } else {
                total += hour_value*1.5*(hours-40);
            }
        } else {
            total = hour_value * hours;
        }
        
        System.out.printf("Salary: %f", total);
   }
}
