#include <iostream>
using namespace std;

int
main(void)
{
	int x, y, z;
	
	do {
	cout << "Write 3 numbers lol" << endl;
	cin >> x >> y >> z;	
	} while (x > y && y > z);
	
	cout << "Thx" << endl;
	
	return 0;
}