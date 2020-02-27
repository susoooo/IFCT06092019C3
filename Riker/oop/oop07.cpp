// 3-Crea una clase que represente a un alumno. Cada alumno se identifica por su DNI. Se desea almacenar información de su nombre, sus apellidos, y sus notas finales en las asignaturas en las que se ha matriculado. De dichas asignaturas se dese almacenar tambien el nombre. Un alumno como mucho puede haberse matriculado de 30 asignaturas. Crea un programa en el que se pueda meter los datos de un alumno , y que calcule la nota media del alumno, utilizando objetos.

#include <iostream>


using namespace std;;

struct Subject {
  std::string name;
  float mark;
};

class Student {
private:
  static const short MAX_SUBJECTS = 30;
  string id_card;
  string name;
  string surname;
  struct Subject subjects[MAX_SUBJECTS];
  short subjects_index = 0;

public:
  void setId(string id);
  string getId();
  void setName(string n);
  string getName();
  void setSurname(string s);
  string getSurname();
  short getMaxSubjetcs();

  short setSubject(string s, float m);
  float getSubjectMark(short i);
  bool subjectExist(string s);
  float calculateAverage();
};

void Student::setId(string id) { id_card = id; }
string Student::getId() { return id_card; }
void Student::setName(string n) { name = n; }
string Student::getName() { return name; }
void Student::setSurname(string s) { surname = s; }
string Student::getSurname() {return surname;}
short Student::getMaxSubjetcs() { return MAX_SUBJECTS; }

// return false if subjects not exist
bool Student::subjectExist(string s) {
  bool success;
  short counter;
  short res;

  success = false;
  counter = 0;
  while (success != false && counter < MAX_SUBJECTS) {
    if (subjects[counter].name == s)
      success = true;
    counter++;
  }

  if (success)
    res = counter--;
  else
    res = false;

  return res;
}

// return false if subjects array is full
short Student::setSubject(string s, float m) {
  bool success;

  success = true;
  subjects_index++;
  if(subjects_index < MAX_SUBJECTS) {
    subjects[subjects_index].name = s;
    subjects[subjects_index].mark = m;
  } else
    success = false;
  return success;
}

float Student::getSubjectMark(short i){
  return subjects[i].mark;
}

float Student::calculateAverage() {
  short i;
  float total;
  for (i = 0; i < subjects_index; ++i) {
    total += subjects[i].mark;
  }
  return total/subjects_index;
}

void newStudent(Student &s) {
  string id;
  string name;
  string surname;
  short counter;
  float mark;

  cout << "New Student" << endl;
  cout << "ID: ";
  cin >> id;
  cout << "Name: ";
  cin >> name;
  cout << "Surname: ";
  cin >> surname;

  s.setId(id);
  s.setName(name);
  s.setSurname(surname);

  cout << "Enter subjects and marks (Max. 30)" << endl;
  while (counter < s.getMaxSubjetcs() && name!=".") {
    cout << "Subject: ";
    cin >> name;
    if (name != ".") {
      cout << "Mark:";
      cin >> mark;
      s.setSubject(name, mark);
      counter++;
    }
  }
}

int main(void)
{
  Student oneStudent;
  newStudent(oneStudent);

  cout << "Average of " << oneStudent.getName() << "is " << oneStudent.calculateAverage() << endl;

  return 0;
}
