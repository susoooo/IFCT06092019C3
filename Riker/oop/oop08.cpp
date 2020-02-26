// 4-Un punto puede representarse como una clase con 3 propiedades, una por cada coordenada del punto. Crea un programa que cree 20 objetos punto y que los posicione en el espacio de forma aleatoria. Crea un programa que calcule la distancia media de los puntos al origen de coordenadas (punto 0,0,0). (Pista:crea un método en la clase punto que calcule la distancia desde el punto al origen de coordenadas).

#include <iostream>
#include <math.h>

#define POINTS 20
#define LIMIT 100

class Point{
private:
  int x;
  int y;
  int z;
public:
  void setPoint(int, int, int);
  float getDistanceFromOrigin();
  int getX();
  int getY();
  int getZ();
};

void Point::setPoint(int x, int y, int z){
  this->x = x;
  this->y = y;
  this->z = z;
}
// origin: 0,0,0
float Point::getDistanceFromOrigin(){
  return sqrt(x*x + y*y + z*z);
}

int Point::getX(){ return x;}
int Point::getY(){ return y;}
int Point::getZ(){ return z;}

int main(void)
{
  Point points[POINTS];
  int counter;

  // random seed
  srand(time(NULL));

  // load points array
  for (counter=0; counter < POINTS; counter++) {
    points[counter].setPoint(rand()%LIMIT, rand()%LIMIT, rand()%LIMIT);
  }

  // distance from origin
  for (counter=0; counter < POINTS; counter++) {
    std::cout << "[" << counter << "] ";
    std::cout << "(" << points[counter].getX();
    std::cout << "," << points[counter].getY();
    std::cout << "," << points[counter].getZ();
    std::cout << ") :: " << points[counter].getDistanceFromOrigin() << " units." << "\n";
  }
  return 0;
}
