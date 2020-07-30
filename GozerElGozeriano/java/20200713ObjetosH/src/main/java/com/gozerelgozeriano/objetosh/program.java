/*
3-Crea un programa que, utilizando las clases anteriores, cree un objeto para
almacenar datos sobre una persona que no es asalariada, un asalariado que no es
médico ni obrero, sobre dos asalariados y sobre un médico. Todos los objetos
creados deberán contener datos en sus propiedades. Haz que el programa muestre
los datos de los distintos objetos creados por pantalla.
 */
package com.gozerelgozeriano.objetosh;

public class program {
    public static void main(String[] args){
        persona pers1 = new persona("45695817J","Jason","Vorges",1913,6,13,"EEUU");
        asalariado asa1 = new asalariado("45695817J","Jason","Vorges",1913,6,13,"EEUU",22000.0f,0.5f);
        obrero obr1 = new obrero("45695817J","Jason","Vorges",1913,6,13,"EEUU",22.000f,0.5f,"Capataz");
        medico med1 = new medico("45695817J","Jason","Vorges",1913,6,13,"EEUU",22.000f,0.5f,7);
        
        pers1.print();
        asa1.print();
        obr1.print();
        med1.print();
        
    }
}
