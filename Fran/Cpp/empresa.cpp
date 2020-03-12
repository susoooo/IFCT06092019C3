#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct vehiculo
{
    string matricula;
    string marca;
    string modelo;
};

struct cliente
{
    int codigo;
    string nombre;
    string direccion;
    string telefono;
    int activo;
};

class empleado
{
protected:
    string nombre;
    string apellido1;
    string apellido2;
    string dni;
    string direccion;

    int antiguedad;
    string telefono;
    float salario;

    // empleado * supervisor;
    string supervisor;

public:
    empleado();
    empleado(string nomb, string ape1, string ape2, string dni, string dir, float sueldo);

    void imprimir();

    void cambiarSuper(  );
    void cambiarSalario(float sueldo);
};

empleado::empleado()
{
    cout << endl << "Introduzca datos del empleado: " << endl;
    cout << endl << "Nombre: ";
    cin >> nombre;
    cout << endl << "Apellido 1: ";
    cin >> apellido1;
    cout << endl << "Apellido 2: ";
    cin >> apellido2;
    cout << endl << "Direccion: ";
    cin >> direccion;
    fflush(stdin);
    cout << endl << "Telefono: ";
    cin >> telefono;
    cout << endl << "---------------------------------------------";
    cout << endl << "Antiguedad: ";
    cin >> antiguedad;
    cout << endl << "Salario: ";
    cin >> salario;
    cout << endl << "Supervisor: " << endl;
}

empleado::empleado(string nomb, string ape1, string ape2, string docum, string dir, float sueldo)
{
    nombre = nomb;
    apellido1 = ape1;
    apellido2 = ape2;
    dni = docum;
    direccion = dir;
    salario = sueldo;

    antiguedad = 0;
    telefono = "";
}

void empleado::imprimir()
{
    cout << endl << "Datos del empleado: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellidos: " << apellido1 << " " << apellido2 << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Antiguedad: " << antiguedad << " -- " << "Salario: " << salario << endl;
    cout << "Supervisor: " << endl;
}

void empleado::cambiarSuper(  )
{

}

void empleado::cambiarSalario(float sueldo)
{
    salario = sueldo;
}

// --------------------------------------------------------------------

class secretario : public empleado
{
protected:
    int despacho;
    string numFax;
    int incremento = 5;

public:
    secretario();
    secretario(string nomb, string ape1, string ape2, string docum, string dir, float sueldo, int oficina, string fax);

    void imprimir();

};

secretario::secretario()
{
    cout << endl << "Introduzca datos del empleado: " << endl;
    cout << endl << "Nombre: ";
    cin >> nombre;
    cout << endl << "Apellido 1: ";
    cin >> apellido1;
    cout << endl << "Apellido 2: ";
    cin >> apellido2;
    cout << endl << "Direccion: ";
    cin >> direccion;
    cout << endl << "Telefono: ";
    cin >> telefono;
    cout << endl << "---------------------------------------------";
    cout << endl << "Antiguedad: ";
    cin >> antiguedad;
    cout << endl << "Salario: ";
    cin >> salario;
    cout << endl << "Supervisor: ";
    cin >> supervisor;
    cout << endl << "---------------------------------------------";
    cout << endl << "Numero despacho: ";
    cin >> despacho;
    cout << endl << "Numero de fax: ";
    cin >> numFax;
}

secretario::secretario(string nomb, string ape1, string ape2, string docum, string dir, float sueldo, int oficina, string fax)
{
    nombre = nomb;
    apellido1 = ape1;
    apellido2 = ape2;
    dni = docum;
    direccion = dir;
    salario = sueldo;

    antiguedad = 0;
    telefono = "";

    despacho = oficina;
    numFax = fax;
}

void secretario::imprimir()
{
    empleado::imprimir();
    cout << "Puesto: Secretario" << endl;
}

// ------------------------------------------------------------------

class vendedor : public empleado
{
protected:
    struct vehiculo coche;
    string tlfMovil;
    int areaVentas;
    struct cliente listaClientes[50];
    float comision;

    int ultCliente;

    int incremento = 10;

public:
    vendedor();
    vendedor(struct vehiculo coshe, string movil, int area, float porcentaje);

    void cambioCoche(struct vehiculo coshe);

    void imprimir();

    void bajaCliente(int codCliente);
    void altaCliente(struct cliente nuevoCli);

};

vendedor::vendedor()
{
    cout << endl << "Introduzca datos del empleado: " << endl;
    cout << endl << "Nombre: ";
    cin >> nombre;
    cout << endl << "Apellido 1: ";
    cin >> apellido1;
    cout << endl << "Apellido 2: ";
    cin >> apellido2;
    cout << endl << "Direccion: ";
    cin >> direccion;
    cout << endl << "Telefono: ";
    cin >> telefono;
    cout << endl << "---------------------------------------------";
    cout << endl << "Antiguedad: ";
    cin >> antiguedad;
    cout << endl << "Salario: ";
    cin >> salario;
    cout << endl << "Supervisor: ";
    cin >> supervisor;
    cout << endl << "---------------------------------------------";
    cout << endl << "Marca coche: ";
    cin >> coche.marca;
    cout << endl << "Modelo: ";
    cin >> coche.modelo;
    cout << endl << "Matricula: ";
    cin >> coche.matricula;

}

vendedor::vendedor(struct vehiculo coshe, string movil, int area, float porcentaje)
{
    coche.marca = coshe.marca;
    coche.matricula = coshe.matricula;
    coche.modelo = coshe.modelo;

    tlfMovil = movil;

    areaVentas = area;

    comision = porcentaje;
}

void vendedor::cambioCoche(struct vehiculo coshe)
{
    coche.marca = coshe.marca;
    coche.matricula = coshe.matricula;
    coche.modelo = coshe.modelo;
}

void vendedor::imprimir()
{
    empleado::imprimir();
    cout << "Puesto: Vendedor" << endl;
}

void vendedor::bajaCliente(int codCliente)
{
    int contador;

    for (contador =0; contador < ultCliente; contador++)
    {
        if (listaClientes[contador].codigo == codCliente)
        {
            listaClientes[contador].activo = 0;
        }
    }

}

void vendedor::altaCliente(struct cliente nuevoCli)
{
    ultCliente++;

    listaClientes[ultCliente] = nuevoCli;
    listaClientes[ultCliente].activo = 1;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

int main()
{

    empleado currito1;

    currito1.imprimir();
}
