#include <iostream>
#include <cstring>

using namespace std;

struct direccion
{
    string calle;
    int numero;
    string planta;
    string localidad;
};


class inmuebles
{
protected:
    struct direccion enderezo;
    int metros;
    int precioMetro;

public:
    inmuebles();
    inmuebles(struct direccion rua, int superficie, int precio);

    void setDireccion(string rua, int numCasa, string planta, string municipio);
    void setMetros(int superficie);
    void setPrecio(int precio);

    string leerDireccion();
    int leerMetros();
    int leerPrecioMetro();

    void mostrarDatos();
};

inmuebles::inmuebles()
{

}

inmuebles::inmuebles(struct direccion rua, int superficie, int precio)
{
    enderezo = rua;
    metros = superficie;
    precioMetro = percio;
}

void inmuebles::setDireccion(struct direccion rua, int numCasa, string planta, string municipio)
{
    enderezo = rua;

}

void inmuebles::setMetros(int superficie)
{
    metros = superficie;
}

void inmuebles::setPrecio(int precio)
{
    precioMetro = precio;
}

string inmuebles::leerDireccion()
{
    return direccion:
}

int inmuebles::leerMetros()
{
    return metros;
}

int inmuebles::leerPrecioMetro()
{
    return precioMetro;
}

void inmuebles::mostrarDatos()
{
    cout << endl << "------------------------------------------------------" << endl;
    cout << "Direccion: " << enderezo.calle << ", " << enderezo.numero << " - " << enderezo.planta << endl;
    cout << "Localidad: " << enderezo.localidad << endl;
    cout << "Metros: " << metros << " cuadrados." <<endl;
    cout << "Precio metro: " << precioMetro << endl;
    cout << "------------------------------------------------------" << endl;
}

// -------------------------------- Creacion clase Tiendas.

class tienda : public inmuebles
{
    protected:
        int metrosFachada;

    public:
        tienda();
        tienda(int fachada);

        int leerFachada();

        void ponerFachada(int fachada);
};

tienda::tienda()
{

}

tienda::tienda(int fachada)
{
    metrosFachada = fachada;
}

int tienda::leerFachada()
{
    return metrosFachada;
}

void tienda::ponerFachada(int fachada)
{
    metrosFachada = fachada;
}

// -------------------------------- Creacion clase Hosteleria.

class hosteleria : public inmuebles
{
    protected:
        struct fecha antiguedad;


};

