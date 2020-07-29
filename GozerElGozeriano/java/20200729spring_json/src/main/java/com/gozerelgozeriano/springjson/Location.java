//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/*
{
   "name": "Grand Hyatt",
   "location": [25.2285, 55.3273]
}
*/
//</editor-fold>

package com.gozerelgozeriano.springjson;

/**
 *
 * @author gozerelgozeriano
 */
public class Location {
    private final String name;
    private final Double[] location;
    
    public Location(String name, Double[] location){
        this.name = name;
        this.location = location;
    }
    
    public String getname() {return name;}
    public Double[] getlocation() {return location;}
}
