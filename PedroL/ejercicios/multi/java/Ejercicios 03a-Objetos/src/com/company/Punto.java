package com.company;

import org.jetbrains.annotations.NotNull;

public class Punto {
    float x, y, z;

    Punto(float x, float y, float z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    void ImprimirPosicion() {
        System.out.println(x + " , " + y + " , " + z);
    }

    void ImprimirValorDe(String Opcion) {
        switch (Opcion) {
            case "x" -> {
                System.out.println(this.x);
            }
            case "y" -> {
                System.out.println(this.y);
            }
            case "z" -> {
                System.out.println(this.z);
            }
        }
    }

    float GetValorDeCoord(@NotNull String Opcion) {
        return (Opcion.equals("x")) ? x :
               (Opcion.equals("y")) ? y :
               (Opcion.equals("z")) ? z : null; //TODO: something better than returning null surely
    }

    void SetCoordenadas(float x, float y, float z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
}
