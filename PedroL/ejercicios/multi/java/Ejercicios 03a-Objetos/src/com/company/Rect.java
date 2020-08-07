package com.company;

public class Rect {
    float Base, Altura;

    Rect(float Base, float Altura) {
        this.Base = Base;
        this.Altura = Altura;
    }

    void SetBase(float Base) {
        this.Base = Base;
    }

    void SetAltura(float Altura) {
        this.Altura = Altura;
    }

    float CalcularArea() {
        return Base * Altura;
    }

    float CalcularPerimetro() {
        return (Base * 2) + (Altura * 2);
    }


}
