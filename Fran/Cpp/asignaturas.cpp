#include <iostream>
#include <cstring>

using namespace std;

class asignatura
{
protected:
    string nombre;
    string codigo;

public:
    asignatura();
    asignatura(string nom, string cod);

    float calcular_media()
    {
        return 10;
    }
};

class ciencias : public asignatura
{
    float notasCiencias[5];

    ciencias():
    ciencias(int numNotas, float nota[numNotas]);

    float calcular_media()
    {
        int contador;
        float media;

        media = 0.0;

        if (numNotas > 5)
        {
            cout << endl << "Numero de notas superior al maximo, se descartan las sobrantes" << endl;
            numNotas = 5
        }

        for (contador = 0; contador < numNotas; contador++)
        {
            media = media + notasCiencias[contador];
        }

        return media / numNotas;
    }

};

ciencias::ciencias()
{
    int contador;

    for (contador = 0; contador < 5; contador++)
    {
        notasCiencias[contador] = 0;
    }
}

ciencias::ciencias(int numNotas, float nota[numNotas])
{
    int contador;

    for (contador = 0; contador < numNotas; contador++)
    {
        notasCiencias[contador] = nota[contador];
    }
}

class letras : public asignatura
{
    float notasLetras[10];

    letras();
    letras(int numNotas, float nota[numNotas]);

    float calcular_media()
    {
        int contador;
        float media;

        media = 0.0;

        if (numNotas > 10)
        {
            cout << endl << "Numero de notas superior al maximo, se descartan las sobrantes" << endl;
            numNotas = 10;
        }

        for (contador = 0; contador < numNotas - 1; contador++)
        {
            media = media + notasLetras[contador];
        }

        media = media / (numNotas - 1);

        media = media + (notasLetras[numNotas] / 2);

        return media;
    }

};

letras::letras()
{
    int contador;

    for (contador = 0; contador < 10; contador++)
    {
        notasLetras[contador] = 0;
    }
}

letras::letras(int numNotas, float nota[numNotas])
{
    int contador;

    for (contador = 0; contador < numNotas; contador++)
    {
        notasLetras[contador] = nota[contad];
    }
}

class musicas : public asignatura
{
    float notasMusicas;

    musicas();
    musicas(float nota);

    float calcular_media()
    {
        return notaMusicas;
    }

};

musicas::musicas()
{
    notasMusicas = 0;
}

musicas::musicas(float nota)
{
    notasMusicas = nota;
}

class tecnologicas : public ciencias
{
    float notasPracticas[5];

  public:
    tecnologicas();
    tecnologicas(int numNotas, float nota[numNotas]);

    float calcular_media(int numNotas, float nota[numNotas])
    {
        float media;
        float mediaPracticas;

        media = 0.0;
        mediaPracticas = 0.0;

        media = ciencias.calcular_media() * 0.7;

        if (numNotas > totalNotas)
        {
            cout << endl << "Numero de notas superior al maximo, se descartan las sobrantes" << endl;
            numNotas = 5;
        }

        for (contador = 0; contador < numNotas - 1; contador++)
        {
            mediaPracticas = mediaPracticas + notasPracticas[contador];
        }

        mediaPracticas = mediaPracticas / numNotas;

        media = media + (mediaPracticas * 0.3);

        return media;
    }

};

tecnologicas::tecnologicas()
{
    int contador;

    for (contador = 0; contador < 5; contador++)
    {
        notasPracticas[contador] = 0;
    }
}

tecnologicas::tecnologicas(int numNotas, float nota[numNotas])
{
    int contador;

    for (contador = 0; contador < numNotas; contador++)
    {
        notasPracticas[contador] = nota[contado];
    }
}

int main()
{


}
