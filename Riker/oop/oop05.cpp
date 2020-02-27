// 1-Crea una clase que represente a un ccadrado mediante su base y su altura. Implementa métodos para cambiar su base y su altura, y otros que calcule su area y su perímetro. 
// área= base * altura y perímetro=2*base + 2*altura).

#include  <iostream>

using namespace std;


class Square {
private:
  float base;
  float height;
public:
  void setBase(float b);
  float getBase();
  void setHeight(float h);
  float getHeight();
  float getPerimeter();
  float getArea();
};

void Square::setBase(float b) {
  base = b;
}

float Square::getBase() {
  return base;
}

void Square::setHeight(float h) {
  height = h;
}

float Square::getHeight(){
  return  height;
}

float Square::getPerimeter() {
  return base*2+height*2;
}

float Square::getArea() {
  return base* height;
}

int main(void)
{
  Square litteSquare;

  cout << "Testing Square class" << endl;
  cout << "setting Base to 5.4 and Height to 6.3" << endl;

  litteSquare.setBase(5.4);
  litteSquare.setHeight(6.3);

  cout << "Calculating perimeter ; result must be: 23.4" << endl;
  cout << " Perimeter :: " << litteSquare.getPerimeter() << endl;

  cout << "Calculating area ; result must be: 34.02" << endl;
  cout << " Area :: " << litteSquare.getArea() << endl;

  return 0;
}
