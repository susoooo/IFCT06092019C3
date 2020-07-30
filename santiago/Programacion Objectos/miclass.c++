#include <iostream>
class MiClase
{
	int var1;
	const double var2 = 3.14159;
	
	public:
	void cambiarVar1(int a);
	double calcularArea(const double& x, const double& y);
};

void MiClase::cambiarVar1(int a)
{
	var1 = a;
}

double MiClase::calcularArea(const double& x, const double& y)
{
	return x*y*var2;
}

int main()
{
	MiClase miObjeto;
	
	miObjeto.cambiarVar1(5);
	double var = miObjeto.calcularArea(34.6,23.9);
}