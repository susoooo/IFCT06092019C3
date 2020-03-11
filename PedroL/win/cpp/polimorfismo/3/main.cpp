#include <iostream>
#include <errno.h>
using std::cout;
using std::cin;
using std::endl;

#define PI 3.141592

class Punto {
	double x, y, z;
	
	public:
	Punto() {}
	Punto(double nx, double ny, double nz) {
		x = nx;
		y = ny;
		z = nz;
	}
	
	void set_x(double val) { this->x = val; }
	void set_y(double val) { this->y = val; }
	void set_z(double val) { this->z = val; }
	char get_x() { return this->x; }
	char get_y() { return this->y; }
	char get_z() { return this->z; }
};

class Color {
	int red, green, blue;
	
	public:
	Color() {}
	Color(int red, int green, int blue) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	
	void set_red(int val) { this->red = val; }
	void set_green(int val) { this->green = val; }
	void set_blue(int val) { this->blue = val; }
	char get_red() { return this->red; }
	char get_green() { return this->green; }
	char get_blue() { return this->blue; }
};

class Forma {
	protected:
	std::string nombre;
	Color color;
	Punto coordcentr;
	
	public:
	Forma() {}
	Forma(std::string nunombre, Color nucolor, Punto nucoordcentr) {
		nombre = nunombre;
		color = nucolor;
		coordcentr = nucoordcentr;
	}
	
	void set_nombre(std::string nunombre) { nombre = nunombre; }
	void set_color(Color nucolor) {
		color.set_red(nucolor.get_red());
		color.set_green(nucolor.get_green());
		color.set_blue(nucolor.get_blue());
	}
	void set_coordcentr(Punto nucoord) {
		coordcentr.set_x(nucoord.get_x());
		coordcentr.set_y(nucoord.get_y());
		coordcentr.set_z(nucoord.get_z());
	}
	
	void print() {
		cout << "Forma " << nombre << endl;
		printf("red:%x green:%x blue:%x\n", color.get_red(), color.get_green(), color.get_blue());
		cout << "coords:" << endl
		     << "x:" << coordcentr.get_x() << ' '
		     << "y:" << coordcentr.get_y() << ' '
		     << "z:" << coordcentr.get_z() << endl;
	}
};

class Rect : public Forma {
	protected:
	double ladomen, ladomay;
	
	public:
	Rect() {}
	Rect(double nuladomen, double nuladomay) {
		ladomen = nuladomen;
		ladomay = nuladomay;
	}
	Rect(std::string nombre, Color color, Punto coordcentr, double nuladomen, double nuladomay) {
		set_nombre(nombre);
		set_color(color);
		set_coordcentr(coordcentr);
		ladomen = nuladomen;
		ladomay = nuladomay;
	}
	
	void set_ladomen(double val) { ladomen = val; }
	void set_ladomay(double val) { ladomay = val; }
	double get_ladomen() { return ladomen; }
	double get_ladomay() { return ladomay; }
	
	double area() { return (ladomen * ladomay); }
	double perim() { return ( (2 * ladomen) + (2 * ladomay) ); }
	
	void rescale(double fact) {
		ladomen *= fact;
		ladomay *= fact;
	}
	
	void print() {
		cout << "Rectangulo " << nombre << endl;
		printf("red:%x green:%x blue:%x\n", color.get_red(), color.get_green(), color.get_blue());
		cout << "coords:" << endl
		     << "x:" << coordcentr.get_x() << ' '
		     << "y:" << coordcentr.get_y() << ' '
		     << "z:" << coordcentr.get_z() << endl;
		cout << "lados:" << endl
		     << "menor:" << ladomen << ' '
		     << "mayor:" << ladomay << endl;
	}
};

class Cuadr : public Rect {
	public:
	Cuadr();
	Cuadr(std::string nombre, Color color, Punto coordcentr, double nulado) {
		set_nombre(nombre);
		set_color(color);
		set_coordcentr(coordcentr);
		set_lado(nulado);
	}
	
	void set_lado(double nulado) {
		ladomen = nulado;
		ladomay = nulado;
	}
	
	double get_lado() { return ladomen; }
	
	void print() {
		cout << "Cuadrado " << nombre << endl;
		printf("red:%x green:%x blue:%x\n", color.get_red(), color.get_green(), color.get_blue());
		cout << "coords:" << endl
		     << "x:" << coordcentr.get_x() << ' '
		     << "y:" << coordcentr.get_y() << ' '
		     << "z:" << coordcentr.get_z() << endl;
		cout << "lados:" << endl
		     << "menor:" << ladomen << ' '
		     << "mayor:" << ladomay << endl;
	}
};

class Elipse : public Forma {
	protected:
	double radiomen, radiomay;
	
	public:
	Elipse();
	Elipse(double nuradiomen, double nuradiomay) {
		radiomen = nuradiomen;
		radiomay = nuradiomay;
	}
	Elipse(std::string nombre, Color color, Punto coordcentr, double nuradiomen, double nuradiomay) {
		set_nombre(nombre);
		set_color(color);
		set_coordcentr(coordcentr);
		radiomen = nuradiomen;
		radiomay = nuradiomay;
	}
	
	void set_radiomen(double val) { radiomen = val; }
	void set_radiomay(double val) { radiomay = val; }
	double get_radiomen() { return radiomen; }
	double get_radiomay() { return radiomay; }
	
	double area() { return (PI * (radiomay * radiomen) ); }
	
	void rescale(double fact) {
		radiomen *= fact;
		radiomay *= fact;
	}
	void print() {
		cout << "Elipse " << nombre << endl;
		printf("red:%x green:%x blue:%x\n", color.get_red(), color.get_green(), color.get_blue());
		cout << "coords:" << endl
		     << "x:" << coordcentr.get_x() << ' '
		     << "y:" << coordcentr.get_y() << ' '
		     << "z:" << coordcentr.get_z() << endl;
		cout << "radios:" << endl
		     << "menor:" << radiomen << ' '
		     << "mayor:" << radiomay << endl;
	}
};

class Circulo : public Elipse {
	public:
	Circulo();
	Circulo(std::string nombre, Color color, Punto coordcentr, double nuradio) {
		set_nombre(nombre);
		set_color(color);
		set_coordcentr(coordcentr);
		set_radio(nuradio);
	}
	
	void set_radio(double nuradio) {
		radiomen = nuradio;
		radiomay = nuradio;
	}
	
	double get_lado() { return radiomen; }
	
	void print() {
		cout << "Circulo " << nombre << endl;
		printf("red:%x green:%x blue:%x\n", color.get_red(), color.get_green(), color.get_blue());
		cout << "coords:" << endl
		     << "x:" << coordcentr.get_x() << ' '
		     << "y:" << coordcentr.get_y() << ' '
		     << "z:" << coordcentr.get_z() << endl;
		cout << "radios:" << endl
		     << "menor:" << radiomen << ' '
		     << "mayor:" << radiomay << endl;
	}
};

int main() {
	Forma forma;
	Rect rect(4, 8);
	Forma * a_forma = new Forma[10]();
	
	forma.set_color(Color(21, 21, 21) );
	forma.set_coordcentr(Punto(1, 1, 1));
	forma.print();
	
	rect.print();
	rect.rescale(2);
	rect.print();
	
	for (int i = 0; i < 10; i++) {
		a_forma[i].set_color(Color(21, 21, 21) );
	}
	
	return errno;
}