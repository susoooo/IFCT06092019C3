/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ifct0609.ejercicios1;

/**
 *
 * @author Usuario
 */

import java.util.*;
        
public class menu 
{
    public static void main(String[] args)
    {
        int opcion;
        
        do
        {
            System.out.println("");
            System.out.println("");
            System.out.println("Menú Principal.");
            System.out.println("---------------");
            System.out.println("1. Área/Perímetro.");
            System.out.println("2. Cambio dólar/euro");
            System.out.println("3. Bucles números");
            System.out.println("4. Factorial");
            System.out.println("5. Mayor/menor/igual");
            System.out.println("6. Calcular salario");
            System.out.println("7. Nota media/mayor/menor");
            System.out.println("0. Salir");
            System.out.println("-------------------------");
            System.out.println("");
            System.out.println("Elija una opción: ");

            Scanner tecla = new Scanner(System.in);
            opcion = tecla.nextInt();
            
            switch (opcion)
            {
                case 1:
                {
                    int lado1;
                    int lado2;
                    int area;
                    int perimetro;

                    System.out.println("");
                    System.out.println("Cálculo de área y perímetro");
                    System.out.println("---------------------------");
                    System.out.println("");
                    System.out.println("Introduzca longitud del lado 1: ");  

                    lado1 = tecla.nextInt();

                    System.out.println("");
                    System.out.println("Introduzca longitud del lado 2: ");
                    
                    lado2 = tecla.nextInt();

                    area = lado1 * lado2;
                    perimetro = (lado1 + lado2) * 2;

                    System.out.println("");
                    System.out.println("El área es de: " + area);

                    System.out.println("");
                    System.out.println("El perímetro es de: " + perimetro);

                    break;             
                }
                
                case 2:
                {
                    float dolares;
                    float euros;

                    System.out.println("");
                    System.out.println("Cambio de dolares a euros.");
                    System.out.println("---------------------------");
                    System.out.println("");
                    System.out.println("Introduzca cantidad dólares: ");

                    dolares = tecla.nextInt();

                    euros = (float) (dolares / 1.33250);

                    System.out.println("");
                    System.out.println("El resultado de pasar " + dolares + "dólares a euros es: " + euros);

                    break;             
                }
                
                case 3:
                {
                    int numero1;
                    int numero2;
                    int intercambio;
                    int contador;
                    
                    System.out.println("");
                    System.out.println("Números entre dos introducidos.");
                    System.out.println("---------------------------");
                    System.out.println("");
                    System.out.println("Introduzca primer número: ");

                    numero1 = tecla.nextInt();
                    
                    System.out.println("");
                    System.out.println("Introduzca segundo número: ");
                    
                    numero2 = tecla.nextInt();

                    if (numero1 > numero2)
                    {
                        intercambio = numero1;
                        numero1 = numero2;
                        numero2 = intercambio;
                    }
                    
                    System.out.println("");
                    System.out.println("Listado con bucle FOR: ");
                    
                    for (contador = numero1 +1; contador < numero2; contador++)
                    {                        
                        System.out.printf(contador + ", ");
                    }
                    
                    System.out.println("");
                    System.out.println("Listado con bucle WHILE: ");
                    
                    contador = numero1 + 1;
                    
                    while (contador < numero2)
                    {
                       System.out.printf(contador + ", ");
                       contador++;
                    }
                    
                    System.out.println("");
                    System.out.println("Listado con bucle DO/WHILE: ");
                    
                    contador = numero1 +1;
                    
                    do
                    {
                       System.out.printf(contador + ", ");
                       contador++;
                    } 
                    while (contador < numero2);
                    
                    break;             
                }
                
                case 4:
                {
                    int numero;
                    int factorial;
                    int contador;
                    
                    System.out.println("");
                    System.out.println("Cálculo de factorial.");
                    System.out.println("---------------------------");
                    System.out.println("");
                    System.out.println("Introduzca un número: ");

                    numero = tecla.nextInt();
                    
                    factorial = 1;
                    
                    for (contador = numero; contador > 1; contador--)
                    {
                        factorial = factorial * contador;
                    }
                    
                    System.out.println("");
                    System.out.println("El factorial del número: " + numero + " es igual a: " + factorial);
                    
                    break;             
                }
                
                case 5:
                {
                    int numero1;
                    int numero2;
                    int numero3;
                    int mayor;
                    int intermedio;
                    int menor;
                    int correcto = 0;
                    
                    do
                    {
                        System.out.println("");
                        System.out.println("Cálculo del mayor, segundo mayor y menor de 3 números.");
                        System.out.println("---------------------------");
                        System.out.println("");
                        System.out.println("Introduzca el primer número: ");

                        numero1 = tecla.nextInt();
                        
                        System.out.println("");
                        System.out.println("Introduzca el segundo número: ");

                        numero2 = tecla.nextInt();

                        System.out.println("");
                        System.out.println("Introduzca el tercer número: ");

                        numero3 = tecla.nextInt();
                        
                        if ( ((numero1 != numero2) && (numero1 != numero3)) && (numero3 != numero2))
                        {
                            correcto = 1;
                        }
                        else
                        {
                            System.out.println("");
                            System.out.println("Por favor, aprenda más números y no los repita, que solo son 3. ");
                        }
                        
                    }
                    while (correcto != 1);
                    
                    
                    if ((numero1 > numero2) && (numero1 > numero3))
                    {
                        mayor = numero1;
                        if (numero2 > numero3)
                        {
                            intermedio = numero2;
                            menor = numero3;
                        }
                        else
                        {
                            intermedio = numero3;
                            menor = numero2;
                        }
                    }
                    else
                    {
                        if ((numero2 > numero1) && (numero2 > numero3))
                        {
                            mayor = numero2;
                            if (numero1 > numero3)
                            {
                                intermedio = numero1;
                                menor = numero3;
                            }
                            else
                            {
                                intermedio = numero3;
                                menor = numero1;
                            }
                        }
                        else
                        {
                            mayor = numero3;
                            if (numero1 > numero2)
                            {
                                intermedio = numero1;
                                menor = numero2;
                            }
                            else
                            {
                                intermedio = numero2;
                                menor = numero1;
                            }
                        }
                    }
                    
                    System.out.println("");
                    System.out.println("El número mayor es: " + mayor);
                    System.out.println("");
                    System.out.println("El número intermedio es: " + intermedio);
                    System.out.println("");
                    System.out.println("El número menor es: " + menor);
                    
                    break;             
                }
                
                case 6:
                {
                    float horas;
                    float extras;
                    float tarifaHora;
                    float sueldo;
                    
                    System.out.println("");
                    System.out.println("Cálculo de nómina.");
                    System.out.println("---------------------------");
                    System.out.println("");
                    System.out.println("Introduzca el número de horas trabajadas: ");
                    
                    horas = tecla.nextFloat();
                    
                    System.out.println("");
                    System.out.println("Introduzca la tarifa por hora: ");
                    
                    tarifaHora = tecla.nextFloat();
                    
                    if (horas > 50)
                    {
                        extras = horas - 50;
                        sueldo = (float) (extras * (tarifaHora * 2)) + (float) ((tarifaHora * 1.5) * 10) + tarifaHora * 40;
                    }
                    else
                    {
                        if (horas > 40)
                        {
                            extras = horas - 40;
                            sueldo = (float) ((tarifaHora * 1.5) * extras) + tarifaHora * 40;
                        }
                        else
                        {
                            sueldo = tarifaHora * horas;
                        }
                    }
                    
                    System.out.println("");
                    System.out.println("El trabajador ha hecho " + horas + " horas, a una tarifa de: " + tarifaHora + " euros/hora.");
                    System.out.println("Con lo que su sueldo es de: " + sueldo);
                    
                    break;             
                }
                
                case 7:
                {
                    float nota;
                    Vector notas = new Vector();
                    float media;
                    float mayor;
                    float menor;
                    int contador;
                    int alumnos;
                    int opcion1;
                    
                    alumnos = 0;
                    
                    do
                    {
                        System.out.println("");
                        System.out.println("Cálculo de notas.");
                        System.out.println("---------------------------");
                        System.out.println("");
                        System.out.println("1. Introduzca notas: ");
                        System.out.println("2. Listar notas.");
                        System.out.println("3. Calcular nota media.");
                        System.out.println("4. Calcular nota más alta.");
                        System.out.println("5. Calcular nota más baja.");
                        System.out.println("0. Finalizar.");
                        System.out.println("");
                        System.out.println("Elija una opción: ");

                        opcion1 = tecla.nextInt();

                        switch (opcion1)
                        {
                            case 1:
                            {
                                System.out.println("");
                                System.out.println("Introducción de notas: ");
                                
                                alumnos = 1;
                                int seguir = 0;
                                                                  
                                do
                                {
                                    System.out.println("");
                                    System.out.println("Introduzca la nota " + alumnos + " ('99' para finalizar):");
                                    
                                    nota = tecla.nextFloat();
                                    if (nota <= 10)
                                    {
                                        notas.add(nota);
                                        alumnos++;                                        
                                    }
                                    else
                                    {
                                        seguir = 1;
                                    }
                                }
                                while (seguir != 1);
                                
                                break;
                            }
                            case 2:
                            {
                                System.out.println("");
                                System.out.println("Listado notas: ");
                                
                                for (contador = 0; contador < notas.capacity(); contador++)
                                {
                                    System.out.println("");
                                    System.out.println("Nota " + contador + ": " + notas.get(contador));
                                }
                                
                                break;
                            }
                            case 3:
                            {
                                System.out.println("");
                                System.out.println("Calculo de nota media. ");
                                
                                media = 0;
                                
                                for (contador = 0; contador < notas.capacity(); contador++)
                                {
                                    media = media + (float) notas.get(contador);
                                }
                                
                                media = media / alumnos;
                                
                                System.out.println("");
                                System.out.println("La nota media es de: " + media);
                                
                                break;
                            }
                            case 4:
                            {
                                System.out.println("");
                                System.out.println("Cálculo nota más alta: ");
                                
                                mayor =0;
                                
                                for (contador = 0; contador < notas.capacity(); contador++)
                                {
                                    if ( (float) notas.get(contador) > mayor)
                                    {
                                        mayor = (float) notas.get(contador);
                                    }
                                }
                                
                                System.out.println("");
                                System.out.println("Nota más alta: " + mayor);
                                
                                System.out.println("De los alumnos: ");
                                
                                for (contador = 0; contador < notas.capacity(); contador++)
                                {
                                    if ( (float) notas.get(contador) == mayor)
                                    {
                                        System.out.println(contador);
                                    }
                                }
                                
                                break;
                            }
                            case 5:
                            {
                                System.out.println("");
                                System.out.println("Cálculo nota más baja: ");
                                
                                menor = 11;
                                
                                for (contador = 0; contador < notas.capacity(); contador++)
                                {
                                    if ( (float) notas.get(contador) < menor)
                                    {
                                        menor = (float) notas.get(contador);
                                    }
                                }
                                
                                System.out.println("");
                                System.out.println("Nota más baja: " + menor);
                                
                                System.out.println("De los alumnos: ");
                                
                                for (contador = 0; contador < notas.capacity(); contador++)
                                {
                                    if ( (float) notas.get(contador) == menor)
                                    {
                                        System.out.println(contador);
                                    }
                                }
                                
                                break;
                            }
                            default:
                                System.out.println("Finalizado. ");
                        }
                    }
                    while (opcion1 != 0);
                    
                    
                    break;             
                }
                
                default:
                {
                    System.out.println("");
                    System.out.println("");
                    System.out.println("Para esto me ejecuta?. Anda a silbar a la vía.");
                    
                }
            }
        } while (opcion != 0);
        
    } // Final main

} // Final Class
