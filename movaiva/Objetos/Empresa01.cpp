/*
Se pretende desarrollar un conjunto de clases que representen, 
de forma simplificada, a una hipotética empresa dedicada a vender 
un producto.

Todos los empleados son vendedores, jefes de zona o secretarios. 
Hacer un programa de prueba que muestre como funciona. Probar, 
especialmente, que el método incrementar salario se comparta bien, 
según el empleado que sea así es la subida.
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
        void cambiarSupervisor(Empleado *emp);
        void imprimir();
        string getNombre();
        string getApellidos();
        string getDNI();
        
};

Empleado::Empleado()
{

}

Empleado::Empleado(string n,string a,string d,string drcc, int ant, string t,float s)
{
    nombre=n;
    apellidos=a;
    dni=d;
    direccion=drcc;
    antiguedad=ant;
    telefono=t;
    salario=s;
    cambiarSupervisor(this);
}

void Empleado::incrementarSalario(float incremento)
{
    salario=salario+(incremento*salario);
}

void Empleado::cambiarSupervisor(Empleado * emp)
{
    supervisor=emp;
    cout << "Cambio de supervior de " << nombre << ": " << supervisor->getDNI() << " " << supervisor->getNombre() << endl;
}

string Empleado::getNombre()
{
    return nombre;
}

string Empleado::getApellidos()
{
    return apellidos;
}

string Empleado::getDNI()
{
    return dni;
}

void Empleado::imprimir()
{
    cout << "DNI: " << dni << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Antiguedad: " << antiguedad << endl;
    cout << "Salario: " << salario << endl;
    cout << "Supervisor: " << supervisor->getDNI() << " " << supervisor->getNombre() << " " << supervisor->getApellidos() << endl;
    
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

string Cliente::getNombre()
{
    return nombre;
}

void Cliente::setDNI(string dni)
{
    this->dni=dni;
}

void Cliente::setNombre(string nombre)
{
    this->nombre=nombre;
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
        int cantidadClientes;
    public:
        Vendedor();
        Vendedor(string nombre,string apellidos,string dni,string direccion, int antiguedad, string telefono,float salario,Coche coche,string movil,string area,float comision);
        void altaCliente();
        void bajaCliente();
        void cambiarCoche(Coche c);
        void imprimir();
};

Vendedor::Vendedor()
{

}

Vendedor::Vendedor(string n,string a,string d,string drcc, int ant, string t,float s,Coche c,string m,string ar,float cmsn):Empleado(n,a,d,drcc,ant,t,s)
{
    coche=c;
    movil=m;
    area=ar;
    comision=cmsn;
    incrementarSalario(0.1);
    cantidadClientes=0;
}

void Vendedor::altaCliente()
{
    string dni;
    string nombre;
    
    if(cantidadClientes<MAX_VENDEDORES)
    {
        cout << "Alta de cliente para el vendedor " << dni << endl;
        cout << "Introduzca el DNI del cliente: " << endl;
        cin >> dni;
        cout << "Introduzca el nombre del cliente: " << endl;
        cin >> nombre;
        Cliente c(dni,nombre);
        clientes[cantidadClientes]=c;
        cantidadClientes++;
        
    }
    else
    {
        cout << "No hay espcacio para clientes" << endl;
    }
}

void Vendedor::bajaCliente()
{
    int borrarCliente=-1;
    string dni;
    cout << "Introduzca el DNI del cliente que quiera dar de baja: " << endl;
    cin >> dni;
    
    for(int contador=0;contador<cantidadClientes;contador++)
    {
        if(clientes[contador].getDNI()==dni)
        {
            borrarCliente=contador;
        }
    }

    if(borrarCliente!=-1)
    {
        cantidadClientes--;
        if(borrarCliente<MAX_CLIENTES)
        {
            for(int contador=borrarCliente;contador<cantidadClientes;contador++)
            {
                clientes[contador]=clientes[contador+1];
            }
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
    for(int contador=0;contador<cantidadClientes;contador++)
    {
        if(clientes[contador].getDNI()!="" && clientes[contador].getNombre()!="")
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
        int cantidadVendedores;
    public:
        Jefe(string nombre,string apellidos,string dni,string direccion, int antiguedad, string telefono,float salario,string despacho,Coche coche);
        void cambiarSecretario(Secretario secretario);
        void cambiarCoche(Coche c);
        void altaVendedor(Vendedor v);
        void bajaVendedor(Vendedor v);
        void imprimir();
};

Jefe::Jefe(string n,string a,string d,string drcc, int ant, string t,float s,string dp,Coche c):Empleado(n,a,d,drcc,ant,t,s)
{
    despacho=dp;
    cantidadVendedores=0;    
    coche=c;
    incrementarSalario(0.2);
}

void Jefe::cambiarCoche(Coche c)
{
    coche=c;
}

void Jefe::cambiarSecretario(Secretario s)
{
    secretario.cambiarSupervisor(&secretario);
    secretario=s;
    s.cambiarSupervisor(this);
}

void Jefe::altaVendedor(Vendedor v)
{
    if(cantidadVendedores<MAX_VENDEDORES)
    {
        vendedores[cantidadVendedores]=v;
        cantidadVendedores++;
        v.cambiarSupervisor(this);
    }  
    else
    {
        cout << "No hay espacio para vendedores";
    } 
}

void Jefe::bajaVendedor(Vendedor v)
{
    int borrarVendedor=-1;
    for(int contador=0;contador<MAX_VENDEDORES;contador++)
    {
        if(vendedores[contador].getDNI()==v.getDNI())
        {
            borrarVendedor=contador;
            contador=MAX_VENDEDORES;
        }
    }

    if(borrarVendedor!=-1)
    {        
        cantidadVendedores--;
        vendedores[borrarVendedor].cambiarSupervisor(&vendedores[borrarVendedor]);
        if(borrarVendedor!=3)
        {
            for(int contador=borrarVendedor;contador<cantidadVendedores;contador++)
            {
                vendedores[contador]=vendedores[contador+1];
            }
        }
    }
    else
    {
        cout << "Vendedor no encontrado";
    }
}


void Jefe::imprimir()
{
    cout << "Puesto: Jefe de zona" << endl;
    Empleado::imprimir();
    cout << "Despacho: " << despacho << endl;
    cout << "Secretario: " << secretario.getDNI() << " " << secretario.getNombre() << " " << secretario.getApellidos() << endl;
    cout << "---Vendedores---" << endl;
    for(int contador=0;contador<cantidadVendedores;contador++)
    {
        cout << vendedores[contador].getDNI() << " " << vendedores[contador].getNombre() << " " << vendedores[contador].getApellidos() << endl;
    }
    coche.imprimir();
}

int main ()
{
    Coche c1("758021CPJ","Peugeot","308");
    Coche c2("748035XXX","Opel","Corsa");
    Coche c3("899541MHZ","Ford","Focus");
    Coche c4("521478KHJ","Renault","Clio");

    Secretario s1("Adrian","Vilela","99999999J","Calle de la piruleta 7",0,"977202020",1200,"NO","999999999");
    Secretario s2("Borja","Gonzalez","88888888M","Calle de la piruleta 8",2,"977303030",1500,"SI","877525156");

    Vendedor v1("Manolo","Jimenez","55555555N","Calle de la piruleta 20",1,"777777777",700,c1,"650212532","Chuchelandia norte",150.6);
    Vendedor v2("Alejandro","Varela","66666666L","Calle de la piruleta 19",5,"555555555",800,c2,"750214892","Chuchelandia sur",100.80);

    Jefe j1("Antonio","Montes","33333333H","Calle de la piruleta 50",7,"555554466",2000,"SI",c3);

    /*v1.altaCliente();
    v1.altaCliente();
    v2.altaCliente();

    s1.imprimir();
    s2.imprimir();
    v1.imprimir();
    v2.imprimir();
    j1.imprimir();

    v1.bajaCliente();

    j1.altaVendedor(v1);
    j1.altaVendedor(v2);

    s1.imprimir();
    s2.imprimir();
    v1.imprimir();
    v2.imprimir();
    j1.imprimir();

    j1.bajaVendedor(v2);

    s1.imprimir();
    s2.imprimir();
    v1.imprimir();
    v2.imprimir();
    j1.imprimir();*/

    
    j1.cambiarSecretario(s2);
    s2.imprimir();
    j1.cambiarSecretario(s1);
    s1.imprimir();
    

    return 0;
}



