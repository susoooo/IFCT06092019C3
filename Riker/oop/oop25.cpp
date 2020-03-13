// 1-Crea una clase electrodoméstico. Esta clase incluirá información sobre la potencia del electrodomestico y su consumo por hora en watios y el número de horas que lleva encendido desde el último ciclo de consumo. Incluyele un método calcular_consumo que calcule el consumo como el resultado de multiplicar la portencia por su consumo por hora por el tiempo que lleva encendido desde el último ciclo de consumo.
// Crea una clase lavadora, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que la potencia que utiliza para el consumo es la mitad de la que tiene como propiedad.
// Crea una clase nevera, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que el consumo por hora es un 70% del que tiene especificado como propiedad.
// Crea una clase radiador, hija de electrodomestico, que calcule el consumo de la misma forma que su predecesora.
// Haz un programa que pida al usuario los datos de 3 lavadoras, 3 neveras y 3 radiadores, y haz que se calculen los consumos de cada uno de ellos.
#include <iostream>

class ElectricalAppliance {
protected:
  float power;
  float consume;
  int hours;
public:
  ElectricalAppliance();
  ElectricalAppliance(float p, float c, float h);
  void setPower(float p);
  float getPower();
  void setConsume(float c);
  float getConsume();
  void setHours(int h);
  int getHours();
  float calc_consume();
};
ElectricalAppliance::ElectricalAppliance() {
  setPower(0);
  setConsume(0);
  setHours(0);
}
ElectricalAppliance::ElectricalAppliance(float p, float c, float h) {
  power = p;
  consume = c;
  hours = h;
}
float ElectricalAppliance::calc_consume() {
  return (power * consume) / hours;
}
void ElectricalAppliance::setPower(float p) {
  power = p;
}
float ElectricalAppliance::getPower() {
  return power;
}
void ElectricalAppliance::setConsume(float d) {
  consume = d;
}
float ElectricalAppliance::getConsume() {
  return consume;
}
void ElectricalAppliance::setHours(int h) {
  power = h;
}
int ElectricalAppliance::getHours() {
  return hours;
}

// washing machine
class WashingMachine : public ElectricalAppliance {
public:
  WashingMachine();
  WashingMachine(float p, float c, float h);
  float calc_consume();
};
WashingMachine::WashingMachine() {}
WashingMachine::WashingMachine(float p, float c, float h)
  : ElectricalAppliance(p, c, h) {}

float WashingMachine::calc_consume() {
  return ((power/2)*consume)/hours;
}
// fridge
class Fridge : protected ElectricalAppliance {
public:
  Fridge(float p, float c, float h);
  float calc_consume();
};
Fridge::Fridge(float p, float c, float h)
  : ElectricalAppliance(p, c, h) {}

float Fridge::calc_consume() {
  return (ElectricalAppliance::calc_consume() * 70)/100;
}

// radiator
class Radiator : protected ElectricalAppliance {
public:
  Radiator(float p, float c, float h);
  float calc_consume();
};
Radiator::Radiator(float p, float c, float h)
  : ElectricalAppliance(p, c, h) {}

float Radiator::calc_consume() {
  return (ElectricalAppliance::calc_consume() * 70)/100;
}

int main(void)
{
  WashingMachine a(1,1,1);
  a.setConsume(1.2);
  a.setPower(13);
  a.setHours(3);

  Fridge b(10,10,10);
  Radiator c(12,23,34);

  std::cout << "Washing Machine: " << a.calc_consume() << std::endl;
  std::cout << "Fridge.........: " << b.calc_consume() << std::endl;
  std::cout << "Radiator.......: " << c.calc_consume() << std::endl;
  return 0;
}
