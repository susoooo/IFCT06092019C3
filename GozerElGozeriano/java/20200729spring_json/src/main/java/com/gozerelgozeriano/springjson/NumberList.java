//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/*
3. Crea un servicio web que en la dirección /add permita añadir un número a una
lista, en la dirección /query devuelva todos los números de la lista, y en la
dirección /remove elimine el último número que se añadio.
*/
//</editor-fold>

package com.gozerelgozeriano.springjson;

/**
 *
 * @author gozerelgozeriano
 */
public class NumberList {
    private final int[] list;
    private int index;
    
    public NumberList(){
        this.list = new int[64];
        this.index = 0;
    }

    public int[] getlist(){
        int[] newlist = new int[index];
        System.arraycopy(list, 0, newlist, 0, index);
        return newlist;
    }
    
    public void add(int num){
        if(index<64){
            list[index]=num;
            index++;
        }
    }
    
    public void remove(){
        if(index>0){
            list[index]=0;
            index--;
        }
    }
}
