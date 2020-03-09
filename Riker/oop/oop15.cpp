// 4-Una inmobiliaria desea crear un programa en un lenguaje orientado a objetos que le permita almacenar información de los locales comerciales que gestiona. La información que desea almacenar sobre cada local comercial es dirección, metros cuadrados y precio del metro cuadrado. Crea una clase que pueda utilizarse para representar esta información.

#include <iostream>
#include <cstring>

class Local {
private:
  std::string address;
  float area;
  float price_m;
public:
  Local();
  Local(std::string address, float area, float price_m);
  void setAddress(std::string address);
  std::string getAddress();
  void setArea(float area);
  float getArea();
  void setPriceMeter(float price);
  float getPriceMeter();
};

Local::Local() {
  address = "";
  area = 0;
  price_m = 0;
}
Local::Local(std::string address, float area, float price_m) {
  this->address = address;
  this->area = area;
  this->price_m = price_m;
}
void Local::setAddress(std::string address) {
  this->address = address;
}
std::string Local::getAddress() {
  return this->address;
}
void Local::setArea(float area) {
  this->area = area;
}
float Local::getArea() {
  return this->area;
}
void Local::setPriceMeter(float price) {
  this->price_m = price;
}
float Local::getPriceMeter() {
  return this->price_m;
}
