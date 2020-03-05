// 9-Por último, otras de las lienas de negocio que están abriendo con respecto a los locales de tiendas de alimentación, es la especialización en locales para fruterías, carnicerías y panaderías. Con respecto a las primeras, quisieran poder almacenar información sobre si el local dispone o no de cámara frigorifica, sobre las segundas del número de frigoríficos de los que dispone el local y sobre las terceras, de si tiene espacio para proporcionar servicio de cafetería y el número de armarios de pan del que dispone el local.


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

// shirts
class Shirt : public Clothes{
private:
  bool customPlace;
public:
  void setCustomPlace(bool v);
  bool getCustomPlace();
};
void Shirt::setCustomPlace(bool v){
  customPlace = v;
}
bool Shirt::getCustomPlace(){
  return customPlace;
}

// haberdashery
class Haberdashery : public Shop {
private:
  int desks;
public:
  void setDesks(int v);
  int getDesks();
};
void Haberdashery::setDesks(int v){
  desks = v;
}
int Haberdashery::getDesks(){
  return desks;
}

// hats
class Hat : public Shop {
private:
  int exibitors;
public:
  void setExibitors(int v);
  int getExibitors();
};
void Hat::setExibitors(int v){
  exibitors = v;
}
int Hat::getExibitors(){
  return exibitors;
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

// fruit
class Fruit : public Food{
private:
  bool freezer;
public:
  void setFreezer(bool v);
  bool getFreezer();
};
void Fruit::setFreezer(bool v){
  freezer = v;
}
bool Fruit::getFreezer(){
  return freezer;
}

// Butcher
class Butcher : public Food {
private:
  int freezerLength;
public:
  void setFreezerLength(int v);
  int getFreezerLength();
};
void Butcher::setFreezerLength(int v){
  freezerLength = v;
}
int Butcher::getFreezerLength(){
  return freezerLength;
}

// bakery
class Bakery : public Food{
private:
  bool coffeService;
  int cupboards;
public:
  void setCoffeService(bool v);
  bool getCoffeService();
  void setCupboards(int v);
  int getCupboards();
};
void Bakery::setCoffeService(bool v){
  coffeService = v;
}
bool Bakery::getCoffeService(){
  return coffeService;
}
void Bakery::setCupboards(int v){
  cupboards = v;
}
int  Bakery::getCupboards(){
  return cupboards;
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
  Bakery d;
  d.setCupboards(122);
  d.setAddress("perry mason street");
  d.setRegisters(12);
  std::cout << d.getAddress() << d.getCupboards() << " - " << d.getRegisters();

  return 0;
}
