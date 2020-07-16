/*
1-Crea una clase que represente un punto en el espacio.
Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.
 */
package com.mycompany.space1;

/**
 *
 * @elvis
 */
 class espacio {
    
    private int x;
    private int y;
    
espacio(int x, int y)
{
    this.x=x;
    this.y=y;
}

public void setx(int x){
    this.x=x;
}

public void sety(int y){
    this.y=y;
}

public int getx(){
    return x;
}

public int gety(){
    
    return y;
}
}

 public class espacioCor {
    
   public static void main(String[] args) 
       
       
   {
       
     espacio primero;
     primero= new espacio(1,9);
       
     espacio segundo;
     segundo= new espacio(4,2);
     
     espacio tercero;
     tercero= new espacio(7,9);
             
     
     
   } 
      
}
        