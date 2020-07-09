package com.company;

import java.io.*;
import java.util.Arrays;

public class Main {
    static Util Util = new Util();
    static Ejercicios Ejercicios = new Ejercicios();

    public static void main(String[] args) throws IOException {
        int Opcion;
        boolean Running = true;

        while(Running) {
            System.out.println("0 = Salir de programa");
            System.out.print("Ejercicio: ");
            Opcion = Integer.parseInt(Util.Input.readLine());

            switch(Opcion) {
                case 0: {
                    System.out.println("Saliendo");
                } break;
                case 1: {
                    Ejercicios.Ejercicio1();
                } break;

                case 2: {
                    Ejercicios.Ejercicio2();
                } break;

                case 3: {
                    Ejercicios.Ejercicio3();
                } break;

                case 4: {
                    Ejercicios.Ejercicio4();

                } break;

                case 5: {
                    Ejercicios.Ejercicio5();
                } break;

                case 6: {
                    Ejercicios.Ejercicio6();
                } break;

                case 7: {
                    Ejercicios.Ejercicio7();
                } break;

                default: {
                    System.out.println("Opcion invalida");
                } break;
            }
        }
    }
}

class Ejercicios {
    static Util Util = new Util();

    void Ejercicio1() throws IOException {
        int PrimerLado, SegundoLado, Area, Perimetro;

        System.out.println("Lados del rectangulo");
        System.out.print("Primer lado: ");
        PrimerLado = Integer.parseInt(Util.Input.readLine());
        System.out.print("Segundo lado:");
        SegundoLado = Integer.parseInt(Util.Input.readLine());

        Area = PrimerLado * SegundoLado;
        Perimetro = PrimerLado + SegundoLado;

        System.out.println("El rectangulo tiene " + Area + " de area.");
        System.out.println("El rectangulo tiene " + Perimetro + " de perimetro.");
    }

    void Ejercicio2() throws IOException {
        float Dinero;

        System.out.print("Dolares: ");
        Dinero = Float.parseFloat(Util.Input.readLine()) * (1 / 1.33250f);
        System.out.println("Euros: " + Dinero);
    }

    void Ejercicio3() throws IOException {
        int PrimerNumero, SegundoNumero, Iter = 0;

        System.out.print("Primer numero: ");
        PrimerNumero = Integer.parseInt(Util.Input.readLine());
        System.out.print("Segundo numero: ");
        SegundoNumero = Integer.parseInt(Util.Input.readLine());

        for(int i = PrimerNumero; i <= SegundoNumero; i++) {
            System.out.printf("%d ", i);
        } System.out.println("");

        Iter = PrimerNumero;
        while(Iter <= SegundoNumero) {
            System.out.printf("%d ", Iter);
            Iter++;
        } System.out.println("");

        Iter = PrimerNumero;
        do {
            System.out.printf("%d ", Iter);
            Iter++;
        } while(Iter <= SegundoNumero);
        System.out.println("");
    }

    void Ejercicio4() throws IOException {
        int NumeroBase, Resultado;

        System.out.print("Numero a calcular factorial: ");
        NumeroBase = Integer.parseInt(Util.Input.readLine());
        System.out.println(Util.Integrar(NumeroBase));
    }

    void Ejercicio5() throws IOException {
        int[] Numeros = new int[3];

        System.out.println("Escriba tres numeros a comparar:");
        for(int i = 0; i < 3; i++) {
            Numeros[i] = Integer.parseInt(Util.Input.readLine());
        }
        Arrays.sort(Numeros);
        System.out.println("Mayor: " + Numeros[2]);
        System.out.println("Medio: " + Numeros[1]);
        System.out.println("Menor: " + Numeros[0]);
    }

    void Ejercicio6() throws IOException {
        int HorasTrabajadas;
        float TasaHoraria, Salario;

        System.out.println("Calculador de Salario\n");
        System.out.print("Horas trabajadas (entero): ");
        HorasTrabajadas = Integer.parseInt(Util.Input.readLine());
        System.out.print("Tasa Horaria (real): ");
        TasaHoraria = Float.parseFloat(Util.Input.readLine());

        if(HorasTrabajadas < 40) {
            Salario = HorasTrabajadas * TasaHoraria;
        } else if(HorasTrabajadas > 40 && HorasTrabajadas < 50) {
            Salario = (40 * TasaHoraria)
                    + ((HorasTrabajadas - 40) * (TasaHoraria * 1.5f));
        } else {
            Salario = (40 * TasaHoraria)
                    + (10 * (TasaHoraria * 1.5f))
                    + ((HorasTrabajadas - 50) * (TasaHoraria * 1.5f));
        }
    }

    void Ejercicio7() throws IOException {
        int NumeroDeNotas = 0;
        float[] Notas;
        boolean Running = true;

        System.out.println("Numero de notas debe estar entre 0 y 40.");
        while(NumeroDeNotas <= 0 || NumeroDeNotas > 40) {
            System.out.print("¿Cuantas notas a ingresar?: ");
            NumeroDeNotas = Integer.parseInt(Util.Input.readLine());
        }
        Notas = new float[NumeroDeNotas];

        for(int i = 0; i < NumeroDeNotas; i++) {
             Notas[i] = Float.parseFloat(Util.Input.readLine());
        }

        while(Running) {
            int Opcion = 0;

            System.out.print("1. Listar notas \n"
                           + "2. Calcular media \n"
                           + "3. Calcular el menor \n"
                           + "4. Calcular el mayor \n"
                           + "0. Salir \n");
            Opcion = Integer.parseInt(Util.Input.readLine());

            switch (Opcion) {
                case 1: {
                    for(float item : Notas) {
                        System.out.println(item);
                    }
                } break;

                case 2: {
                    float Media = 0;

                    for(float item : Notas) {
                        Media += item;
                    }
                    Media /= NumeroDeNotas;

                    System.out.println("La media de notas es " + Media);
                } break;

                case 3: {
                    float Menor = Notas[0];

                    for(float item : Notas) {
                        if (item < Menor) Menor = item;
                    }

                    System.out.println("La nota menor es " + Menor);
                } break;

                case 4: {
                    float Mayor = Notas[0];

                    for(float item : Notas) {
                        if (item > Mayor) Mayor = item;
                    }

                    System.out.println("La nota menor es " + Mayor);
                }

                case 5: {
                    Running = false;
                    System.out.println("Saliendo");
                }

                default: {
                    System.out.println("Opcion invalida");
                }
            }
        }
    }
}

class Util {
    BufferedReader Input = new BufferedReader(new InputStreamReader(System.in));

    int Integrar(int Numero) {
        int Resultado;

        if(Numero == 1) {
            Resultado = 1;
        } else {
            Resultado = Numero * Integrar(Numero - 1);
        }

        return Resultado;
    }
}