// 4-Crea una clase que represente una pizza de la cadena de pizzas telesuperpizzaqueloflipas. Dicha clase debe guardar información al menos sobre la base elegida, los ingredientes seleccionados, y el precio de la misma.
//Crea constructores que permitan crear la pizza sin especificar la base (en cuyo caso se escogerá la base "normal").
//Crea otro constructor que permita crear una pizza sin especificarle el precio. En dicho caso, deberá calcular automáticamente el precio (en base p.e. del precio de la base escogida y del número de ingredientes solicitados).
//Crea un constructor que permita crear una pizza especificando solo los ingredientes a utilizar.
// 5-Crea un destructor de la pizza que imprima un mensaje con el precio de la pizza y diciendo que se va a destruir. Crea otro destructor que guarde el precio de la pizza en un archivo de texto antes de destruir el objeto.



#include <iostream>
#include <fstream>
#include <string.h>

#define MAX_INGREDIENTS 20
#define MAX_BASE 3

using namespace std;

class Pizza{
private:
  short base;
  short ingredients[MAX_INGREDIENTS];
  short current_ingredients;
  float price;

  string filename = "selledPizza.txt";

  const char* baseTable[MAX_BASE] = { "Normal", "Medium", "Extra size" };
  const float basePriceTable[MAX_BASE] = { 3.0, 5.0, 8.0 };
  const char* ingredientsNameTable[MAX_INGREDIENTS] = { "Cheese", "eXtra Cheese","Tomato", "Pepperoni", "Chiken", "Anchovies", "Onion", "Pineapple" };
  const float ingredientsPriceTable[MAX_INGREDIENTS] = { 1.10, 1.90, 0.90, 1.50, 2.21, 2.30, 0.60, 1.86 };

  void initIngredients();

public:
  Pizza(short base, short ingredients[], float price);
  Pizza(short base, short ingredients[]);
  Pizza(short ingredients[], float price);
  Pizza(short ingredients[]);
  ~Pizza();

  float calculatePrice();
  string ingredientsNames();
};

Pizza::Pizza(short base, short ingredients[], float price) {
  this->base = base;
  this->initIngredients();
  memcpy(this->ingredients, ingredients, MAX_INGREDIENTS);
  this->price = price;
}
Pizza::Pizza(short base, short ingredients[]){
  this->base = base;
  this->initIngredients();
  memcpy(this->ingredients, ingredients, MAX_INGREDIENTS);
  this->price = this->calculatePrice();
}

Pizza::Pizza(short ingredients[], float price) {
  this->base = 0;
  this->initIngredients();
  memcpy(this->ingredients, ingredients, MAX_INGREDIENTS);
  this->price = price;
}
Pizza::Pizza(short ingredients[]) {
  this->base = 0;
  this->initIngredients();
  memcpy(this->ingredients, ingredients, MAX_INGREDIENTS);
  this->price = this->calculatePrice();
}
Pizza::~Pizza(){
  // print price message
  cout << "Pizza price: " << this->price << endl;

  // append pizza to file
  ofstream file(this->filename, ios_base::app);
  if(file.is_open()) {
    file << "Base.......: " << this->baseTable[this->base] << "." << endl;
    file << "Ingredients: " << ingredientsNames() << "." << endl;
    file << "Price......: " << this->calculatePrice() << endl;
    file << "--------------------------------------------------" << endl;
    file.close();
  } else {
    cout << "Unable to open file '" << this->filename << "'" << endl;
  }

  cout << "Object type Pizza is going to be destroyed!";
}

void Pizza::initIngredients() {
  int counter;
  for (counter=0; counter < MAX_INGREDIENTS; counter++) {
    this->ingredients[counter] = -1;
  }
}

string Pizza::ingredientsNames(){
  int counter;
  int limit;
  string names;

  // limit = sizeof(this->ingredients)/sizeof(this->ingredients[0]);
  for (counter = 0; counter < MAX_INGREDIENTS; ++counter) {
    if (this->ingredients[counter] != -1) {
      if (counter != (limit-1) && counter!=0)
        names += ", ";
      names += this->ingredientsNameTable[this->ingredients[counter]];
    }
  }
  return names;
}

float Pizza::calculatePrice() {
  int counter;
  float total;

  // ingredients
  total=0;
  for (counter = 0; counter < MAX_INGREDIENTS; ++counter) {
    if (this->ingredients[counter] != -1) 
      total += this->ingredientsPriceTable[this->ingredients[counter]];
  }

  // and base
  total += basePriceTable[this->base];

  return total;
}


int main(void)
{

  int counter;
  short ingredients[MAX_INGREDIENTS] = {2 ,1, 3 ,7};
  for (counter=4; counter < MAX_INGREDIENTS; counter++) {
    ingredients[counter] = -1;
  }

  Pizza p1(ingredients);


  return 0;
}
