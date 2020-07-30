#include <iostream>

using namespace std;

class automovil
{
    bool abierto;
    bool encendido;
    int velocidad;

    public:
    void encender();
    void apagar();
    void abrir();
    void cerrar();
    void frenar();
    void acelerar();
};

void automovil::encender()
{
    encendido = true;
}

void automovil::apagar()
{
    encendido = false;
}

void automovil::abrir()
{
    abierto = true;
}

void automovil::cerrar()
{
    abierto = false;
}

void automovil::frenar()
{
    velocidad--;
}
void automovil::acelerar()
{
    velocidad++;
}

int main()
{

    int opcion;
    automovil coche;

    cout << "Elige una opcion:" << "\n";
    cout << "0.Abrir coche" << "\n";
    cout << "1.Arrancar coche" << "\n";
    cout << "2.Acelerar hasta 100" << "\n";
    cout << "3.Frenar coche" << "\n";
    cout << "4.Apagar coche" << "\n";
    cout << "5.Cerrar coche" << "\n";
    cin >> opcion;

    switch(opcion)
            {
                case 0:
                coche.abrir();
                cout << "Coche abierto.";
                break;
                case 1:
                coche.encender();
                cout << "Coche encendido.";
                break;
                case 2:
                coche.acelerar();
                cout << "Vamos a 100.";
                break;
                case 3:
                coche.frenar();
                cout << "Coche frenando.";
                break;
                case 4:
                coche.apagar();
                cout << "Coche apagado.";
                break;
                case 5:
                coche.cerrar();
                cout << "Coche cerrado.";
                default:
                cout << "Opcion incorrecta";
            }
}
