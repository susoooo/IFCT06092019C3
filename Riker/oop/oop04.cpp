// 4-Todo triangulo se puede representar como la unión mediante lineas de tres puntos. Crea una clase que represente un triangulo utilizando los puntos del apartado 2. Incluye métodos para calcular la distancia entre sus vertices.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

//// * classes

// class MyPoint
class MyPoint{
private:
  int x;
  int y;
public:
  void setRandomValues();
  int getX();
  int getY();

  void setX(int v);
  void setY(int v);

  void print();

};

void MyPoint::setRandomValues() {
  x = rand()/((RAND_MAX + 1u)/1000);
  y = rand()/((RAND_MAX + 1u)/1000);
}

int MyPoint::getX() {
  return x;
}
int MyPoint::getY() {
  return y;
}
void MyPoint::setX(int v) {
  x = v;
}
void MyPoint::setY(int v) {
  y = v;
}

void MyPoint::print() {
  cout << "(" << x << "," << y << ")";
}

// class Triangle

class Triangle {
private:
  MyPoint a;
  MyPoint b;
  MyPoint c;

  float distanceBetween(MyPoint x, MyPoint y);
public:
  void generateTriangle();
  float distanceAB();
  float distanceAC();
  float distanceBC();
};

void Triangle::generateTriangle() {
  a.setRandomValues();
  b.setRandomValues();
  c.setRandomValues();
}

float Triangle::distanceBetween(MyPoint x, MyPoint y) {
  float distance;
  distance = sqrt(pow(x.getX() - y.getX(), 2)+ pow(x.getY() - y.getY(), 2));
  return distance;
}

float Triangle::distanceAB(){
  return distanceBetween(a, b);
}

float Triangle::distanceAC(){
  return distanceBetween(a, c);
}

float Triangle::distanceBC(){
  return distanceBetween(b, c);
}


// statics global functions
void printPoint(MyPoint p);

int main(void) {

  std::srand(std::time(nullptr));

  Triangle myTriangle;

  myTriangle.generateTriangle();

  cout << "Distance froma A->B: " << myTriangle.distanceAB() << endl;
  cout << "Distance froma A->C: " << myTriangle.distanceAC() << endl;
  cout << "Distance froma B->C: " << myTriangle.distanceBC() << endl;
}
