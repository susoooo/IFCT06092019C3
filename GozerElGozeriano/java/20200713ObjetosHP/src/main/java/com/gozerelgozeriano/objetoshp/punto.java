package com.gozerelgozeriano.objetoshp;

/*
1-Crea una clase que represente un punto en el espacio.
Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.
 */

public class punto {
    protected int x;
    protected int y;
    
    public punto(int x, int y){
        this.x=x;
        this.y=y;
    }
    
    public int X(){
        return(x);
    }
    
    public int Y(){
        return(y);
    }
    
    public void move(int x,int y){
        this.x=x;
        this.y=y;
    }
}
