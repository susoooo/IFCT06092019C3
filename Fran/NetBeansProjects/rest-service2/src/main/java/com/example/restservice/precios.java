package com.example.restservice;

import java.util.ArrayList;
import java.util.Iterator;

public class precios 
{
    private final ArrayList listaProductos;
    
    int posicion;
    
    public precios(ArrayList listado) 
    {
        this.listaProductos = new ArrayList<>();
        Iterator indice = listado.iterator();
        while (indice.hasNext())
        {
            this.listaProductos.add(indice.next());
        }
    }   
    
    public precios(ArrayList listado, int posicion) 
    {
        this.listaProductos = new ArrayList<>();
        if (posicion < 0)
        {
            this.listaProductos.add(listado.get(posicion));            
        }
        else
        {
            Iterator indice = listado.iterator();
            while (indice.hasNext())
            {
                this.listaProductos.add(indice.next());
            }
        }
    }
    
    public ArrayList getPrecios()
    {
        return listaProductos;
    }
}