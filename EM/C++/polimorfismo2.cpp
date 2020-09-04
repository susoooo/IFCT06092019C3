/* 2-Crea una clase asignatura. Dicha clase tendrá como propiedades, el nombre, y un código de identificación. 
Tambien tendrá un metodo para calcular la nota media, que devolverá siempre un 10.

Crea una clase ciencias, heredera de la clase asignatura, que tendrá como mucho 5 notas. 
Crea un método de calculo de la nota media que la calcule sopesando igualmente las 5 notas.


Crea una clase letras, heredada de la clase asignatura, que tendrá como mucho 10 notas.

Crea un método de cálculo de la nota media que la calcule de forma que el resultado será 50% la media de las notas 
anteriores a la última nota, y 50% la última nota.

Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota 
media que devuelva la nota que figura en dicha propiedad.

Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. 

Calcula la nota media teniendo en cuenta que el 70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha 
nota debe ser la media de las notas de prácticas.

Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, 
una de letras, y una de música y que imprima las notas medias. */


#include <iostream>
#include <string.h>
#include <math.h>
#include <conio.h>

using namespace std;

class asignatura
{

protected:

string nombre;
int codigo; 

public:

asignatura(); //Defino constructores y metodos de la clase
asignatura(string nom,int cod);

 int notamedia()

{return(10); }

};

asignatura::asignatura()

{
nombre="";
codigo=0;
}

asignatura::asignatura(string nom,int cod)

{

nombre=nom;
codigo=cod;
}

class ciencias: public asignatura  //Se pone public por es hija de asignatura
{

protected: 

float notas[5]; //Propiedades de la clase

public:

ciencias();               //Constructores de la clase
ciencias(float nota[5]);

float notamedia() //Crea un método de calculo de la nota media que la calcule sopesando igualmente las 5 notas.

{

int contador;
float suma;
suma=0;

for(contador=0;contador<=4;contador++)
  
  suma += notas[contador];
    return(suma/5);

}

};

ciencias::ciencias(float nota[5])  //Programo contructores

{

int contador;
for(contador=0;contador<=4;contador++)
notas[contador]=nota[contador]; //Sitio donde quiero guardar las cosiñas

}

ciencias::ciencias()
{

int contador=0;
for(contador=0;contador<=4;contador++)
notas[contador]=0;

}

class letras:public asignatura
{

protected:

float notas[10];

public:

letras(float nota[10]);


float notamedia()
{

    float suma;
    
    int contador;
    suma=0;
    for (contador=0; contador<9; contador++)
    suma += notas[contador];
 cout<<"*";
 
 return (((suma/9)*0.5)+(notas[9]*0.5));
    }

};

letras::letras(float nota[10])
{

int contador;
for (contador=0; contador<9; contador++)
notas[contador]= nota[contador];
}

//Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota 
//media que devuelva la nota que figura en dicha propiedad.

class musicas:public asignatura

{

protected:

float notas;

public:

musicas(float nota);

float notamedia()

    {return (notas);}
};

musicas::musicas(float nota)
{
   notas= nota;
}

//Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. 
//Calcula la nota media teniendo en cuenta que el 70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha 
//nota debe ser la media de las notas de prácticas.

class tecnologicas:public ciencias

{

protected:

float notaspracticas[5];

public:

tecnologicas(float notpract[5]);


float notamedia()
{

float sumapracticas;
int contador;
sumapracticas=0;
for (contador=0; contador<=4; contador++)
sumapracticas += notaspracticas[contador];

return(sumapracticas/5*0.3+ciencias::notamedia()*0.7);
}

};

tecnologicas::tecnologicas(float notpract[5])
{
   int contador;
    for (contador=0; contador<=4; contador++)
    notaspracticas[contador] =notpract[contador];
}

/*Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, 
una de letras, y una de música y que imprima las notas medias. */

int main()
{
    float notaspracticas[5];
    float notas[10];
    int contador;
    float sumapracticas;


    cout << "Escribe los datos de la asignatura ciencias: " << endl;

    for (contador=0; contador<=4; contador++)
      {
        cout << "La nota es: " ;
        cin >> notas[contador];
      }



    ciencias cien(notas);
    cout << "Ciencias: La nota media es " << cien.notamedia() << endl;


    cout << "Escribe los datos de la asignatura Tecnologica: " << endl;

    for (contador=0; contador<=4; contador++)
      {
        cout << "La nota es: " ;
        cin >> notaspracticas[contador];
      }
    
    tecnologicas tecno(notaspracticas);
    cout << "Tecnologica: La nota media es " << tecno.notamedia() << endl;

cout << "Escribe los datos de la asignatura letras: " << endl;

    for (contador=0; contador<=9; contador++)
      {
        cout << "La nota es: " ;
        cin >> notas[contador];
      }
    letras let(notas);
    cout << "Letras: La nota media es " << let.notamedia() << endl;



    cout << "Escribe los datos de la asignatura musica: " << endl;

        cout << "La nota es: " ;
        cin >> notas[0];

    musicas mus(notas[0]);
    cout << "musica: La nota media es " << mus.notamedia() << endl;
}
















































































































