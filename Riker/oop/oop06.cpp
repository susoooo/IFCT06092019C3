/* 2-Crea una clase que represente a una persona con su nombre y apellidos, y el día, mes y año de su fecha de nacimiento. Escribe un programa que pida los datos de una persona, los guarde en un objeto, y calcule la edad de la persona representada en ese objeto mediante un método implementado en la clase. */

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

int main(void)
{
  Person attorney;

  cout << "Testing Person class" << endl;
  cout << "with: Perry Mason was born 02/23/1944.";
  cout << "  setting data in Person instance." << endl;

  attorney.setName("Perry");
  attorney.setSurname("Mason");
  attorney.setDay(23);
  attorney.setMonth(2);
  attorney.setYear(1944);

  cout << "Showing object data" << endl;
  cout << "  " << attorney.getName() << " " << attorney.getSurname();
  cout << " was born in " << attorney.getMonth() << "/" << attorney.getDay() << "/" << attorney.getYear();
  cout << " .He is/would be " << attorney.getAge(2020) << " years old." << endl;

  return 0;
}
