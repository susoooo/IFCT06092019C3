// 2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. En la clase obrero, guarda el nombre del cargo que desempeña. Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los constructores y metodos get y set que creas necesarios.

#include <iostream>
#include <string.h>

using namespace std;

// Person
class Person {
 private:
  string name;
  string surname;
  short day;
  short month;
  short year;
public:
  void setName(string n);
  string getName();
  void setSurname( string s);
  string getSurname();
  void setDay(short d);
  short getDay();
  void setMonth(short m);
  short getMonth();
  void setYear(short y);
  short getYear();
  short getAge(short currentYear);
};

void Person::setName(string n) { name = n; }
string Person::getName() {return name;}
void Person::setSurname(string s) { surname = s; }
string Person::getSurname() { return surname; }
void Person::setDay(short d) { day = d; }
short Person::getDay() { return day; }
void Person::setMonth(short m) { month = m; }
short Person::getMonth() { return month; }
void Person::setYear(short y) { year = y; }
short Person::getYear() { return year; }
short Person::getAge(short currentYear) { return currentYear - year; }


// Asalariado
class Asalariado : public Person {
private:
  float neto;
  float taxes;

public:
  Asalariado();
  Asalariado(float neto, float tax);
  void setNeto(float value);
  float getNeto();
  void setTax(float value);
  float getTax();
};

Asalariado::Asalariado() {
  this->neto = 0;
  this->taxes = 0;
}
Asalariado::Asalariado(float neto, float tax) {
  Person(); // ??????
  this->neto = neto;
  this->taxes = tax;
}

void Asalariado::setNeto(float value) {
  this->neto = value;
}
float Asalariado::getNeto() {
  return this->neto;
}
void Asalariado::setTax(float value) {
  this->taxes = value;
}
float Asalariado::getTax() {
  return this->taxes;
}

// obreiro
class Obreiro : public Asalariado {
private:
  char* charge;
public:
  Obreiro(char* name);
  void setCharge(char* name);
  char* getCharge();
};

Obreiro::Obreiro(char *name) {
  strcpy(this->charge, name);
}
void Obreiro::setCharge(char *name) {
 strcpy(this->charge, name);
}
char *Obreiro::getCharge() {
  return this->charge;
}

class Doctor : public Asalariado {
 private:
  int patients;
 public:
  Doctor(int patients);
  int getPatients();
  void setPatients(int patients);
};

Doctor::Doctor(int patients) {
  this->patients = patients;
}
int Doctor::getPatients() {
  return this->patients;
}
void Doctor::setPatients(int p) {
  this->patients = p;
}


int main(void)
{
  char* n = "Perry Boss";

  Obreiro p1(n);

  std::cout << "Name: " << p1.getName() << std::endl;
  std::cout << "Neto: " << p1.getNeto() << std::endl;
  std::cout << "Tax.: " << p1.getTax() << std::endl;
  std::cout << "Charge.: " << p1.getCharge() << std::endl;
  return 0;
}
