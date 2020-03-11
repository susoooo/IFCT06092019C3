// 2-Crea una clase asignatura. Dicha clase tendrá como propiedades, el nombre, y un código de identificación. Tambien tendrá un metodo para calcular la nota media, que devolverá siempre un 10.
// Crea una clase ciencias, heredera de la clase asignatura, que tendrá como mucho 5 notas. Crea un método de calculo de la nota media que la calcule sopesando igualmente las 5 notas.
// Crea una clase letras, heredada de la clase asignatura, que tendrá como mucho 10 notas. Crea un método de cálculo de la nota media que la calcule de forma que el resultado será 50% la media de las notas anteriores a la última nota, y 50% la última nota.
// Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota media que devuelva la nota que figura en dicha propiedad.
// Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. Calcula la nota media teniendo en cuenta que el 70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha nota debe ser la media de las notas de prácticas.
// Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, una de letras, y una de música y que imprima las notas medias.
#include <iostream>
#include <cstring>

class Subject {
protected:
  char* name;
  int id;
protected:
  void setName(char* n);
  void setId(int i);
  float getAverageGrade();
};
void Subject::setName(char* n) {
  name = (char*)malloc(sizeof(char)*strlen(n));
}
void Subject::setId(int i){
  id = i;
}
float Subject::getAverageGrade() {
  return 10.0;
}

// science
class Science : Subject {
private:
  int grades[5];
public:
  void setGrade(float grade, int number);
  float getAverageGrade();
};
void Science::setGrade(float grade, int number){
  grades[number] = grade;
}
float Science::getAverageGrade(){
  int i;
  float total;
  total = 0;
  for (i = 0; i < 5; ++i) {
    total += grades[i];
  }
  return total/5;
}

// humanities
class Humanities {
private:
  int grades[10];
public:
  void setGrade(float grade, int number);
  float getAverageGrade();
};
void Humanities::setGrade(float grade, int number){
  grades[number] = grade;
}
float Humanities::getAverageGrade(){
  int i;
  float total;
  total = 0;
  for (i = 0; i < 9; ++i) {
    total += grades[i];
  }
  total /= 9;
  return (total*5)/10 + (grades[9]*5)/10;
}

// music
class Music : Subject {
private:
  float grade;
public:
  void setGrade(float g);
  float getGrade();
};
void Music::setGrade(float g){
  grade = g;
}
float Music::getGrade(){
  return grade;
}

// Technology
class Technology : Science {
private:
  int practices[5];
public:
  void setPractice(float g, int number);
  float getAverageGrade();
};
void Technology::setPractice(float g, int number){
  practices[number] = g;
}
float Technology::getAverageGrade(){
  float average_grades;
  float average_practices;
  float total;
  int i;

  total = 0;
  average_grades = getAverageGrade();
  average_practices = 0;
  for (i = 0; i < 5; ++i) {
    average_practices += practices[i];
  }
  average_grades /= 5;

  return (average_grades*7)/10 + (average_practices*3)/10;
}

int main(void)
{
  // TODO: (ro)bot to test it
  return 0;
}
