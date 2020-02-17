#include <iostream>



class MiClase
{
	int var1; //Variable de clase
	const double var2 = 3.14159; //Variable de clase

	public:
	void cambiarVar1(int a); //Declaración de un método de la clase
	double calcularArea(const double& x, const double& y); //Declaración de un método de la clase
};

void MiClase::cambiarVar1(int a) //Definición del método por fuera de la clase
{
	var1= a;
}

double MiClase::calcularArea(const double& x, const double& y) //Definición del método por fuera de la clase
{
	return x*y*var2;
}

int main()
{
    MiClase miObjeto; //Declarando un objeto de la Clase

    miObjeto.cambiarVar1(5); //Accediendo a un miembro con el operador punto
    double var = miObjeto.calcularArea(34.6, 23.9); //Accediendo a un miembro con el operador punto
}
