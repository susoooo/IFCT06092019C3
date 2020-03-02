// 1-Crea una clase que represente a una persona. Al menos debe contener información sobre su nombre, apellido primero y segundo, fecha de nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores que permitan la creación de personas sin saber sus datos, conociendo su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase.

// Crea objetos para cada uno de los compañeros de clase usando diferentes constructores y haz que las clases impriman los datos que tienen sobre ellos.

#include <iostream>
#include <cstring>
#include <stdlib.h>

struct Date {
  short day;
  short month;
  short year;
};


class Person {
private:
  char name[30];
  char surname1[30];
  char surname2[30];
  struct Date bornDate;
  char bornPlace[30];
  char country[30];
  char id[9];
public:
  Person();
  Person(char id[9]);
  Person(char name[], char surname1[], char surname2[]);
  Person(char id[], char name[], char surname1[], char surname2[]);
  Person(char id[], char name[], char surname1[], char surname2[], std::string bornDate, char bornPlace[], char country[]);
  void print();
};

Person::Person() {
  strcpy(this->name, "");
  strcpy(this->surname1, "");
  strcpy(this->surname2, "");
  strcpy(this->bornPlace, "");
  strcpy(this->country, "");
  this->bornDate.day = 0;
  this->bornDate.month = 0;
  this->bornDate.year = 0;
  strcpy(this->id, "");
}
Person::Person(char id[]) {
  strcpy(this->id, id);
}

Person::Person(char name[], char surname1[], char surname2[]) {
  strcpy(this->name, name);
  strcpy(this->surname1, surname1);
  strcpy(this->surname2, surname2);

}
Person::Person(char id[], char name[], char surname1[], char surname2[]) {
  strcpy(this->id, id);
  strcpy(this->name, name);
  strcpy(this->surname1, surname1);
  strcpy(this->surname2, surname2);
}
Person::Person(char id[], char name[], char surname1[], char surname2[], std::string bornDate, char bornPlace[], char country[]) {
  strcpy(this->id, id);
  strcpy(this->name, name);
  strcpy(this->surname1, surname1);
  strcpy(this->surname2, surname2);
  strcpy(this->bornPlace, bornPlace);
  strcpy(this->country, country);
  // split string to struct
  this->bornDate.day = std::stoi(bornDate.substr(0, 2));
  this->bornDate.month = std::stoi(bornDate.substr(3, 5));
  this->bornDate.year = std::stoi(bornDate.substr(6, 8));
}
void Person::print() {
  std::cout << "ID...............: " << this->id << std::endl;
  std::cout << "Name and Surnames: " << this->name << " " << this->surname1 << " " << this->surname2 << std::endl;
  std::cout << "Place and Country: " << this->bornPlace << " " << this->country << std::endl;
  std::cout << "Born data........: " << this->bornDate.day << "/" << this->bornDate.month << "/" << this->bornDate.year << std::endl;
}

int main(void)
{
  Person p1;
  Person p2((char*) "11223344A");
  Person p3((char*) "Perry", (char*) "Mason", (char*) "Mason");
  Person p4((char*) "11223344A", (char*) "Perry", (char*) "Mason", (char*) "Mason");
  Person p5((char*) "11223344A", (char*) "Perry", (char*) "Mason", (char*) "Mason", "01/11/67", (char*) "Minnessotta", (char*) "USA");

  p1.print();
  std::cout << std::endl;
  p2.print();
  std::cout << std::endl;
  p3.print();
  std::cout << std::endl;
  p4.print();
  std::cout << std::endl;
  p5.print();
  std::cout << std::endl;

  return 0;
}