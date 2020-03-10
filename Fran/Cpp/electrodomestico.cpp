#include <iostream>
#include <cstring>

using namespace std;

class electrodomestico
{
protected:
    int potencia;
    float consumoHora;
    float horasFunciona;

public:
    electrodomestico();
    electrodomestico(int poten, float consum, float horas);

    virtual float calcular_consumo()
    {
        return potencia * consumoHora * horasFunciona;
    };

};

electrodomestico::electrodomestico()
{

}

electrodomestico::electrodomestico(int poten, float consum, float horas)
{
    potencia = poten;
    consumoHora = consum;
    horasFunciona = horas;
}



class lavadora : public electrodomestico
{
public:
    lavadora();
    lavadora(int poten, float consum);
    lavadora(int poten, float consum, float horas);

    float calcular_consumo()
    {
        return (potencia / 2) * consumoHora * horasFunciona;
    }
};

lavadora::lavadora()
{
    potencia = 0;
    consumoHora = 0;
    horasFunciona = 0;
}

lavadora::lavadora(int poten, float consum)
{
    potencia = poten;
    consumoHora = consum;
    horasFunciona = 0;
}

lavadora::lavadora(int poten, float consum, float horas)
{
    potencia = poten;
    consumoHora = consum;
    horasFunciona = horas;
}

class nevera : public electrodomestico
{
public:
    nevera();
    nevera(int poten, float consum);
    nevera(int poten, float consum, float horas);

    float calcular_consumo()
    {
        return potencia * (consumoHora * 0.7) * horasFunciona;
    }
};

nevera::nevera()
{
    potencia = 0;
    consumoHora = 0;
    horasFunciona = 0;
}

nevera::nevera(int poten, float consum)
{
    potencia = poten;
    consumoHora = consum;
    horasFunciona = 0;
}

nevera::nevera(int poten, float consum, float horas)
{
    potencia = poten;
    consumoHora = consum;
    horasFunciona = horas;
}


class radiador : public electrodomestico
{
public:
    radiador();
    radiador(int poten, float consum);
    radiador(int poten, float consum, float horas);

};

radiador::radiador()
{
    potencia = 0;
    consumoHora = 0;
    horasFunciona = 0;
}

radiador::radiador(int poten, float consum)
{
    potencia = poten;
    consumoHora = consum;
    horasFunciona = 0;
}

radiador::radiador(int poten, float consum, float horas)
{
    potencia = poten;
    consumoHora = consum;
    horasFunciona = horas;
}

int main()
{
    int pote;
    float consu;
    float tiempo;
    int contador;

    for (contador = 1; contador <= 3; contador++)
    {
        cout << endl << "Introduzca la potencia de la lavadora " << contador << ": ";
        cin >> pote;

        cout << endl << "Introduzca el consumo/hora de la lavadora " << contador << ": ";
        cin >> consu;

        cout << endl << "Introduzca tiempo de funcionamiento de la lavadora " << contador << ": ";
        cin >> tiempo;

        lavadora lava(pote, consu, tiempo);

        cout << "Consumo total de la lavadora " << contador << ": " << lava.calcular_consumo();

        // -----------------------------------------------------------------------------------------------------

        cout << endl << "Introduzca la potencia de la nevera " << contador << ": ";
        cin >> pote;

        cout << endl << "Introduzca el consumo/hora de la nevera " << contador << ": ";
        cin >> consu;

        cout << endl << "Introduzca tiempo de funcionamiento de la nevera " << contador << ": ";
        cin >> tiempo;

        nevera frigo(pote, consu, tiempo);

        cout << "Consumo total de la nevera " << contador << ": " << lava.calcular_consumo();

        // -----------------------------------------------------------------------------------------------------

        cout << endl << "Introduzca la potencia del radiador " << contador << ": ";
        cin >> pote;

        cout << endl << "Introduzca el consumo/hora del radiador " << contador << ": ";
        cin >> consu;

        cout << endl << "Introduzca tiempo de funcionamiento deradiador " << contador << ": ";
        cin >> tiempo;

        radiador calor(pote, consu, tiempo);

        cout << "Consumo total del radiador " << contador << ": " << lava.calcular_consumo();

        // -----------------------------------------------------------------------------------------------------

    }

}
