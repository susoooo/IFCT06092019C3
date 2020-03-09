// 1-Defina una clase Forma que tenga los siguientes miembros de datos:
// 	 - Color
// 	 - Coordenada del centro de la forma (objeto Punto)
// 	 - Nombre de la forma (char *)
//    Y, al menos, las siguientes funciones miembro:
// 	 - Obtener y cambiar el color
// 	 - Mover la forma (o sea, su centro)

// 2-Defina una clase derivada Rectangulo que tenga los siguientes miembros como datos:
// 	 - Lado menor.
// 	 - Lado mayor.
//   Y, al menos, las siguientes funciones miembro:
//      	 - Calcular el área (lado menor * lado mayor).
// 	 - Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
// 	 - Cambiar el tamaño del rectángulo. Recibe como parámetro un factor
// 	   de escala. Así, por ejemplo, si el factor vale 2, el rectángulo
// 	   duplicará su tamaño y si es 0,5 se reducirá a la mitad.

// 3-Realice un programa que cree una forma, cambie su color y la mueva cinco puntos
// hacia la derecha.

// 4-Realice un programa que cree cuatro rectangulos, pida por pantalla al usuario
// el lado mayor y menor de los mismos y su color. A continuación haz que el programa
// calcule el área y perimetro de dichos rectángulos. Luego pide por pantalla un factor
// de escala para cambiar el tamaño de cada uno de los rectangulos y haz que el programa
// muestre nuevamente el área y el perímetro de cada rectángulo.

#include <iostream>
#include <cstring>

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
int Point::getX() {
  return x;
}
int Point::getY() {
  return y;
}

class Shape {
private:
  struct Colour color;
  Point center;
  char * name;
public:
  Shape(char * name);
  struct Colour getColour();
  void setColour(int r, int g, int b);
  void setCenter(int x, int y);
  void printDetails();
};
Shape::Shape(char *name) {
  this->name = (char *)malloc(strlen(name)*sizeof(char));
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
void Shape::setCenter(int x, int y) {
  center.setPoint(x,y);
}
void Shape::printDetails() {
  std::cout << "Shape.: " << name << std::endl;
  std::cout << "Colour: rgb(" << color.r << "," << color.g << "," << color.b << ")"  << std::endl;
  std::cout << "Center: (" << center.getX() << "," << center.getY() << ")" << std::endl;
}

int main(void)
{
  char name[] = "irregular";
  Shape newShape(name);
  newShape.setColour(255, 255, 255);
  newShape.setCenter(15,33);

  newShape.printDetails();

  return 0;
}
