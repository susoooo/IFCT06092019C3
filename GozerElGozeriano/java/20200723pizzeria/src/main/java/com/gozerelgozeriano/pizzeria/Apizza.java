/*
Esto es una pizza
 */

package com.gozerelgozeriano.pizzeria;

/**
 *
 * @author gozerelgozeriano
 */
public class Apizza {
    private final int MAXINGREDIENTES = 8;
    private final Pizzainfo info;
    private int base = -1;
    private int[] ingredientes;
    
    public Apizza(Pizzainfo info){
        this.info = info;
        this.ingredientes = new int[MAXINGREDIENTES];
        for(int i = 0; i<MAXINGREDIENTES;i++){
            this.ingredientes[i] = -1;
        }
    }
    
    public void setbase(String base){
        for(int i=0;i<info.getbases().length;i++){
            if(info.getbases()[i].equals(base)){
                this.base = i;
            }
        }
    }
    
    public void addingrediente(String ingr){
        for(int i=0;i<MAXINGREDIENTES;i++){
            if(ingredientes[i]<0){
                ingredientes[i]=getingrindex(ingr);
                return;
            }
        }
    }
    
    public void removeingrediente(String ingr){
        int toremove = getingrindex(ingr);
        for(int i=0;i<MAXINGREDIENTES;i++){
            if(ingredientes[i]==toremove){
                ingredientes[i]=-1;
                return;
            }
        }
    }
    
    
    private int getingrindex(String ingrediente){
        for(int i=0;i<info.getingr().length;i++){
            if(info.getingr()[i].equals(ingrediente)){
                return(i);
            }
        }
        return(-1);
    }
    
    public int getbase(){
        return(base);
    }
    
    public int[] getingredientes(){
        return(ingredientes);
    }
    
    public double getprize(){
        double prize = 0.0;
        if(base>=0){
            prize += info.getbaseprizes(base);
        }
        for(int ingr: ingredientes){
            if(ingr>=0){
                prize+=info.getingrprizes(ingr);
            }
        }
        return(prize);
    }
   
}
