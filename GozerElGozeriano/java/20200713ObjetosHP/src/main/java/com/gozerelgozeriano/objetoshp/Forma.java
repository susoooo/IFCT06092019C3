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
            color, centro y lado. Debería usarse la función Imprimir de la clase base
            para realizar parte de este trabajo.
	- Calcular el área (lado menor * lado mayor).
	- Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
	- Cambiar el tamaño del rectángulo. Recibe como parámetro un factor de escala.
            Así, por ejemplo, si el factor vale 2, el rectángulo duplicará su tamaño
            y si es 0,5 se reducirá a la mitad.

Realice un programa que pruebe el funcionamiento de estas clases. Debe crear objetos
y comprobar el correcto funcionamiento de las funciones miembro.
*/
package com.gozerelgozeriano.objetoshp;

public class Forma {
    protected String color;
    protected punto centro;
    protected String nombre;
    
    public Forma(String color, int x, int y, String nombre){
        this.color = color;
        this.centro = new punto(x,y);
        this.nombre = nombre;
    }
    
    public String getcolor(){
        return(color);
    }
    
    public void setcolor(String color){
        this.color = color;
    }
    
    public void move(punto newcentro){
        this.centro = newcentro;
    }
    
    public void move(int x, int y){
        this.centro = new punto(x,y);
    }
    
    public void print(){
        System.out.println(nombre);
        System.out.println("Posición: " + centro.X() + " " + centro.Y());
        System.out.println(color);
    }
}
