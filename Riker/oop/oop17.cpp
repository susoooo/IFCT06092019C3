// 6-Dentro de la categoría de tiendas, la inmobiliaria trabaja con tiendas de ropa, de comida, Ferreterías y Droguerías. De las tiendas de ropa, desea guardar información sobre si tienen espacio de probadores, y si tienen aseos. De las tiendas de comida, desean almacenar información sobre el número de liniales que posee la tienda, asi como el número de cajas de las que disponen. De las Ferreterías se desea guardar información sobre los metros cuadrados dedicados a almacen en el local, y de las Droguerías, se desea guardar datos sobre si están habilitadas para contener materiales peligrosos. Crea una clase por cada tipo de tienda de las antedichas que permita almacenar y gestionar la información indicada.

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
class Shop : public Local {
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

// clothes
class Clothes : public Shop {
private:
  bool changingRoom;
  bool wc;
public:
  void setChangingRoom(bool o);
  bool getChangingRoom();
  void setWC(bool o);
  bool getWC();
};
void Clothes::setChangingRoom(bool o){
  changingRoom = o;
}
bool Clothes::getChangingRoom(){
  return changingRoom;
}
void Clothes::setWC(bool o){
  wc = o;
}
bool Clothes::getWC(){
  return wc;
}

// food
class Food : public Shop {
private:
  int linials;
  int regiters;
public:
  void setLinials(int v);
  int getLinials();
  void setRegisters(int v);
  int getRegisters();
};
void Food::setLinials(int v){
  linials = v;
}
int Food::getLinials(){
  return linials;
}
void Food::setRegisters(int v){
  regiters = v;
}
int Food::getRegisters(){
  return regiters;
}

// hardware
class Hardware : public Shop{
private:
  float storage_meters;
public:
  void setStorageMeters(float m);
  int  getStorageMeters();
};
void Hardware::setStorageMeters(float m){
  storage_meters = m;
}
int Hardware::getStorageMeters(){
  return storage_meters;
}

// drugstores
class Drugstore : public Shop{
private:
  bool dangerousMaterialsSpace;
public:
  void setDangerousMaterialsSpace(bool v);
  bool getDangerousMaterialsSpace();
};
void Drugstore::setDangerousMaterialsSpace(bool v){
  dangerousMaterialsSpace = v;
}
bool Drugstore::getDangerousMaterialsSpace(){
  return dangerousMaterialsSpace;
}

// MAIN

int main(int argc, char *argv[])
{
  Drugstore d;
  d.setDangerousMaterialsSpace(true);
  d.setAddress("perry mason street");
  std::cout << d.getAddress() << d.getDangerousMaterialsSpace();

  return 0;
}
