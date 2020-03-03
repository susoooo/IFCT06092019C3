#ifndef DNI_H
#define DNI_H

#include <iostream>
#include <string>

using namespace std;

class Dni
{
	int number;
	char letter;

	public:
		Dni();
		bool verifDNI();
		string getDNI();
		void setDNI(int num,char cnum);
};

bool Dni::verifDNI()
{
	string alphab = "TRWAGMYFPDXBNJZSQVHLCKE";
	return(alphab[number%23]==letter);
}

Dni::Dni()
{
	setDNI(0, 'A');
}

void Dni::setDNI(int num, char cnum)
{
	number = num;
	letter = cnum;
}

string Dni::getDNI()
{
	return(to_string(number) + letter);
}


#endif
