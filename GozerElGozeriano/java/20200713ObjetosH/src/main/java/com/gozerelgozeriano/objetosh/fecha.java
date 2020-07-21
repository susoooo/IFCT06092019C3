package com.gozerelgozeriano.objetosh;

public class fecha {
    final int year;
    final int month;
    final int day;
    
    public fecha(int year, int month, int day){
        this.year = year;
        this.month = month;
        this.day = day;
    }

    public void print(){
        System.out.println(year +"/"+month+"/"+day);
    }
    
}
