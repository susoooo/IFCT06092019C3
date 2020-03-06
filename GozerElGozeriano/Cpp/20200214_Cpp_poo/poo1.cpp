/*
 * 1-Realizar un programa que pida que se tres números consecutivos (3, 4 y 5; 9, 10 y 11, etc.). Cuando se introducen tres números consecutivos dice “gracias” y termina. Mientras no se introduzcan tres números consecutivos el programa sigue pidiendo números indefinidamente.
* */


#include <iostream>
#define TOTALNUMBERS 3

using namespace std;

class numChecker
{
	int nums[TOTALNUMBERS];

	void setInOrder(int position);

	public: 
		void loadNumbers();
		bool check();
};

void numChecker::setInOrder(int position)
{
	int contador;
	int aux;
	aux=0;

	for(contador=position;contador<TOTALNUMBERS;contador++)
		if(nums[contador]<nums[position])
		{
			aux=nums[contador];
			nums[contador] = nums[position];
			nums[position] = aux;
		}
	if(position<TOTALNUMBERS-1) setInOrder(position+1);
}
	
void numChecker::loadNumbers()
{
	int contador;
	for(contador=0;contador<TOTALNUMBERS;contador++)
	{
		cout << "Introduce nº " << contador+1 << ": " ;
		cin >> nums[contador];
	}
	setInOrder(0);
}
	
bool numChecker::check(void)
{
	int contador;
	for(contador=0;contador<TOTALNUMBERS-1;contador++)
		if((nums[contador]+1)!=nums[contador+1]) 
			return(false);
	return(true);
}

int main()
{
	class numChecker numcheck;
	
	do
	{
		numcheck.loadNumbers();
	}while(!numcheck.check());
	cout << "Gracias" << endl;
}
