// 7-Asimismo, y en relación con los locales destinados a hostelería, la inmobiliaria se ha especializado en Bares, Restaurantes y locales de comida para llevar. Sobre los locales destinados a bares, desean guardar información sobre el número de barras de las que dispone. Sobre los locales de Restaurantes, desean almacenar información sobre el número de mesas de las que disponen, así como de los metros cuadrados destinados a comedor, y de los metros cuadrados destinados a cocina. Sobre los locales de comida para llevar, desean almacenar información sobre si tiene cocina o no, y si disponen de plan de evacuación.

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

// Pub
class Bar : public Hotel{
private:
  int barsLength;
public:
  void setBarsLength(int v);
  int getBarsLength();
};
void Bar::setBarsLength(int v){
  barsLength = v;
}
int Bar::getBarsLength(){
  return barsLength;
}

// Ristorantes
class Ristorante : public Shop {
private:
  int tables;
  float dinning_meters;
public:
  void setTables(int v);
  int getTables();
  void setDinningMeters(float v);
  float getDinningMeters();
};
void Ristorante::setTables(int v){
  tables = v;
}
int Ristorante::getTables(){
  return tables;
}
void Ristorante::setDinningMeters(float v){
  dinning_meters = v;
}
float Ristorante::getDinningMeters(){
  return dinning_meters;
}

// take away

class TakeAway : public Shop{
private:
  bool kitchen;
  bool emergencyPlan; 
public:
  void setKitchen(bool v);
  bool getKitchen();
  void setEmergencyPlan(bool v);
  bool getEmergencyPlan();
};
void TakeAway::setKitchen(bool v){
  kitchen = v;
}
bool TakeAway::getKitchen(){
  return kitchen;
}
void TakeAway::setEmergencyPlan(bool v){
  emergencyPlan = v;
}
bool TakeAway::getEmergencyPlan(){
  return emergencyPlan;
}

// MAIN

int main(int argc, char *argv[])
{
  TakeAway d;
  d.setEmergencyPlan(false);
  d.setKitchen(true);
  d.setAddress("perry mason street");
  std::cout << d.getAddress() << d.getEmergencyPlan() << d.getKitchen();

  return 0;
}
