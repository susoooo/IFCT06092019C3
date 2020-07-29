package com.gozerelgozeriano.springjson;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author gozerelgozeriano
 */
@RestController
public class LocationController {

    private Double[] position;
      
    @GetMapping("/location")
    public Location location(@RequestParam(value = "name", defaultValue = "World") String name,
                             @RequestParam(value="location",defaultValue="0.0,0.0") String location) {
        this.position = new Double[2];
        for(int contador=0;contador<2;contador++){
            this.position[contador]=Double.parseDouble(location.split(",")[contador]);
        }
        return new Location(name, position);
    }
}