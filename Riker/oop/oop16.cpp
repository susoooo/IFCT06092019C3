// 5-La inmobiliaria anterior está especializada en la gestión de locales destinados a tiendas o a Hostelería. De los locales destinados a tiendas desea guardar información sobre los metros de fachada que tiene y de los loscales destinados a Hostelería, información sobre el tiempo que el local lleva abierto. Crea un par de clases que permitan almacenar y gestionar la información indicada.

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

// shop
class Shop : Local {
 private:
  float front_meters;
 public:
  Shop();
  Shop(std::string address, float area, float price_m, float front_meters);
  void setFrontMeters(float meters);
  float getFrontMeters();
};
Shop::Shop() {
  front_meters = 0;
}
Shop::Shop(std::string address, float area, float price_m, float front_meters){
  this->setAddress(address);
  this->setArea(area);
  this->setPriceMeter(price_m);
  this->front_meters = front_meters;
}

// hotel
class Hotel : public Local {
private:
  float time;
public:
  Hotel();
  Hotel(std::string address, float area, float price_m, float time);
  void setTime(float t);
  float getTime();
};
Hotel::Hotel(){
  this->time = 0;
}
Hotel::Hotel(std::string address, float area, float price_m, float time){
  this->setAddress(address);
  this->setArea(area);
  this->setPriceMeter(price_m);
  this->time = time;
}
void Hotel::setTime(float t){
  this->time = t;
}
float Hotel::getTime(){
  return this->time;
}


int main(int argc, char *argv[])
{
  Hotel h("perry street", 100, 1111, 232.3);

  std::cout << h.getAddress();

  return 0;
}
