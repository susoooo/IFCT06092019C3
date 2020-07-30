#include <iostream>

using namespace std;

class Rect {
	float base, altura;
	
	public:
	void set_base(float);
	void set_altura(float);
	float calc_area(void);
	float calc_perim(void);
};

void
Rect::set_base(float valorn)
{
	base = valorn;
}

void
Rect::set_altura(float valorn)
{
	altura = valorn;
}

float
Rect::calc_area(void)
{
	return base * altura;
}

float
Rect::calc_perim(void)
{
	return (2 * base) + (2 * altura);
}

int
main(void)
{
	Rect rectangulo;
	float num;
	
	cout << "Base del rectangulo: " << endl;
	cin >> num;
	rectangulo.set_base(num);
	
	cout << "Altura del rectangulo: " << endl;
	cin >> num;
	rectangulo.set_altura(num);
	
	cout << endl << "Area del rectangulo = " << rectangulo.calc_area() << endl;
	cout <<         "Perimetro del rectangulo = " << rectangulo.calc_perim() << endl;
	
	return 0;
}