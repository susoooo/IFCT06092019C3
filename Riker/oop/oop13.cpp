// 1-Toma la clase persona que has definido en el ejercicio 1 del boletín C++Objetos_03a.txt. A partir de ella crea una clase asalariado que guarde información sobre el sueldo que cobra la persona neto al mes y la retención que se le aplica en la nómina. Crea al menos un constructor y un los correspondientes métodos de get y set.

#include <iostream>

using namespace std;


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

class Asalariado : public Person {
private:
  float neto;
  float taxes;

public:
  Asalariado(float neto, float tax);
  void setNeto(float value);
  float getNeto();
  void setTax(float value);
  float getTax();
};

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


int main(void)
{
  Asalariado p1(1000.0, 21.3);

  std::cout << "Name: " << p1.getName() << std::endl;
  std::cout << "Neto: " << p1.getNeto() << std::endl;
  std::cout << "Tax.: " << p1.getTax() << std::endl;
  return 0;
}
