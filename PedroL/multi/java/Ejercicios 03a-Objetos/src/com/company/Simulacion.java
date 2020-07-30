package com.company;

/*
2: Un Area de 100 x 100; ab bc cd da (0,0; 0,100; 100,100; 100,0)
   0,0 ; 100,100
3: 15 Circulos (Centro; Radio); coordenadas de posicion (centro) aleatorias
   (dentro de el Cuadrado); velocidad inicial aleatoria
4: Velocidad (Vector)
5: Colision (Detect and swap, easy)
6: Bucle de simulacion (ummmm uhhhhmmmmm uhhhhh)
 */

public class Simulacion {
    Circulo[] C;
    Area A;
}

class Circulo {
    Coordenada Centro;
    float Radio = 5.0f;
    Vector2 Velocidad;

    Circulo() { this.Centro = new Coordenada(GenValorValido(), GenValorValido()); }

    float GenValorValido() {
        double Seed = Math.random();

        return (float)( (5 * (1.0 - Seed)) + (Seed * 95) );
    }

    void SetVelocidad(Vector2 Velocidad) { this.Velocidad = Velocidad; }
}

class Area {
    Linea[] Bordes;

    Area(Linea[] Bordes) { this.Bordes = Bordes; }
}

class Linea {
    Coordenada A, B;

    Linea(Coordenada A, Coordenada B) {
        this.A = A;
        this.B = B;
    }
}

class Vector2 {
    float I = 0, J = 0;

    Vector2(){}
    Vector2(float I, float J) {
        this.I = I;
        this.J = J;
    }

    float GetI() { return I; }
    float GetJ() { return J; }

    void SumarVector(Vector2 Operando) {
        I += Operando.GetI();
        J += Operando.GetJ();
    }

    Vector2 Cambiar(Vector2 Posterior) {
        Vector2 Anterior = new Vector2(this.I, this.J);
        this.I = Posterior.GetI();
        this.J = Posterior.GetJ();
        return Anterior;
    }
}

class Coordenada {
    float X, Y;

    Coordenada(){}

    Coordenada(float X, float Y) {
         this.X = X;
         this.Y = Y;
    }
}