#include <iostream>

using namespace std;

class automovil
{
    int velocidad;

    public:
        void entrar (int dentro);
        void salir (int fuera);

        void encender (int on);
        void apagar (int off);

        int acelerar (int pisalle);

};

int entrar (int sube)
{
    if (sube != 1)
    {
        sube = 1;
    }
    else
    {
        cout << endl << "Ya estas dentro, melon!!!!" << endl;
    }

    return sube;
}

int salir (int baja)
{
    if (baja != 1)
    {
        baja = 1;
    }
    else
    {
        cout << endl << "Ya estas fuera, atontao!!!!" << endl;
    }
    return baja;
}

int encender (int enMarcha)
{
    if (enMarcha !=1)
    {
        enMarcha = 1;
    }
    else
    {
        cout << endl << "Tu sigue dandole a la llave a ver si despegamos... " << endl;
    }
}

int apagar (int apagado)
{
    if (apagado !=1)
    {
        apagado = 1;
    }
    else
    {
        cout << endl << "Como no lo desmontes, mas apagado no va a estar... " << endl;
    }
}

int acelerar (int movimiento)
{
    if (movimiento > 0)
    {
        movimiento++;
    }
    else
    {
        movimiento--;
    }

    return movimiento++;
}

int main()
{
    int opcion;
    int permiso;

    do
    {
            cout << endl << "1. Entrar en el automovil." << endl;
            cout << endl << "2. Salir del automovil." << endl;
            cout << endl << "3. Encender el automovil." << endl;
            cout << endl << "4. Apagar el automovil." << endl;
            cout << endl << "5. Acelerar el automovil." << endl;
            cout << endl << "6. Frenar el automovil." << endl;
            cout << endl << "0. Finalizar" << endl;
            cin >> opcion;

            switch (opcion)
            {
                case 1:

                break;

                case 2:

                break;

                case 3:

                break;

                case 4:

                break;

                case 5:

                break;

                case 6:

                break;

                default:


            }

    }
    while (permiso != 1);


}
