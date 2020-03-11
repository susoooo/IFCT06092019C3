// 1-Defina una clase Forma que tenga los siguientes miembros de datos:
// 	- Color
// 	- Coordenada del centro de la forma (objeto Punto)
// 	- Nombre de la forma (char *)
//   Y, al menos, las siguientes funciones miembro:
// 	- Imprimir
// 	- Obtener y cambiar el color
// 	- Mover la forma (o sea, su centro)
//  Defina una clase hija Rectangulo que tenga los siguientes miembros como datos:
// 	- Lado menor.
// 	- Lado mayor.
//   Y, al menos, las siguientes funciones miembro:
// 	- Imprimir. Debe imprimir qué se trata de un rectángulo mostrando su nombre, color, centro y lado. Debería usarse la función Imprimir de la clase base para realizar parte de este trabajo.
// 	- Calcular el área (lado menor * lado mayor).
// 	- Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
// 	- Cambiar el tamaño del rectángulo. Recibe como parámetro un factor de escala. Así, por ejemplo, si el factor vale 2, el rectángulo duplicará su tamaño y si es 0,5 se reducirá a la mitad.

// Realice un programa que pruebe el funcionamiento de estas clases. Debe crear objetos y comprobar el correcto funcionamiento de las funciones miembro.
// 2-Defina una clase Elipse derivada de forma. Recordatorio: una elipse queda definida por su radio mayor (R) y su radio menor (r), tal que el área de una elipse es igual a π*(R*r).
// 3-Defina una clase Cuadrado derivada de la clase Rectangulo.
// 4-Defina una clase Circulo derivada de la clase Elipse.
// 5-Realice un programa que defina varias formas diferentes, cree un array de punteros de la clase Forma que apunten a los objetos creados. El programa debe realizar un bucle que recorra todas las formas, las ponga todas del mismo color y las mueva a una determinada posición.
// 6-¿qué ocurre en el ejercicio anterior si se intenta imprimir la información de cada forma y qué sucede si se intenta obtener en ese bucle el área de todas las formas del vector?


#include <iostream>
#include <cstring>

#define PI 3.1415

struct Color {
  int r;
  int g;
  int b;
};

// class Point
////////////////////////////////////////
class Point {
private:
  int x;
  int y;
public:
  int getX();
  int getY();
  void setX(int x);
  void setY(int y);
};
int Point::getX() { return x;}
int Point::getY() { return y;}
void Point::setX(int x) { this->x = x;}
void Point::setY(int y) { this->y = y;}

// class Shape
////////////////////////////////////////
class Shape {
protected:
  struct Color color;
  Point center;
  char * name;

public:
  Shape(char * name);
  Shape(char * name, Point center, struct Color c);
  void setName(char * n);
  char* getName();
  struct Color getColor();
  void setColor(int rr, int gg, int bb);
  void setCenter(int x, int y);
  void print();
  virtual float getArea() = 0;
};
Shape::Shape(char *name) {
  setName(name);
  center.setX(0);
  center.setY(0);
  setColor(0,0,0);
}
Shape::Shape(char *name, Point cen, struct Color c) {
  setName(name);
  center = cen;
  color = c;
}
void Shape::setName(char *n) {
  name = (char *)malloc(strlen(n)*sizeof(char));
  strcpy(name, n);
}
char* Shape::getName() {
  return name;
}
struct Color Shape::getColor(){
  return color;
}
void Shape::setColor(int rr, int gg, int bb) {
  color.r = rr;
  color.g = gg;
  color.b = bb;
}
void Shape::setCenter(int x, int y) {
  center.setX(x);
  center.setY(y);
}
void Shape::print() {
  std::cout << "Name..: " << name << std::endl;
  std::cout << "Center: (" << center.getX() << "," << center.getY() << ")" << std::endl;
  std::cout << "Color.: rgb(" << color.r << "," << color.g << "," << color.b << ")" << std::endl;
}

// clas Rectangle
////////////////////////////////////////
class Rectangle :public Shape {
private:
  float sideA;
  float sideB;
public:
  Rectangle();
  Rectangle(float a, float b);
  float getArea();
  float getPerimeter();
  void resize(float factor);
  void print();
};
Rectangle::Rectangle() : Shape((char*) "Rectangle") {
  sideA = 0;
  sideB = 0;
}
Rectangle::Rectangle(float a, float b) : Shape((char *)"Rectangle") {
  sideA = a;
  sideB = b;
}
float Rectangle::getArea() { return sideA*sideB;}
float Rectangle::getPerimeter() { return sideA * 2 + sideB * 2; }
void Rectangle::resize(float factor) {
  sideA = sideA * factor;
  sideB = sideB * factor;
}
void Rectangle::print() {
  Shape::print();
  std::cout << "Area..: " << getArea() << std::endl;
  std::cout << "Peri..: " << getPerimeter() << std::endl;
}

// class Square
////////////////////////////////////////
class Square : public Rectangle {
public:
  Square(float a);
};
Square::Square(float a) : Rectangle(a, a) {
  setName((char*) "Square");
}

// Ellipse
////////////////////////////////////////
class Ellipse : public Shape {
private:
  float minRadio;
  float maxRadio;

public:
  Ellipse();
  Ellipse(float minR, float maxR);
  float getArea();
  void print();
};
Ellipse::Ellipse() :  Shape((char *) "Ellipse") {
  minRadio = 0;
  maxRadio = 0;
}
Ellipse::Ellipse(float minR, float maxR) : Shape((char *) "Ellipse") {
  minRadio = minR;
  maxRadio = maxR;
}
float Ellipse::getArea() { return PI*(minRadio * maxRadio); }
void Ellipse::print() {
  Shape::print();
  std::cout << "Area..: " << getArea() << std::endl;
}

// Circle
////////////////////////////////////////
class Circle : public Ellipse {
private:
  float radio;
public:
  Circle(float r);
  void setRadio(float r);
  float getArea();
  void print();
};
Circle::Circle(float r) : Ellipse() {
    setName((char*) "Circle");
    setRadio(r);
}
void Circle::setRadio(float r) {
  radio = r;
}
float Circle::getArea() { return PI * radio * radio; }
void Circle::print() {
  Shape::print();
  std::cout << "Area..: " << getArea() << std::endl;
}

// main
//////////////////////////////////////////////////////////////////////

int main(void)
{
  std::cout << std::endl << "================================================================================" << std::endl;
  std::cout << "Exercise 1." << std::endl;
  std::cout << "================================================================================" << std::endl << std::endl;

  Rectangle r(2.0, 3.0);
  r.setColor(255,255,255);
  r.setCenter(23, 12);

  r.print();
  r.resize(0.5);
  std::cout << "--------------------------------------------------" << std::endl;
  std::cout << "set reSize FactoR to 0.5" << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;
  r.print();

  // ellipse
  std::cout << std::endl << "================================================================================" << std::endl;
  std::cout << "Exercise 2." << std::endl;
  std::cout << "================================================================================" << std::endl << std::endl;

  Ellipse e(13.2, 23.3);
  e.setColor(150, 123, 11);
  e.setCenter(-3,-11);
  e.print();

  // square
  std::cout << std::endl << "================================================================================" << std::endl;
  std::cout << "Exercise 3." << std::endl;
  std::cout << "================================================================================" << std::endl << std::endl;

  Square s(100);
  s.setCenter(-1,-1);
  s.setColor(10, 20, 11);
  s.print();

  // circle
  std::cout << std::endl << "================================================================================" << std::endl;
  std::cout << "Exercise 4." << std::endl;
  std::cout << "================================================================================" << std::endl << std::endl;

  Circle c(11);
  c.setCenter(30,100);
  c.setColor(0, 220, 111);
  c.print();

  // ---------------------------------
  std::cout << std::endl << "================================================================================" << std::endl;
  std::cout << "Exercise 5." << std::endl;
  std::cout << "================================================================================" << std::endl << std::endl;

  Shape* shapes[4];
  shapes[0] = &r;
  shapes[1] = &e;
  shapes[2] = &s;
  shapes[3] = &c;
  int i;
  for (i = 0; i < 4; ++i) {
    shapes[i]->setColor(222, 222, 222);
    shapes[i]->setCenter(66, 66);
    shapes[i]->print();
  }

  std::cout << std::endl << "================================================================================" << std::endl;
  std::cout << "Exercise 6 & 7." << std::endl;
  std::cout << "================================================================================" << std::endl << std::endl;
  for (i = 0; i < 4; ++i) {
    std::cout << "Area of " << shapes[i]->getName() << ": " << shapes[i]->getArea() << std::endl;
  }

  std::cout << std::endl << "================================================================================" << std::endl;
  std::cout << "Exercise 8." << std::endl;
  std::cout << "================================================================================" << std::endl << std::endl;
  float max;
  int winner;
  max = 0;
  for (i = 0; i < 4; ++i) {
    if (shapes[i]->getArea() > max) {
      max = shapes[i]->getArea();
      winner = i;
    }
  }
  std::cout << "Max area shape is " << shapes[winner]->getName() << ", with an area of " << shapes[winner]->getArea() << " units." << std::endl;


  return 0;
}
