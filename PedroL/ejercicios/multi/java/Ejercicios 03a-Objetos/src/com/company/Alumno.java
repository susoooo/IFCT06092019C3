package com.company;

import java.awt.image.AreaAveragingScaleFilter;
import java.util.Vector;

class DNI {
    int Numero;
    Character Letra;

    DNI(int Numero, char Letra) {
        this.Numero = Numero;
        this.Letra = Letra;
    }
}

public class Alumno {
    DNI DNI; //yep
    String Nombre, Apellido;
    Vector<Asignatura> AsignaturasNotas;

    Alumno(DNI DNI, String Nombre, String Apellido, Vector<Asignatura> AsignaturasNotas) {
        this.DNI = DNI;
        this.Nombre = Nombre;
        this.Apellido = Apellido;
        this.AsignaturasNotas = AsignaturasNotas;
        this.AsignaturasNotas.setSize(30);
    }

    float NotaMedia() {
        Float[] Notas = new Float[AsignaturasNotas.size()];
        float Media = 0;

        for(int i = 0; i < Notas.length; i++) { Notas[i] = AsignaturasNotas.get(i).Nota; }
        for (Float nota : Notas) { Media += nota; }

        return (Media / Notas.length);
    }
}

class Asignatura {
    String Nombre;
    float Nota;
}