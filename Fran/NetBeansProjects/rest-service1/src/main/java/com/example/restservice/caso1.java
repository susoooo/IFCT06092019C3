
package com.example.restservice;

public class caso1
{

    private final float[] location = new float[2];
    private final String name;

    public caso1(String name, float coord1, float coord2) 
    {
        this.name = name;
        this.location[0] = coord1;
        this.location[1] = coord2;
    }

    public String getName() 
    {
        return name;
    }

    public float[] getLocation() 
    {
        return location;
    }
}