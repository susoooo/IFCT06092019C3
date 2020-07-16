#include <iostream>
using namespace std;
class Numerosc
{
	float numero1;
	float numero2;
	float numero3;
	
	public:
	bool consecutivos();
	void introduccion();
};

bool Numerosc::consecutivos()
{
	if((((numero1-1)==(numero2)) && ((numero2)==(numero3+1))) || (((numero1+1)==(numero2)) && ((numero2)==(numero3-1))))
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

void Numerosc::introduccion()
{
	cout<<"Introduce un tres numeros consecutivos";
	cin >> numero1;
	cin >> numero2;
	cin >> numero3;
}

int main()
{
	Numerosc miObjeto;
	bool result;
	do 
	{
		miObjeto.introduccion();	
		result = miObjeto.consecutivos();
		cout << result;
	}
	while(result==0);
	cout << "gracias";
}
	