// Ejercicio 7: Media, mayor y menor de un conjunto fijo.// Realizar un programa que pida las notas de hasta 40 alumnos por pantalla y muestre un menú// de opciones: 1. Listar notas, 2.Calcular la media, 3.Calcular el menor, 4.Calcular el// mayor.package gal.pedro.course.various;import java.util.Scanner;public class ex7 {    public static void main(String[] s){        int limit = 4;        float notas[] = new float[limit];        float total = 0;        float min =0;        float max = 0;        Scanner in = new Scanner(System.in);        String op;                        System.out.println("Introduce notes:");                for (int i = 0; i < limit; i++) {            System.out.printf("note %d? ", i);            notas[i] = in.nextInt();        }                System.out.println("=====================");        System.out.println("1-list notes,,2-calculate media,,3-min note,,4-max note");        op = in.next();        switch(op){            case "1":                for (int i = 0; i < limit; i++) {                    System.out.printf("note %d: %f\n", i+1, notas[i]);                }                break;            case "2":                for (int i = 0; i < limit; i++) {                    total += notas[i];                }                System.out.printf("Media: %f\n", total/limit);                break;            case "3":                min = notas[0];                for (int i = 0; i < limit; i++) {                    if(notas[i] < min)                        min = notas[i];                }                System.out.printf("Min note: %f", min);                break;            case "4":                max = notas[0];                for (int i = 0; i < limit; i++) {                    if(notas[i] > max)                        max = notas[i];                }                System.out.printf("Max note: %f", max);                break;            default:                System.out.println("Bad Option!! Quitting! :P");        }                in.close();    }}