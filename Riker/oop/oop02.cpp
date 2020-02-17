// 2-Crea una clase que represente un punto en el espacio.
// Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// classes

class MyPoint{
private:
  int x;
  int y;
  int z;
public:
  void setRandomValues();
  int getX();
  int getY();
  int getZ();

  void setX(int v);
  void setY(int v);
  void setZ(int v);

  void print();

};

void MyPoint::setRandomValues() {
  x = rand()/((RAND_MAX + 1u)/1000);
  y = rand()/((RAND_MAX + 1u)/1000);
  z = rand()/((RAND_MAX + 1u)/1000);
}

int MyPoint::getX() {
  return x;
}
int MyPoint::getY() {
  return y;
}
int MyPoint::getZ() {
  return z;
}
void MyPoint::setX(int v) {
  x = v;
}
void MyPoint::setY(int v) {
  y = v;
}
void MyPoint::setZ(int v) {
  z = v;
}

void MyPoint::print() {
  cout << "(" << x << "," << y << "," << z << ")";
}

// statics global functions
void printPoint(MyPoint p);


int main(void) {

  std::srand(std::time(nullptr));

  MyPoint a, b, c;

  a.setRandomValues();
  b.setRandomValues();
  c.setRandomValues();

  printPoint(a);
  printPoint(b);
  printPoint(c);

  return 0;
}

void printPoint(MyPoint p){
  std::cout << "Point A: ";
  p.print();
  std::cout << endl;
}

