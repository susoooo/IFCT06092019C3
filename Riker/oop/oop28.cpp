// Se pretende desarrollar un conjunto de clases que representen, de forma simplificada, a una hipotética empresa dedicada a vender un producto. A continuación, se describen las características básicas de estas clases:

// 1. Empleado. Clase básica que describe a un empleado. Incluye sus datos personales (nombre, apellidos, DNI, dirección) y algunos datos tales como los años de antigüedad, teléfono de contacto y su salario.

// Incluye también información de quién es el empleado que lo supervisa
// (Empleado *). Tendrá, al menos, las siguientes funciones miembro:
// 	• Constructores para definir correctamente un empleado, a partir de su nombre,apellidos, DNI, dirección, teléfono y salario.
// 	• Imprimir (A través de los operadores de E/S redefinidos)
// 	• Cambiar supervisor
// 	• Incrementar salario

// 2. Secretario. Tiene despacho, número de fax e incrementa su salario un 5% anual.
// Tendrá, al menos, las siguientes funciones miembro:
// 	• Constructores (debe rellenar la información personal y los datos principales)
// 	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).

// 3. Vendedor. Tiene coche de la empresa (identificado por la matricula, marca y modelo), teléfono móvil, área de venta, lista de clientes y porcentaje que se lleva de las ventas en concepto de comisiones. Incrementa su salario un 10% anual.
// Tendrá, al menos, las siguientes funciones miembro:
// 	• Constructores (debe rellenar la información personal y los datos principales)
// 	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
// 	• Dar de alta un nuevo cliente.
// 	• Dar de baja un cliente.
// 	• Cambiar de coche.

// 4. Jefe de zona. Tiene despacho, tiene un secretario a su cargo, una lista de vendedores a su cargo y tiene coche de la empresa (identificado por la matrícula, marca y modelo). Incrementa su salario un 20% anual.
// Tendrá, al menos, las siguientes funciones miembro:
// 	• Constructores (debe rellenar la información personal y los datos principales)
// 	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
// 	• Cambiar de secretario.
// 	• Cambiar de coche.
// 	• Dar de alta y de baja un nuevo vendedor en su zona.

// Todos los empleados son vendedores, jefes de zona o secretarios. Hacer un programa de prueba que muestre como funciona. Probar, especialmente, que el método incrementar salario se comparta bien, según el empleado que sea así es la subida.

// TODO:
//      Seller career & career should be a year (from) , not an interval
//      Seller/Clerks/Clients..etc  must use a id. storing the instance is a waste of memory

#include <iostream>
#include <cstring>

#define ID_SIZE 9
#define MAX_CLIENTS 100

struct Vehicle {
  char* ID;
  char* brand;
  char* model;
};

// class Dumb Client
class DumbClient {
private:
  int id;
  char* name;
  char* surname;
  char* company;
public:
  DumbClient(int id, char* name, char* surname, char* company);
  int getClientID();
  void print();
};
DumbClient::DumbClient(int ID,  char* n, char* s, char* c) {
  id = ID;
  name = (char*)malloc(strlen(n)*sizeof(char));
  strcpy(name,n);
  surname = (char*)malloc(strlen(s)*sizeof(char));
  strcpy(surname, s);
  company = (char*)malloc(strlen(c)*sizeof(char));
  strcpy(company, c);
}
int DumbClient::getClientID() { return id; }
void DumbClient::print() {
  std::cout << name << " " << surname << " from " << company << " with ID: " << id << std::endl;
}

// class Employ
class Employ {
protected:
  char * position;
  char * name;
  char * surname;
  char * ID;
  char * address;
  char * telephone;
  float salary;
  int career;
  Employ* supervisor;
protected:
  Employ(char* name, char* surname, char id[]);
  Employ(char* name, char* surname, char id[], char* address, char* telephone, float salary, char* position);
  void setTextProperty(char* property, char* value);
  void setAddress(char* address);
  void setTelephone(char* telephone);
  void setPosition(char* position);
  void setSupervisor(Employ* supervisor);
  void applySalaryIncrement(float salary);
  void setCareer(int career);
  void print();
};
Employ::Employ(char *n, char *s, char i[]) {
  name = (char *)malloc(strlen(n)*sizeof(char));
  strcpy(name, n);
  surname = (char *)malloc(strlen(s)*sizeof(char));
  strcpy(surname, s);
  ID = (char *)malloc(strlen(i)*sizeof(char));
  strcpy(ID, i);
}
Employ::Employ(char *n, char *s, char i[], char *a,
               char *t, float sa ,char* p) {
  name = (char *)malloc(strlen(n)*sizeof(char));
  strcpy(name, n);
  surname = (char *)malloc(strlen(s)*sizeof(char));
  strcpy(surname, s);
  ID = (char *)malloc(strlen(i)*sizeof(char));
  strcpy(ID, i);
  address = (char *)malloc(strlen(a)*sizeof(char));
  strcpy(address, a);
  telephone = (char *)malloc(strlen(t)*sizeof(char));
  strcpy(telephone, t);
  position = (char *)malloc(strlen(p)*sizeof(char));
  strcpy(position, p);
  salary = sa;
}

void Employ::setAddress(char *a) {
  address = (char *)malloc(strlen(a)*sizeof(char));
  strcpy(address, a);
}
void Employ::setTelephone(char *t) {
  telephone = (char *)malloc(strlen(t)*sizeof(char));
  strcpy(telephone, t);
}
void Employ::setPosition(char *p) {
  position = (char *)malloc(strlen(p)*sizeof(char));
  strcpy(position, p);
}
void Employ::setCareer(int c) {
  career = c;
}
void Employ::setSupervisor(Employ* s) {
  supervisor = s;
}
void Employ::applySalaryIncrement(float s) {
  salary = salary + (s*salary/100);
}
void Employ::print() {
  std::cout << "Name: " << name << std::endl;
  std::cout << "Surname: " << surname << std::endl;
  std::cout << "ID: " << ID << std::endl;
  std::cout << "Address: " << address << std::endl;
  std::cout << "Telephone: " << telephone << std::endl;
  std::cout << "Salary: " << salary << std::endl;
  std::cout << "Career: " << career << std::endl;
  std::cout << "Position: " << position << std::endl;
}

// class Clerk
////////////////////////////////////////////////////////////////////////////////
class Clerk : protected Employ {
private:
  bool office;
  char* fax;
public:
  Clerk(char *name, char *surname, char id[], char *address, char *telephone,
        float salary, bool office, char* fax, float increment);
  void setOffice(bool office);
  void setFax(char* fax);
  void print();
};
Clerk::Clerk(char *name, char *surname, char id[], char *address, char *telephone,
        float salary, bool office, char* fax, float increment)
    : Employ(name, surname, id, address, telephone, salary, (char*) "Clerk") {
  setOffice(office);
  setFax(fax);
  applySalaryIncrement(increment);
}
void Clerk::setOffice(bool o) {
  office = o;
}
void Clerk::setFax(char *f) {
  fax = (char *)malloc(strlen(f)*sizeof(char));
  strcpy(fax, f);
}
void Clerk::print() {
  Employ::print();
  std::cout << "Office: " << office << std::endl;
  std::cout << "Fax: " << fax << std::endl;
}

// class Seller
////////////////////////////////////////////////////////////////////////////////
class Seller : protected Employ {
private:
  struct Vehicle car;
  char* mobil;
  char* sell_place;
  DumbClient* clients[MAX_CLIENTS];
  int n_clients;
  float comission;
public:
  Seller(char *name, char *surname, char id[], char *address, char *telephone,
         float salary, struct Vehicle car, char* mobil, float comission, float increment);
  void setMobil(char* mobil);
  int addClient(DumbClient *client);
  int removeClient(int id);
  void print();
};
Seller::Seller(char *name, char *surname, char id[], char *address,
               char *telephone, float salary, struct Vehicle c, char *mobil,
               float co, float increment)
    : Employ(name, surname, id, address, telephone, salary, (char *)"Seller") {
  car = c;
  setMobil(mobil);
  comission = co;
  applySalaryIncrement(increment);
  n_clients = 0;
}
void Seller::setMobil(char *m) {
  mobil = (char *)malloc(strlen(m)*sizeof(char));
  strcpy(mobil, m);
}
int Seller::addClient(DumbClient* client) {
  clients[n_clients] = client;
  n_clients++;

  // should be return error number if cliente exists..etc. TODO: to be implemented.
  return 0;
}
int Seller::removeClient(int id) {
  int i;
  int counter;
  DumbClient* tmpclients[MAX_CLIENTS];

  counter = 0;
  for (i = 0; i < n_clients; ++i) {
    if (clients[i]->getClientID() != id) {
      tmpclients[counter++] = clients[i];
    }
  }
  n_clients--;                  // TODO: bad place. first must be test that client has ben removed
  for (i = 0; i < n_clients; ++i)
    clients[i] = tmpclients[i];
  // should be return error number if cliente no exists..etc. TODO: to be implemented.
  return 0;
}
void Seller::print(){
  int i;
  Employ::print();
  std::cout << "Mobil: " << mobil << std::endl;
  std::cout << "Car: " << car.ID << ", " << car.brand << ", " << car.model << std::endl;
  std::cout << "Comission: " << comission << std::endl;
  std::cout << "N. of clients: "<< n_clients << std::endl;
  for (i = 0; i < n_clients; ++i) {
    std::cout << "   ";

    clients[i]->print();
  }


}
// class Area Boss!!!!! Be Careful!!
class AreaBoss : Employ {
private:
  bool office;
  Clerk* clerk;
  int sellers;
  Vehicle car;
public:
  AreaBoss(char *name, char *surname, char id[], char *address,
           char *telephone, float salary, struct Vehicle c, Clerk* clerk, struct Vehicle car,
           float increment);
  void setClerk(Clerk* clerk);
  void setCar(struct Vehicle car);
  void print();
  bool addSeller();
  bool removeSeller();
};

AreaBoss::AreaBoss(char *name, char *surname, char id[], char *address,
                   char *telephone, float salary, struct Vehicle c, Clerk* clerk, struct Vehicle car,
                   float increment)
  : Employ(name, surname, id, address, telephone, salary, (char *)"AreaBoss") {
  setClerk(clerk);
  setCar(car);
}
void AreaBoss::setClerk(Clerk *c) {
  clerk = c;
}
void AreaBoss::setCar(struct Vehicle c) {
  car = c;
}


// main
////////////////////////////////////////////////////////////////////////////////
int main(void)
{

  Vehicle car;
  car.ID = (char*) "1111Gz";
  car.brand = (char*) "Carro";
  car.model = (char*) "Abraiante";


  // Test Seller class (the AreBoss class is the same and the others are more simple)
  ////////////////////
  // 1. create some DumbClients instances to be client's seller list.
  DumbClient clientA(1, (char*) "Gintoki", (char*) "Sakata", (char*) "Yoruza");
  DumbClient clientB(2, (char*) "Doctor", (char*) "Who", (char*) "TimeLords(Space-Time Registered)");
  DumbClient clientC(3, (char*) "Sandman", (char*) "", (char*) "Onirical Enterprise");

  // 2. create a seller. (a good seller)
  Seller s((char*) "Perry", (char*)"Mason",(char*)"000000001", (char*)"Somewhere in Massachusetts..", (char*)"123456789", 5000, car, (char*) "6565656565", 13.2, 10);

  // 3. add clients to seller's list
  s.addClient(&clientA);;
  s.addClient(&clientB);
  s.addClient(&clientC);

  // 4. print seller's data
  s.print();

  std::cout << "================================================================================" << std::endl << std::endl;

  // 5. remove some clients
  s.removeClient(2);

  // 6. print again
  s.print();

  return 0;
}
