#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class Something {
protected:
int id;
bool flag;
float num1, num2;
std::string name;

enum Labels {
	LABEL0,
	LABEL1,
};

public:
Something() {}
Something(int nuId, bool nuFlag, float nuNum1, float nuNum2, std::string& nuName) : id(nuId), flag(nuFlag), num1(nuNum1), num2(nuNum2), name(nuName) {}

void set_name(std::string nuName) { name = nuName; }
};


class Else : public Something {
char fooBar;

public:
Else() {}
Else(int nuId, bool nuFlag, float nuNum1, float nuNum2, std::string& nuName, char nuFooBar) : fooBar(nuFooBar), Something(nuId, nuFlag, nuNum1, nuNum2, nuName) {}
};


int main(int argc, char ** argv) {
	
}