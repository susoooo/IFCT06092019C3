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

asignatura::asignatura()
{
    nombre = "";
    codigo = "";
}

asignatura::asignatura(string nom, string cod)
{
    nombre = nom;
    codigo = cod;
}

// ---------------------------------------------------------------------

class ciencias : public asignatura
{
protected:
    float notasCiencias[5];

public:
    ciencias();
    ciencias(float nota[5]);

    float leer_media();

    float calcular_media()
    {
        int contador;
        float media;
        int totalNotas;

        totalNotas = 5;

        media = 0.0;

        for (contador = 0; contador < totalNotas; contador++)
        {
            media = media + notasCiencias[contador];
        }

        return media / totalNotas;
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

ciencias::ciencias(float nota[5])
{
    int contador;

    for (contador = 0; contador < 5; contador++)
    {
        notasCiencias[contador] = nota[contador];
    }
}

float ciencias::leer_media()
{
    int contador;
    float media;

    media = 0.0;

    for (contador = 0; contador < 5; contador++)
    {
        media = media + notasCiencias[contador];
    }

    return media / 5;
}

// ---------------------------------------------------------------------

class letras : public asignatura
{
  protected:
    float notasLetras[10];

  public:
    letras();
    letras(float nota[10]);

    float calcular_media()
    {
        int contador;
        float media;
        int totalNotas;

        totalNotas = 10;
        media = 0.0;

        for (contador = 0; contador < totalNotas - 1; contador++)
        {
            media = media + notasLetras[contador];
        }

        media = media / (totalNotas - 1);

        media = media + (notasLetras[totalNotas] / 2);

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

letras::letras(float nota[10])
{
    int contador;

    for (contador = 0; contador < 10; contador++)
    {
        notasLetras[contador] = nota[contador];
    }
}

// ---------------------------------------------------------------------

class musicas : public asignatura
{
  protected:
    float notasMusicas;

  public:
    musicas();
    musicas(float nota);

    float calcular_media()
    {
        return notasMusicas;
    }

};

musicas::musicas()
{
    notasMusicas = 0.0;
}

musicas::musicas(float nota)
{
    notasMusicas = nota;
}

// ---------------------------------------------------------------------

class tecnologicas : public ciencias
{
  protected:
    float notasPracticas[5];

  public:
    tecnologicas();
    tecnologicas(float nota[5]);

    float calcular_media()
    {
        float media;
        float mediaPracticas;
        int contador;

        int totalNotas;

        totalNotas = 5;

        media = 0.0;
        mediaPracticas = 0.0;

        media = ciencias:leer_media() * 0.7;

        for (contador = 0; contador < totalNotas - 1; contador++)
        {
            mediaPracticas = mediaPracticas + notasPracticas[contador];
        }

        mediaPracticas = mediaPracticas / totalNotas;

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

tecnologicas::tecnologicas(float nota[5])
{
    int contador;

    for (contador = 0; contador < 5; contador++)
    {
        notasPracticas[contador] = nota[contador];
    }
}

// ---------------------------------------------------------------------

int main()
{
    float nota[10];
    int contador;
    int salir;

    int totNotas;

    totNotas = 0;
    salir = 1;

    cout << endl << "Introduzca las notas para la asignatura de: " << endl;

    // ----------------------------------------------------------

    totNotas = 5;
    cout << endl << "Ciencias - Tecnologicas." << endl;
    for (contador = 0; contador < totNotas; contador++)
    {
        cout << endl << "Introduzca la nota " << contador+1 << " : ";
        cin >> nota[contador];
    }

    ciencias cienc(nota);

    cout << endl << "Introduzca las notas de practicas." << endl;
    for (contador = 0; contador < totNotas; contador++)
    {
        cout << endl << "Introduzca la nota " << contador+1 << " : ";
        cin >> nota[contador];
    }

    tecnologicas tecnol(nota);

    cout << endl << "La nota media de la asignatura de Ciencias es: " << cienc.calcular_media() << endl;
    cout << endl << "La nota media de practicas tecnologicas es: " << tecnol.calcular_media() << endl;

    // ----------------------------------------------------------

    totNotas = 10;

    cout << endl << "Introduzca las notas de la asignatura de Letras." << endl;
    for (contador = 0; contador < totNotas; contador++)
    {
        cout << endl << "Introduzca la nota " << contador+1 << " : ";
        cin >> nota[contador];
    }

    letras letra(nota);

    cout << endl << "La nota media de la asignatura de Letras es: " << letra.calcular_media() << endl;

    // ----------------------------------------------------------

    totNotas = 1;

    cout << endl << "Introduzca las notas de la asignatura de Musicas." << endl;
    for (contador = 0; contador < totNotas; contador++)
    {
        cout << endl << "Introduzca la nota " << contador+1 << " : " << endl;
        cin >> nota[contador];
    }

    musicas musica(nota[0]);

    cout << endl << "La nota media de la asignatura de Musicas es: " << musica.calcular_media() << endl;

}
