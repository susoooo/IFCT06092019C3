// 3-Crea una clase que represente un automovil
// Deberá incluir al menos métodos para encenderlo, apagarlo, abrirlo y cerrarlo.
// Crea un programa que abra un coche, lo arranque, lo acelere hasta 100 km/h, lo pare, lo apague y lo cierre.

#include  <iostream>

class Vehicle
{
private:
  bool open = false;
  bool on = false;
  int speed = 0;
public:
  void opened(bool s);
  void started(bool s);
  void setSpeed(int s);
  void printState();
};

void Vehicle::opened(bool s) {
  open = s;
}
void Vehicle::started(bool s) {
  on = s;
}
void Vehicle::setSpeed(int s) {
  speed = s;
}
void Vehicle::printState() {
  std::string o;
  std::string s;

  if (open)
    o = "opened";
  else
    o = "closed";

  if (on)
    s = "started";
  else
    s = "turned off";

  std::cout << "Vehicle is " << o << ", " << s << " and the current speed is " << speed <<" km/h.";
}


int main(void)
{
  Vehicle car;

  car.printState();
  std::cout << std::endl;


  std::cout << "After sometime ... " << std::endl;

  car.opened(true);
  car.started(true);
  car.setSpeed(101);

  car.printState();
  std::cout << std::endl;

  return 0;
}
