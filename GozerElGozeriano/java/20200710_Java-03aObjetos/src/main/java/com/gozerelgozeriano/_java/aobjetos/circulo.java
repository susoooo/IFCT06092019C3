/*
5-Detector de colisiones: Un circulo puede representarse mediante un punto y un
radio. Crea 15 circulos y posicionalos en un espacio bidimensional de 100 x 100.
Asginales como mucho un radio de 5. Crea un programa que los mueva aleatoriamente
por el espacio bidimensional y que detecte en el momento que se produce una
colisión entre dos de ellos. En el momento de producirse una colisión, el programa
imprimirá la colisión y se cerrará.
 */
package com.gozerelgozeriano._java.aobjetos;

public class circulo extends punto {
    final private int radio;
    
    public circulo(int x, int y,int radio){
        super(x,y);
        this.radio=radio;
    }

    public boolean incircle(punto point){
        return((point.X() - x) * (point.X() - x ) + (point.Y() - y) * (point.Y()-y) <= radio*radio);
    }
    
    public boolean colision(circulo newcirculo){
        double hipotenusa;
        if(newcirculo.X() == x){
            hipotenusa = Math.abs(newcirculo.Y()-y);
        }else{
            if(newcirculo.Y() == y){
                hipotenusa = Math.abs(newcirculo.X()-x);
            }else{
                hipotenusa = Math.sqrt(Math.pow(newcirculo.X()-x,2)+Math.pow(newcirculo.Y()-y,2));
            }
        }
        return(hipotenusa < (newcirculo.radio + radio));
    }
    
}
