/*
Crea una clase asignatura. Dicha clase tendrá como propiedades, 
el nombre, y un código de identificación. Tambien tendrá un 
metodo para calcular la nota media, que devolverá siempre un 10.
Crea una clase ciencias, heredera de la clase asignatura, que 
tendrá como mucho 5 notas. Crea un método de calculo de la nota 
media que la calcule sopesando igualmente las 5 notas.
Crea una clase letras, heredada de la clase asignatura, que tendrá 
como mucho 10 notas. Crea un método de cálculo de la nota media que 
la calcule de forma que el resultado será 50% la media de las notas 
anteriores a la última nota, y 50% la última nota.
Crea una clase músicas, heredada de la clase asigantura, que tendrá 
una sola nota. Crea un método de cálculo de la nota media que devuelva 
la nota que figura en dicha propiedad.
Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 
5 notas de prácticas. Calcula la nota media teniendo en cuenta que el 
70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha 
nota debe ser la media de las notas de prácticas.
Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, 
una de ciencias, una de letras, y una de música y que imprima las notas medias.
*/

#include <iostream>

using namespace std;

class Asignatura
{
    protected:
        string nombre;
        string codigo;
    public:
        Asignatura(string nombre,string codigo);
        int calcularMedia();
};

Asignatura::Asignatura(string n, string c)
{
    nombre=n;
    codigo=c;
}

int Asignatura::calcularMedia()
{
    return 10;
}

class Ciencia:public Asignatura
{
    protected:
        float notas[5];
    public:
        Ciencia(string nombre,string codigo, float notas[]);
        float calcularMedia();
};

Ciencia::Ciencia(string n,string c,float nt[]):Asignatura(n,c)
{
    for(int contador=0;contador<5;contador++)
    {
        notas[contador]=nt[contador];
    }
}


float Ciencia::calcularMedia()
{
    float suma=0;
    for(int contador=0;contador<5;contador++)
    {
        suma+=notas[contador];
    }

    return suma/5;
}

class Letras:public Asignatura
{
    protected:
        float notas[10];
    public:
        Letras(string nombre,string codigo,float notas[]);
        float calcularMedia();
};

Letras::Letras(string n,string c,float nt[]):Asignatura(n,c)
{
    for(int contador=0;contador<10;contador++)
    {
        notas[contador]=nt[contador];
    }
}

float Letras::calcularMedia()
{
    float suma=0;
    for(int contador=0;contador<9;contador++)
    {
        suma+=notas[contador];
    }

    return (0.5*(suma/9))+(0.5*notas[9]);
}

class Musica:public Asignatura
{
    protected:
        float nota;
    public:
        Musica(string nombre,string codigo,float nota);
        float calcularMedia();
};

Musica::Musica(string n,string c,float nt):Asignatura(n,c)
{
    nota=nt;
}

float Musica::calcularMedia()
{
    return nota;
}

class Tecnologia:public Ciencia
{
    protected:
        float practicas[5];
    public:
        Tecnologia(string nombre,string codigo,float notas[], float practicas[]);
        float calcularMedia();
};

Tecnologia::Tecnologia(string n,string c,float nt[],float p[]):Ciencia(n,c,nt)
{
    for(int contador=0;contador<5;contador++)
    {
        practicas[contador]=p[contador];
    }
}

float Tecnologia::calcularMedia()
{
    float sumaNota=0;
    float sumaPractica=0;
    for(int contador=0;contador<5;contador++)
    {
        sumaNota=notas[contador];
    }
    for(int contador=0;contador<5;contador++)
    {
        sumaPractica=practicas[contador];
    }

    return (0.7*(sumaNota/5))+(0.3*(sumaPractica/5));
}


int main()
{
    float notasCiencias[5];
    float notasTecnologia[5];
    float notasLetras[10];

    
    for(int contador=0;contador<5;contador++)
    {
        cout << "Introduzca la " << contador+1 << "º nota de ciencias: " << endl;
        cin >> notasCiencias[contador];
    }

    Ciencia c("Ciencia","C1",notasCiencias);

    for(int contador=0;contador<10;contador++)
    {
        cout << "Introduzca la " << contador+1 << "º nota de letras: " << endl;
        cin >> notasLetras[contador];
    }

    Letras l("Letras","L1",notasLetras);

    Musica m("Musica","M1",8.5);

    for(int contador=0;contador<5;contador++)
    {
        cout << "Introduzca la " << contador+1 << "º nota de tecnologia: " << endl;
        cin >> notasCiencias[contador];
        cout << "Introduzca la " << contador+1 << "º nota de practica de tecnologia: " << endl;
        cin >> notasTecnologia[contador];
    }


    Tecnologia t("Tecnologia","C2",notasCiencias,notasTecnologia);

    cout << "Nota media de Ciencia :" << c.calcularMedia() << endl;
    cout << "Nota media de Letras: " << l.calcularMedia() << endl;
    cout << "Nota media de Musica: " << m.calcularMedia() << endl;
    cout << "Nota media de Tecnologia: " << t.calcularMedia() << endl;
 
    return 0;
}