#include <iostream>
using namespace std;


/*
void print(int a, int& b) {
	cout << a << endl;
	printf("%d\n", b);
	a = 3;
	b = 4;
}


int main() {
	int a, b;
	a = 1;
	b = 2;
	
	print(a, b);
	cout << a << endl;
	cout << b << endl;
	
	return 0;
}
*/

/*
class Myclass {
	int a, *b;
	
	public:	
	Myclass(int na, int* nb) {
		cout << "int first" << endl;
		a = na;
		b = nb;
	}
	Myclass(int* nb, int na) {
		cout << "int* first" << endl;
		a = na;
		b = nb;
	}
};


int main() {
	int a, *b;
	Myclass *myinst;
	
	myinst = new Myclass(b, a);
	
	return 0;
}
*/