#include <iostream>
#include <cstring>

using namespace std;

class electrodomestico
{
    public:
    electrodomestico();
    electrodomestico(int pot, float cons, float dur);
    virtual float calcular_consumo();
    protected:
    int potencia;
    float consumo;
    float horas;
};

class lavadora:public electrodomestico
{
    public:
    lavadora(int pot, float cons, float dur);
    float calcular_consumo();
};

class nevera:public electrodomestico
{
    public:
    nevera(int pot, float cons, float dur);
    float calcular_consumo();
};

class radiador:public electrodomestico
{
    public:
    radiador(int pot, float cons, float tiem);
    float calcular_consumo();
};

electrodomestico::electrodomestico()
{
    potencia = 0;
    consumo = 0;
    horas = 0;
}

electrodomestico::electrodomestico(int pot, float cons, float dur)
{
    potencia = pot;
    consumo = cons;
    horas = dur;
}

float electrodomestico::calcular_consumo()
{
    float ciclo;
    ciclo = potencia * consumo * horas;
    return ciclo;
}

lavadora::lavadora(int pot, float cons, float dur):electrodomestico(pot, cons,dur)
{

}
 float lavadora::calcular_consumo()
 {
    float lava;
    lava = (potencia/2)*consumo * horas;
    return lava;
 }
nevera::nevera(int pot, float cons, float dur):electrodomestico(pot, cons, dur)
{

}

float nevera::calcular_consumo()
{
    float neve;
    neve = potencia * ((consumo)*0.7) * horas;
    return neve;
}

radiador::radiador(int pot, float cons, float dur):electrodomestico(pot, cons, dur)
{

}

float radiador::calcular_consumo()
{
    float radia;
    radia = potencia * consumo * horas;
    return radia;
}

int main()
{
    int pote;
    float gasto;
    float tiempo;
    int contador;

    for(contador = 0; contador < 3; contador++)
    {
        cout << "Introduzca la potencia de la lavadora " << contador << ": " ;
        cin >> pote;
        cout << "Introduzca el consumo de la lavadora " << contador << ": " ;
        cin >> gasto ;
        cout << "Introduzca el tiempo del ultimo ciclo " << contador << ": " ;
        cin >> tiempo;

        lavadora lava(pote, gasto, tiempo);

        cout << "Consumo de la lavadora " << contador << ": " << lava.calcular_consumo() <<" Watios" << endl;

        //--------------------------------------------------------------------------------------------------

        cout << "Introduzca la potencia de la nevera " << contador << ": ";
        cin >> pote;
        cout << "Introduzca el consumo de la nevera " << contador << ": ";
        cin >> gasto;
        cout << "Introduzca el tiempo del ultimo ciclo " << contador << ": ";
        cin >> tiempo;

        nevera neve(pote, gasto, tiempo);

        cout << "Consumo de la nevera " << contador << ": " << neve.calcular_consumo()<< " Watios" << endl;

        //--------------------------------------------------------------------------------------------------
        cout << "Introduzca la potencia del radiador " << contador << ": " ;
        cin >> pote;
        cout << "Introduzca el consumo del radiador " << contador << ": "  ;
        cin >> gasto;
        cout << "Introduzca el tiempo del ultimo ciclo " << contador << ": " ;
        cin >>  tiempo;

        radiador radia(pote, gasto, tiempo);

        cout << "Consumo del radiador " << contador << ": " << radia.calcular_consumo() << " Watios" << endl ;
        //--------------------------------------------------------------------------------------------------
    }

}
