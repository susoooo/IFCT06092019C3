#include <iostream>
#include <windows.h>

using namespace std;

class automovil
{
    int velocidad;
    bool encendido = false;
    bool estado = false;

    public:
        bool entrar ();
        bool salir ();

        bool encender ();
        bool apagar ();

        int acelerar (int pisalle);

        bool getEstado();
        bool getEncendido();
};

bool automovil::getEncendido()
{
    return encendido;
}

bool automovil::getEstado()
{
    return estado;
}

bool automovil::entrar ()
{
    if (!estado)
    {
        estado = 1;
    }
    else
    {
        cout << "___________________________________________" << endl;
        cout << endl << "Ya estas dentro, melon!!!!" << endl;
        cout << endl;
    }

    return estado;
}

bool automovil::salir ()
{
    if (estado)
    {
        if (encendido)
        {
            if (velocidad != 0)
            {
                cout << "___________________________________________" << endl;
                cout << endl << "Si frenas el automovil primero, casi mejor, pedazo cafre!!!!" << endl;
                cout << endl;
                Beep(523,500);
            }
            else
            {
                cout << "___________________________________________" << endl;
                cout << endl << "Apaga en automovil antes, atontao!!!!" << endl;
                cout << endl;
                Beep(523,500);
            }
        }
        else
        {
            estado = 0;
        }
    }
    else
    {
        cout << "___________________________________________" << endl;
        cout << endl << "Ya estas fuera, almacantaro!!!!" << endl;
        cout << endl;
        Beep(523,500);
    }

    return estado;
}

bool automovil::encender ()
{
    if (!estado)
    {
        cout << "___________________________________________" << endl;
        cout << endl << "Para eso, lo primero es subirte al automovil, espabilado!!!!" << endl;
        cout << endl;
        Beep(523,500);
    }
    else
    {
        if (!encendido)
        {
            encendido = 1;
            velocidad = 0;
        }
        else
        {
            cout << "___________________________________________" << endl;
            cout << endl << "Tu sigue dandole a la llave a ver si despegamos... " << endl;
            cout << endl;
            Beep(523,500);
        }
    }

    return encendido;
}

bool automovil::apagar ()
{
    if (encendido)
    {
        if (!estado)
        {
            cout << "___________________________________________" << endl;
            cout << endl << "Para eso, lo primero es subirte al automovil, espabilado!!!!" << endl;
            cout << endl;
            Beep(523,500);
        }
        else
        {
            if (velocidad !=0)
            {
                cout << "___________________________________________" << endl;
                cout << endl << "Si paras el automovil primero, casi mejor, pedazo cafre!!!!" << endl;
                cout << endl;
                Beep(523,500);
            }
            else
            {
                encendido = 0;
            }
        }
    }
    else
    {
        cout << "___________________________________________" << endl;
        cout << endl << "Como no lo desmontes, mas apagado no va a estar... " << endl;
        cout << endl;
        Beep(523,500);
    }

    return encendido;
}

int automovil::acelerar (int movimiento)
{
    if (estado && encendido)
    {
        if (movimiento != 0)
        {
            velocidad++;
            if (velocidad > 100)
            {
                velocidad = 100;
                cout << "___________________________________________" << endl;
                cout << endl << "Bajate y empuja si tienes prisa, machote" << endl;
                cout << endl;
                Beep(523,500);
            }
        }
        else
        {
            velocidad--;
            if (velocidad < 0)
            {
                velocidad = 0;
                cout << "___________________________________________" << endl;
                cout << endl << "Estamos parados, genio!!, para volver atras en el tiempo es con otro vehiculo, listillo!!" << endl;
                cout << endl;
                Beep(523,500);
            }
        }
    }
    else
    {
        if (!estado)
        {
            cout << "___________________________________________" << endl;
            cout << endl << "Si te subes al automovil la cosa va mucho mejor, fenomeno!!!" << endl;
            cout << endl;
            Beep(523,500);
        }
        if (!encendido)
        {
            cout << "___________________________________________" << endl;
            cout << endl << "El encendido es fundamental para este proceso.. pimpin!!!" << endl;
            cout << endl;
            Beep(523,500);
        }
        velocidad = 0;
    }

    return velocidad;
}

int main()
{
    int opcion;
    bool accion = false;
    int speed;
    int valor;

    automovil vehiculo;
    speed = 0;

    system("cls");

    do
    {
        cout << "Velocidad: " << speed << " - Estado: " << vehiculo.getEstado() << " - Encendido: " << vehiculo.getEncendido() << endl;
        cout << "___________________________________________" << endl;
        cout << endl;
        cout << "1. Entrar en el automovil." << endl;
        cout << "2. Salir del automovil." << endl;
        cout << "3. Encender el automovil." << endl;
        cout << "4. Apagar el automovil." << endl;
        cout << "5. Acelerar el automovil." << endl;
        cout << "6. Frenar el automovil." << endl;
        cout << "0. Finalizar" << endl;
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                accion = vehiculo.entrar();
                if (accion)
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Has entrado en el automovil." << endl;
                    cout << endl;
                }
            break;

            case 2:
                accion = vehiculo.salir();
                if (!accion)
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Has salido del automovil." << endl;
                    cout << endl;
                }
            break;

            case 3:
                accion = vehiculo.encender();
                if (accion)
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Has encendido el automovil." << endl;
                    cout << endl;
                }
            break;

            case 4:
                accion = vehiculo.apagar();
                if (accion)
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Has apagado el automovil." << endl;
                    cout << endl;
                }
            break;

            case 5:
                valor = speed;
                speed = vehiculo.acelerar(1);
                if (speed != valor)
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Acelerando el automovil." << endl;
                    cout << "Velocidad: " << speed << " - Estado: " << vehiculo.getEstado() << " - Encendido: " << vehiculo.getEncendido() << endl;
                    cout << endl;
                }
            break;

            case 6:
                valor = speed;
                speed = vehiculo.acelerar(0);
                if (speed != valor)
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Frenando el automovil." << endl;
                    cout << "Velocidad: " << speed << " - Estado: " << vehiculo.getEstado() << " - Encendido: " << vehiculo.getEncendido() << endl;
                    cout << endl;
                }
            break;

            default:
                if ( speed !=0 || vehiculo.getEncendido() || vehiculo.getEstado() )
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Esto no es una peli, aqui no se baja la gente en marcha.. flipao!!!" << endl;
                    cout << endl;
                    opcion = 666;
                }
                else
                {
                    cout << "___________________________________________" << endl;
                    cout << endl << "Venga campeon, otras 500 practicas y te sacas el carnet" << endl;
                }
        }
    }
    while (opcion != 0);
}
