package com.example.restservice;

import java.util.ArrayList;
import java.util.Iterator;

public class numeros 
{   
    private final ArrayList lista;
    
    public numeros(ArrayList listado) 
    {
        this.lista = new ArrayList<>();
        Iterator indice = listado.iterator();
        while (indice.hasNext())
        {
            this.lista.add(indice.next());
        }
    }
    
    public numeros(ArrayList listado, int control) 
    {
        this.lista = new ArrayList<>();
        
        Iterator indice = listado.iterator();
        while (indice.hasNext())
        {
            this.lista.add(indice.next());
        }
    }
    
    public ArrayList getNumero()
    {
        return lista;
    }
}
