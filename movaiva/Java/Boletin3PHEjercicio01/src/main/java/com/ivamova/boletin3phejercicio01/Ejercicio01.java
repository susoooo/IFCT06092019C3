/*
 1-Defina una clase Forma que tenga los siguientes miembros de datos:
	- Color
	- Coordenada del centro de la forma (objeto Punto)
	- Nombre de la forma (char *)
  Y, al menos, las siguientes funciones miembro:
	- Imprimir
	- Obtener y cambiar el color
	- Mover la forma (o sea, su centro)
 Defina una clase hija Rectangulo que tenga los siguientes miembros como datos:
	- Lado menor.
	- Lado mayor.
  Y, al menos, las siguientes funciones miembro:
	- Imprimir. Debe imprimir qué se trata de un rectángulo mostrando su nombre, 
color, centro y lado. Debería usarse la función Imprimir de la clase base para realizar parte de este trabajo.
	- Calcular el área (lado menor * lado mayor).
	- Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
	- Cambiar el tamaño del rectángulo. Recibe como parámetro un factor de escala. 
Así, por ejemplo, si el factor vale 2, el rectángulo duplicará su tamaño y si es 0,5 se reducirá a la mitad.

Realice un programa que pruebe el funcionamiento de estas clases. Debe crear objetos 
y comprobar el correcto funcionamiento de las funciones miembro.

2-Defina una clase Elipse derivada de forma. Recordatorio: una elipse queda definida
por su radio mayor (R) y su radio menor (r), tal que el área de una elipse es igual a π*(R*r).

3-Defina una clase Cuadrado derivada de la clase Rectangulo.
4-Defina una clase Circulo derivada de la clase Elipse.
5-Realice un programa que defina varias formas diferentes, cree un array de punteros 
de la clase Forma que apunten a los objetos creados. El programa debe realizar un 
bucle que recorra todas las formas, las ponga todas del mismo color y las mueva a
una determinada posición.
8-Desarrolle un programa que, dado un conjunto de formas, calcule cuál tiene el 
área máxima e imprima la información de dicha forma.
 */
package com.ivamova.boletin3phejercicio01;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class Ejercicio01 {

    /**
     * @param args the command line arguments
     */
    @SuppressWarnings("empty-statement")
    public static void main(String args[]) {
        
        
        Forma f1=new Forma("Amarillo",4,5,"Forma");
        f1.imprimir();
        f1.cambiarColor("Gris");
        f1.moverForma(2, 2);
        f1.imprimir();
        
        Rectangulo r1=new Rectangulo("Rosa",5,0,"Rectangulo",(float)5.5,(float)4.8);
        r1.imprimir();
        r1.cambiarTamanio((float)0.5);
        r1.imprimir();
        
        Elipse e1=new Elipse("Rojo",4,8,"Elipse",(float)6.5,(float)3.8);
        e1.imprimir();
        
        Cuadrado c1=new Cuadrado("Verde",5,0,"Cuadrado",(float)8.5);
        c1.imprimir();
        
        Circulo cr1=new Circulo("Azul",4,8,"Elipse",(float)4.5);
        cr1.imprimir();
        
        Forma formas[]={f1,r1,e1,c1,cr1};
        
        for (int contador = 0; contador < formas.length; contador++) {
            formas[contador].cambiarColor("Naranja");
            formas[contador].moverForma(6, 6);
            formas[contador].imprimir();
        }
        
        
        
};
        
    }
}
