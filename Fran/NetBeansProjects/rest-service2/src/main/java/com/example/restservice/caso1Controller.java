
package com.example.restservice;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class caso1Controller 
{
    private static final String nombre = "Hello, %s!";
    private final float coord1 = (float) 25.2285;
    private final float coord2 = (float) 55.3273;

    @GetMapping("/caso1")
    public caso1 caso1() 
    {
            return new caso1("Grand Hyatt", coord1, coord2);
    }
}