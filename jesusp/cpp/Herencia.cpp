#include <iostream>
#include <cstring>
using namespace std;

// Clase base Persona:
class Persona {
  public:
   Persona(char *n, int e);
   char *LeerNombre();
   int LeerEdad();
   void CambiarNombre(const char *n);
   void CambiarEdad(int e);

  protected:
   char nombre[40];
   int edad;
};

// Clase derivada Empleado:
class Empleado : public Persona {
  public:
   Empleado(char *n, int e, float s);
   float LeerSalario();
   void CambiarSalario(const float s);

  protected:
   float salarioAnual;
};

Persona::Persona(char *n, int e)
{
    strcpy(nombre, n);
    edad = e;
}

char *Persona::LeerNombre()
{
    return nombre;
    cout << nombre << endl;
}

int Persona::LeerEdad()
{
    return edad;
    cout << edad << endl;
}

void Persona::CambiarNombre(const char *n)
{
    strcpy(nombre, n);
    cout << "Nuevo nombre  " << n << endl;
}

void Persona::CambiarEdad(int e)
{
    edad = e;
    cout << e << endl;
}

Empleado::Empleado(char *n, int e, float s):Persona(n,e)
{
    salarioAnual = s;
}

float Empleado::LeerSalario()
{
    return salarioAnual;
    cout << salarioAnual << endl;
}

void Empleado::CambiarSalario(const float s)
{
    salarioAnual = s;
}

int main()
{
Persona obj("pedro",34);
Persona Marcos("Marcos", 23);
Persona Yolanda("Yolanda", 35);
Empleado Alex("Alex", 48, 20450.20);
Empleado Nuria("Nuria", 26, 20500);

obj.CambiarNombre("Antonio");
obj.CambiarEdad(45);
obj.LeerEdad();
obj.LeerNombre();
}
