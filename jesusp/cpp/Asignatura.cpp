#include <iostream>
#include <cstring>

using namespace std;

class asignatura
{
    public:
    asignatura();
    virtual float nota_media();
    protected:
    char nombre[30];
    char codigo[6];

};

class ciencias:public asignatura
{
    public:
    ciencias();
    ciencias(float *notac);
    float nota_media();
    protected:
    float nota[5];
};

class letras:public asignatura
{
    public:
    letras();
    letras(float *notal, float u);
    float nota_media();
    protected:
    float let[9];
    float Ulno;
};

class musicas:public asignatura
{
public:
    musicas();
    musicas(float muno);
    float nota_media();
protected:
    float musinot;

};

class tecnologicas:public ciencias
{
public:
    tecnologicas();
    tecnologicas(float *notac,float *log);
    float nota_media();
protected:
    float tecno[5];
};

asignatura::asignatura()
{
    strcpy(nombre,"");
    strcpy(codigo,"");

}


float asignatura::nota_media()
{
   return 10;
}

ciencias::ciencias(float *notac)
{
    int i;
    for(i=0 ;i<5;i++)
    {
        nota[i]=*(notac+i);
    }
}
float ciencias::nota_media()
{
int contador;
float suma;
suma = 0;
contador = 0;
for(contador = 0; contador < 5; contador++)
    {
        suma=nota[contador]+suma;
    }
return suma /5;
}

letras::letras(float *notal, float u)
{
    int i;
    for(i=0 ;i<9;i++)
    {
       let[i]=*(notal+i);
    }
    Ulno = u;
}

float letras::nota_media()
{
    float media;
    float medul;
    int suma;
    suma = 0;
    int contador;
    for(contador = 0; contador < 10 ; contador++)
        {
            suma=let[contador]+suma;
            if(contador = 9)
            {
               media = suma/2;

            }

        }
    medul = Ulno/2;
    return media + medul;


}

musicas::musicas(float muno)
{
    musinot = muno;
}
float musicas::nota_media()
{
    return musinot;
}
tecnologicas::tecnologicas(float *notac, float *log): ciencias(notac)
{
    int i;
    for(i=0 ;i<5;i++)
    {
        tecno[i]=*(log+i);
    }
}

float tecnologicas::nota_media()
{
    int contador;
    int suma;
    int medt;
    suma = 0;
    for(contador = 0;contador < 5;contador++)
        {
           suma=tecno[contador]+suma;
        }
    medt =suma /5;
    return (ciencias::nota_media()*0.7+ medt*0.3);


}
int main()
{
float n[5];
float l[9];
float m;
float t[5];
float a;
int c;
for(c=0;c<5;c++)
{
    cout << "Dame la nota " << c +1 << " de ciencias" << endl;
    cin >> n[c];
}
ciencias asigcien(n);
cout << "La nota media de ciencias es: " << asigcien.nota_media()<< endl;
c=0;
for(c=0;c<9;c++)
{
    cout << "Dame la nota  " << c +1 << " de letras" << endl;
    cin >> l[c];
}
cout << "Dame una nota mas de letras" <<endl;
cin >> a;

letras asiglet(l,a);
cout << "La nota media de letras es: " << asiglet.nota_media() << endl;

cout << "Dame la nota  de musica" << endl;
cin >> m;
musicas asigmusic(m);
cout << "La nota media de musica es: " << asigmusic.nota_media() << endl;

c=0;
for(c=0;c<5;c++)
{
    cout << "Dame la nota " << c +1 << " de tecnologia" << endl;
    cin >> t[c];
}
tecnologicas asigtec(n,t);
cout << "La nota media de tecnologia es: " << asigtec.nota_media() << endl;
}
