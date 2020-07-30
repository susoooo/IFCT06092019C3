/*
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
 */
package com.gozerelgozeriano.objetoshp;

public class Rectangulo extends Forma{
    protected float ladomenor;
    protected float ladomayor;
    
    public Rectangulo(String color, int x, int y, String nombre, float ladomenor, float ladomayor){
        super(color,x,y,nombre);
        this.ladomenor = ladomenor;
        this.ladomayor = ladomayor;
    }
    
    public void print(){
        super.print();
        System.out.println(ladomenor + "x" + ladomayor);
        System.out.println("Area: " + area());
        System.out.println("Perímetro: " + perimetro());
    }
    
    public float area(){
        return(ladomayor*ladomenor);
    }
    
    public float perimetro(){
        return(2*ladomenor + 2*ladomayor);
    }
    
    public void resize(float factor){
        this.ladomayor*=factor;
        this.ladomenor*=factor;
    }
    
}
