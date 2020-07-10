/*
Ejercicio 6: Escriba un programa en C que calcule el salario semanal de un trabajador,
a partir de las horas trabajadas y el precio cobrado por hora. Ambos valores deben ser
solicitados al usuario. La jornada normal es de 40 horas semanales. Las horas extra se
pagan un cincuenta por ciento más caras que las normales, y pasan a pagarse al doble
que las normales a partir de las 50 horas trabajadas.
 */
package com.gozerelgozeriano.e20200708;

import java.util.Scanner;
public class ej6 {
    static final int HORASJORNADA = 40;
    static final int BONUSLINE = 50;
    static final float BONUS1 = 1.5f;
    static final float BONUS2 = 2.0f;
    
    public static void main(String[] args){
        int horas;
        float sueldohora;
        int horasextra;
        int superhorasextras;
        sueldohora=0.0f;
        System.out.println("Horas trabajadas: ");
        Scanner in = new Scanner(System.in);
        horas = in.nextInt();
        System.out.println("Precio horas: ");
        try
        {
            sueldohora = in.nextFloat();
        }catch(Exception e)
        {
            System.out.println(e);
        }
        in.close();
        
        superhorasextras = horas-BONUSLINE;
        if(superhorasextras<0) superhorasextras=0;
	horasextra=horas-HORASJORNADA;
	if(horasextra<0) horasextra=0;
	if(horasextra>BONUSLINE-HORASJORNADA) horasextra=BONUSLINE-HORASJORNADA;
	if(horas>HORASJORNADA) horas=HORASJORNADA;
	
	System.out.println("----------------------------------");
	System.out.printf("Sueldo = %f€\n", horas*sueldohora+horasextra*sueldohora*BONUS1+superhorasextras*sueldohora*BONUS2);
	System.out.printf("Trabajadas %d horas normales a %f€\n",horas,sueldohora);
	System.out.printf("Trabajadas %d horas extra a %f€\n",horasextra,sueldohora*BONUS1);
	System.out.printf("Trabajadas %d horas superextra a %f€\n",superhorasextras,sueldohora*BONUS2);
        
    }
            
}
