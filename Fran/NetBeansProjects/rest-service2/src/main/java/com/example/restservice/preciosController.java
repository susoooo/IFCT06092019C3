package com.example.restservice;

import java.util.ArrayList;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;

public class preciosController 
{   
    private final ArrayList<String> listaArticulos = new ArrayList<>();
    
    String numero;

    @GetMapping("/add")
    public precios precios(@RequestParam(value = "articuloNuevo", defaultValue = "") String articuloNuevo) 
    {
        listaArticulos.add(articuloNuevo);
        return new precios(listaArticulos);
    }
    
    @GetMapping("/change_name")
    public precios CambioNombre(@RequestParam(value = "cambioNombre", defaultValue = "") String cambioNombre) 
    {
        if (cambioNombre.length() > 0)
        {
            String nomViejo = cambioNombre.substring(0, cambioNombre.indexOf("@", 0));
            String nomNuevo = cambioNombre.substring(cambioNombre.indexOf("@", 0) + 1);
        
            int posicion = listaArticulos.indexOf(nomViejo);
        
            String precio = listaArticulos.get(posicion).substring(listaArticulos.get(posicion).indexOf("@" + 1));
        
            listaArticulos.remove(posicion);
            listaArticulos.add(posicion, nomNuevo + "," + precio);
        }
        
        return new precios(listaArticulos);
    }
    
    @GetMapping("/change_money")
    public precios CambioPrecio(@RequestParam(value = "cambioPrecio", defaultValue = "") String cambioPrecio) 
    {
        if (cambioPrecio.length() > 0)
        {
            String nomArticulo = cambioPrecio.substring(0, cambioPrecio.indexOf("@", 0));
            String precioNuevo = cambioPrecio.substring(cambioPrecio.indexOf("@", 0) + 1);
        
            int posicion = listaArticulos.indexOf(nomArticulo);
        
            String nombre = listaArticulos.get(posicion).substring(0, listaArticulos.get(posicion).indexOf("@"));
        
            listaArticulos.remove(posicion);
            listaArticulos.add(posicion, nombre + "@" + precioNuevo);
        }
        
        return new precios(listaArticulos);
    }
    
    @GetMapping("/consulta")
    public precios ConsultaPrecios(@RequestParam(value = "articulo", defaultValue = "") String articulo) 
    {
        int posicion = -1;
        if (articulo.length() > 0)
        {
            posicion = listaArticulos.indexOf(articulo.substring(0, articulo.indexOf("@")));
        }
        
        return new precios(listaArticulos, posicion);
    }  
}
