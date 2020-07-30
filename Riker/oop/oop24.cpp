// 4-Realice un programa que cree cuatro rectangulos, pida por pantalla al
// usuario el lado mayor y menor de los mismos y su color. A continuación haz
// que el programa calcule el área y perimetro de dichos rectángulos. Luego pide
// por pantalla un factor de escala para cambiar el tamaño de cada uno de los
// rectangulos y haz que el programa muestre nuevamente el área y el perímetro
// de cada rectángulo.

#include <cstring>
#include <iostream>

struct Colour {
  int r;
  int b;
  int g;
};

class Point {
private:
  int x;
  int y;

public:
  void setPoint(int x, int y);
  int getX();
  int getY();
};
void Point::setPoint(int x, int y) {
  this->x = x;
  this->y = y;
}
int Point::getX() { return x; }
int Point::getY() { return y; }

class Shape {
private:
  struct Colour color;
  Point center;
  char *name;

public:
  Shape(char *name);
  struct Colour getColour();
  void setColour(int r, int g, int b);
  void setCenter(int x, int y);
  Point getCenter();
  void printDetails();
};
Shape::Shape(char *name) {
  this->name = (char *)malloc(strlen(name) * sizeof(char));
  strcpy(this->name, name);
  setCenter(0, 0);
}

struct Colour Shape::getColour() {
  return color;
}
void Shape::setColour(int r, int g, int b) {
  color.r = r;
  color.g = g;
  color.b = b;
}
void Shape::setCenter(int x, int y) { center.setPoint(x, y); }
Point Shape::getCenter() { return center; }
void Shape::printDetails() {
  std::cout << "Shape.: " << name << std::endl;
  std::cout << "Colour: rgb(" << color.r << "," << color.g << "," << color.b
            << ")" << std::endl;
  std::cout << "Center: (" << center.getX() << "," << center.getY() << ")"
            << std::endl;
}

// Rectangle
class Rectangle : public Shape {
private:
  float sideA;
  float sideB;

public:
  Rectangle(int a, int b);
  float area();
  float perimeter();
  void resize(float factor);
  void setSides(float a, float b);
};
Rectangle::Rectangle(int a, int b) : Shape((char*) "rectangle"){
  sideA = a;
  sideB = b;
}
float Rectangle::area() { return sideA * sideB; }
float Rectangle::perimeter() { return sideA * 2 + sideB * 2; }
void Rectangle::resize(float factor) {
  sideA *= factor;
  sideB *= factor;
}
void Rectangle::setSides(float a, float b) {
  sideA = a;
  sideB = b;
}

int main(void) {

  float la;
  float lb;
  int r,g,b;
  float factor;

  Rectangle a(1,1);

  std::cout << "Side A? ";
  std::cin >> la;
  std::cout << "Side B? ";
  std::cin >> lb;
  a.setSides(la, lb);

  std::cout << "R ";
  std::cin >> r;
  std::cout << "G ";
  std::cin >> g;
  std::cout << "B ";
  std::cin >> b;
  a.setColour(r, g, b);

  std::cout << "Area: " << a.area() << "\n";
  std::cout << "Perimeter: " << a.perimeter() << "\n";

  std::cout << "Factor? ";
  std::cin >> factor;
  a.resize(factor);

  std::cout << "Area: " << a.area() << "\n";
  std::cout << "Perimeter: " << a.perimeter() << "\n";

  return 0;
}

