/*
3. Crea un servicio web que en la dirección /add permita añadir un número a una
lista, en la dirección /query devuelva todos los números de la lista, y en la
dirección /remove elimine el último número que se añadio.
*/

package com.gozerelgozeriano.springjson;

import java.util.Arrays;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author gozerelgozeriano
 */
@RestController
public class NumberListController {
    
    private NumberList nl = new NumberList();

    @GetMapping("/list/add")
    public void add(@RequestParam(value = "num") int num) {
        nl.add(num);
    }
    
    @GetMapping("/list/query")
    public String query() {
        return(Arrays.toString(nl.getlist()));
    }
    
    @GetMapping("/list/remove")
    public void remove() {
        nl.remove();
    }
}