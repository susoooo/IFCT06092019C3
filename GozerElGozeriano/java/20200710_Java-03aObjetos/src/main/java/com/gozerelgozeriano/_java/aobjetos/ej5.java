/*
5-Detector de colisiones: Un circulo puede representarse mediante un punto y un
radio. Crea 15 circulos y posicionalos en un espacio bidimensional de 100 x 100.
Asginales como mucho un radio de 5. Crea un programa que los mueva aleatoriamente
por el espacio bidimensional y que detecte en el momento que se produce una
colisión entre dos de ellos. En el momento de producirse una colisión, el programa
imprimirá la colisión y se cerrará.
 */
package com.gozerelgozeriano._java.aobjetos;
import java.security.SecureRandom;

public class ej5 {
    public static void main(String[] args){
        final int MAXCIRCULOS = 15;
        final int MATRIX_X = 100;
        final int MATRIX_Y = 100;
        final int MAXRADIO = 5;
        SecureRandom sr = new SecureRandom();
        circulo[] circulos = new circulo[MAXCIRCULOS];
        int i;
        int j;
        int m;
        int k;
        int found = 0;
        
        for(i=0;i<MAXCIRCULOS;i++){
            circulos[i]= new circulo(sr.nextInt(MATRIX_X+1),sr.nextInt(MATRIX_Y+1),sr.nextInt(MAXRADIO)+1);
        }
        
        for(i=0;i<MAXCIRCULOS;i++){
            circulos[i].move(sr.nextInt(MATRIX_X+1),sr.nextInt(MATRIX_Y+1));
            for(j=0;j<MATRIX_X;j++){
                for(m=0;m<MATRIX_Y;m++){
                    if(circulos[i].incircle(new punto(j,m))){
                        for(k=0;k<MAXCIRCULOS;k++){
                            if(i!=k){
                                if(circulos[k].incircle(new punto(j,m))){
                                    System.out.println("Colisión!");
                                }
                            }
                        }
                    }
                }
            }
        }
        for(i=0;i<MATRIX_X;i++){
            for(j=0;j<MATRIX_Y;j++){
                for(m=0;m<MAXCIRCULOS;m++){
                    if(circulos[m].incircle(new punto(i,j))){
                        found++;
                    }
                }
                switch (found){
                    case 0 : System.out.print(" "); break;
                    case 1 : System.out.print("x"); break;
                    default : System.out.print("O");
                }
                found=0;
            }
            System.out.print("\n");
        }
        
    }
}
