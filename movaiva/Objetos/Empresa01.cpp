/*
Se pretende desarrollar un conjunto de clases que representen, 
de forma simplificada, a una hipotética empresa dedicada a vender 
un producto.

Todos los empleados son vendedores, jefes de zona o secretarios. 
*/

#include <iostream>

using namespace std;

#define MAX_CLIENTES 5
#define MAX_VENDEDORES 3
/*
1. Empleado. Clase básica que describe a un empleado. Incluye 
sus datos personales (nombre, apellidos, DNI, dirección) y 
algunos datos tales como los años de antigüedad, teléfono de 
contacto y su salario.

Incluye también información de quién es el empleado que lo supervisa
(Empleado *). Tendrá, al menos, las siguientes funciones miembro:
	• Constructores para definir correctamente un empleado, a 
    partir de su nombre,apellidos, DNI, dirección, teléfono y salario.
	• Imprimir (A través de los operadores de E/S redefinidos)
	• Cambiar supervisor
	• Incrementar salario
*/
class Empleado
{
    protected:
        string nombre;
        string apellidos;
        string dni;
        string direccion;
        int antiguedad;
        string telefono;
        float salario;
        Empleado * supervisor;
    public:
        Empleado();
        Empleado(string nombre,string apellidos,string dni,string direccion, int antiguedad, string telefono,float salario);
        void incrementarSalario(float incremento);
        void cambiarSupervisor(Empleado emp);
        void imprimir();
        string getNombre();
        string getApellidos();
        
};

Empleado::Empleado()
{

}

Empleado::Empleado(string n,string a,string d,string drcc, int ant, string t,float s)
{
    nombre=n;
    apellidos=a;
    dni=d;
    direccion=d;
    antiguedad=ant;
    telefono=t;
    salario=s;
}

void Empleado::incrementarSalario(float incremento)
{
    salario=salario+(incremento*salario);
}

void Empleado::cambiarSupervisor(Empleado emp)
{
    supervisor=&emp;
}

string Empleado::getNombre()
{
    return nombre;
}

string Empleado::getApellidos()
{
    return apellidos;
}

void Empleado::imprimir()
{
    cout << "DNI: " << dni << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Antigüedad: " << antiguedad << endl;
    cout << "Salario: " << salario << endl;
    cout << "Supervisor: " << supervisor->getNombre() << " " << supervisor->getApellidos() << endl;
}
/*
2. Secretario. Tiene despacho, número de fax e incrementa su salario un 5% anual.
Tendrá, al menos, las siguientes funciones miembro:
	• Constructores (debe rellenar la información personal y los datos principales)
	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
*/
class Secretario:public Empleado
{
    protected:
        string despacho;
        string fax;
    public:
        Secretario();
        Secretario(string nombre,string apellidos,string dni,string direccion, int antiguedad, string telefono,float salario,string despacho,string fax);
        void imprimir();
};

Secretario::Secretario()
{

}

Secretario::Secretario(string n,string a,string d,string drcc, int ant, string t,float s,string dp,string f):Empleado(n,a,d,drcc,ant,t,s)
{
    despacho=dp;
    fax=f;
    incrementarSalario(0.05);
}

void Secretario::imprimir()
{
    cout << "Puesto: Secretario" << endl;
    Empleado::imprimir();
    cout << "Tiene despacho: " << despacho << endl;
    cout << "Fax: " << fax << endl;
}
/*
3. Vendedor. Tiene coche de la empresa (identificado por la matricula, marca y modelo), 
teléfono móvil, área de venta, lista de clientes y porcentaje que se lleva de las ventas 
en concepto de comisiones. Incrementa su salario un 10% anual.
Tendrá, al menos, las siguientes funciones miembro:
	• Constructores (debe rellenar la información personal y los datos principales)
	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
	• Dar de alta un nuevo cliente.
	• Dar de baja un cliente.
	• Cambiar de coche.
*/
class Cliente
{
    private:
        string dni;
        string nombre;
    public:
        Cliente();
        Cliente(string dni,string nombre);
        string getDNI();
        string getNombre();
        void setDNI(string dni);
        void setNombre(string nombre);
        void imprimir();    
};

Cliente::Cliente()
{

}

Cliente::Cliente(string d,string n)
{
    dni=d;
    nombre=n;
}

string Cliente::getDNI()
{
    return dni;
}

void Cliente::imprimir()
{
    cout << "DNI: " << dni << endl;
    cout << "Nombre: " << nombre << endl;
    
}

class Coche
{
    private:
        string matricula;
        string marca;
        string modelo;
    public:
        Coche();
        Coche(string matricula,string marca,string modelo);
        void imprimir();
};

Coche::Coche()
{

}

Coche::Coche(string mtr,string mrc,string mdl)
{
    matricula=mtr;
    marca=mrc;
    modelo=mdl;
}

void Coche::imprimir()
{
    cout << "----Coche----" << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
}

class Vendedor:public Empleado
{
    protected:
        Coche coche;
        string movil;
        string area;
        Cliente clientes[MAX_CLIENTES];
        float comision;
    public:
        Vendedor(string nombre,string apellidos,string dni,string direccion, int antiguedad, string telefono,float salario,Coche coche,string movil,string area,Cliente clientes[],float comision);
        void altaCliente();
        void bajaCliente();
        void cambiarCoche(Coche c);
        void imprimir();
};

Vendedor::Vendedor(string n,string a,string d,string drcc, int ant, string t,float s,Coche c,string m,string ar,Cliente cl[],float cmsn):Empleado(n,a,d,drcc,ant,t,s)
{
    coche=c;
    movil=m;
    area=ar;
    for(int contador=0;contador<MAX_CLIENTES;contador++)
    {
        clientes[contador]=cl[contador];
    }
    comision=cmsn;
    incrementarSalario(0.1);
}

void Vendedor::altaCliente()
{
    int cnCliente=-1;
    string dni;
    string nombre;
    for(int contador=0;contador<MAX_CLIENTES;contador++)
    {
        if(clientes[contador].getDNI()=="" && clientes[contador].getNombre()=="")
        {
            cnCliente=contador;
        }
    }
    if(cnCliente==-1)
    {
        cout << "No hay espcacio para clientes" << endl;
    }
    else
    {
        cout << "Introduzca el DNI del cliente: " << endl;
        cin >> dni;
        cout << "Introduzca el nombre del cliente: " << endl;
        cin >> nombre;
        Cliente c(dni,nombre);
        clientes[cnCliente]=c;
    }
}

void Vendedor::bajaCliente()
{
    string nombre;
    cout << "Introduzca el nombre del cliente que quiera dar de baja: " << endl;
    cin >> nombre;
    for(int contador=0;contador<MAX_CLIENTES;contador++)
    {
        if(clientes[contador].getNombre()==nombre)
        {
            clientes[contador].setDNI("");
            clientes[contador].setNombre("");
            contador=MAX_CLIENTES;
        }
    }
}

void Vendedor::cambiarCoche(Coche c)
{
    coche=c;
}

void Vendedor::imprimir()
{
    cout << "Puesto: Vendedor" << endl;
    Empleado::imprimir();
    coche.imprimir();
    cout << "Movil: " << movil << endl;
    cout << "Zona: " << area << endl;
    cout << "---Clientes---" << endl;
    for(int contador=0;contador<MAX_CLIENTES;contador++)
    {
        if(clientes[contador].getDNI()=="" && clientes[contador].getNombre()=="")
        {
            clientes[contador].imprimir();
        }
    }
    cout << "Comision: " << comision << endl;
}
/*
4. Jefe de zona. Tiene despacho, tiene un secretario a su cargo, una lista de vendedores 
a su cargo y tiene coche de la empresa (identificado por la matrícula, marca y modelo). 
Incrementa su salario un 20% anual. 
Tendrá, al menos, las siguientes funciones miembro:
	• Constructores (debe rellenar la información personal y los datos principales)
	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
	• Cambiar de secretario.
	• Cambiar de coche.
	• Dar de alta y de baja un nuevo vendedor en su zona.
*/
class Jefe:public Empleado
{
    protected: 
        string despacho;
        Secretario secretario;
        Vendedor vendedores[MAX_VENDEDORES];
        Coche coche;
    public:
        Jefe(string nombre,string apellidos,string dni,string direccion, int antiguedad, string telefono,float salario,string despacho,Secretario secretario,Vendedor vendedores[],Coche coche);
        void cambiarSecretario(Secretario secretario);
        void cambiarCoche(Coche c);
        void altaVendedor(Vendedor v);
        void bajaVendedor(Vendedor v);
        void imprimir();
};

Jefe::Jefe(string n,string a,string d,string drcc, int ant, string t,float s,string dp,Secretario sc,Vendedor v[],Coche c):Empleado(n,a,d,drcc,ant,t,s)
{
    despacho=dp;
    secretario=sc;
    for(int contador=0;contador<MAX_VENDEDORES;contador++)
    {
        vendedores[contador]=v[contador];
    }
    coche=c;
    incrementarSalario(0.2);
}

void Jefe::cambiarCoche(Coche c)
{
    coche=c;
}

void Jefe::cambiarSecretario(Secretario s)
{
    secretario=s;
}


void Jefe::imprimir()
{
    cout << "Puesto: Jefe de zona" << endl;
    Empleado::imprimir();
    cout << "Despacho: " << despacho << endl;
    cout << "---Secretario---" << endl;
    secretario.imprimir();
    cout << "---Vendedores---" << endl;
    for(int contador=0;contador<MAX_VENDEDORES;contador++)
    {
        vendedores[contador].imprimir();
    }
    coche.imprimir();
    
}



