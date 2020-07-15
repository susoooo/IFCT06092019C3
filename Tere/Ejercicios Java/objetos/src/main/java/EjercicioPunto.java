/*1-Crea una clase que represente un punto en el espacio.
Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.
 */

public class Objetos1 {
  
    
private int x;
private int y;

    

// constructor

 Objetos1(int x, int y){ 
    this.x=x;
    this.y=y;
} 

public void setx(int x){
    this.x= x;
}

public void sety( int y) {
this.y = y;
}

public int getX() {
return x;
}

public int getY() {
return y;
}
}

public class EjercicioPunto {
    
public static void main(String[] args)
        
{
Objetos1 primero;
primero = new Objetos1(1,3);

Objetos1 segundo;
segundo = new Objetos1(3,5);

Objetos1 tercero;
tercero = new Objetos1(4,8);
 
}

}

