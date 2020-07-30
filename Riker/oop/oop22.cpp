// 2-Defina una clase derivada Rectangulo que tenga los siguientes miembros como
// datos:
// 	 - Lado menor.
// 	 - Lado mayor.
//   Y, al menos, las siguientes funciones miembro:
//      	 - Calcular el área (lado menor * lado mayor).
// 	 - Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
// 	 - Cambiar el tamaño del rectángulo. Recibe como parámetro un factor
// 	   de escala. Así, por ejemplo, si el factor vale 2, el rectángulo
// 	   duplicará su tamaño y si es 0,5 se reducirá a la mitad.

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
  void printDetails();
};
Shape::Shape(char *name) {
  this->name = (char *)malloc(strlen(name) * sizeof(char));
  strcpy(this->name, name);
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

int main(void) {
  Rectangle regular(10, 10);
  regular.setColour(255, 255, 255);
  regular.setCenter(15, 33);

  regular.printDetails();

  std::cout << "area: " << regular.area() << std::endl;
  std::cout << "perimeter: " << regular.perimeter() << std::endl;

  regular.resize(0.5);
  std::cout << "Resized by 0.5 " << std::endl;
  std::cout << "area: " << regular.area() << std::endl;
  std::cout << "perimeter: " << regular.perimeter() << std::endl;

  return 0;
}
