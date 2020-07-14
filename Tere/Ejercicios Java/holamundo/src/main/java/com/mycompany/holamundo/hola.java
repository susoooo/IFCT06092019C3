
/*Ejercicio 1: Cálculo de área y perímetro
Escribe un programa que pregunte al usuario los dos lados de un rectángulo y
presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por
altura).*/

package com.mycompany.holamundo;


public class AreaRectangulo
{

 public static void main(String[] args) 
 {
    int area_rectangulo = 0;
    float perimetro_rectangulo = 0;

    int base = 10;
    int altura = 20;
    
    
    area_rectangulo = base*altura;
    perimetro_rectangulo = 2*base+2*altura;

    
    System.out.println("El area de un rectangulo de base "+base+" y altura "+altura+" es igual a "+area_rectangulo);
    System.out.println("El perimetro de un rectangulo de base "+base+" y altura "+altura+" es igual a "+perimetro_rectangulo);

 }

}


 


