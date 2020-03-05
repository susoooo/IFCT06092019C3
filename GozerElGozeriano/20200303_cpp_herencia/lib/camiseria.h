/*
8-Ademas, últimamente, dentro de los locales que gestionan dedicados a la venta de ropa, se están especializando en camiserías, Mercerías y sombrererías. Sobre las primeras desean almacenar información sobre si disponen de espacio para elaboración de prendas a medida. Sobre las segundas, desean guardar datos sobre el número de mostradores de género que dispone el local, y sobre las sombrererías desean poder registrar información sobre cuantos expositores sombrereros tiene el local instalados.
*/

#ifndef CAMISERIA_H
#define CAMISERIA_H

#include <iostream>
#include <string>
#include "ropa.h"

using namespace std;

class Camiseria : public Ropa
{
	protected:
	bool PrendasMedida;
	
	public:
	Camiseria(string direccion, float metros2, float preciometro2, float metrosfachada, bool probadores, bool aseos, bool HaveSiteToSizedCloths)
	: Ropa(direccion,metros2,preciometro2,metrosfachada,probadores,aseos)
	{
		this->PrendasMedida = HaveSiteToSizedCloths;
	}
	void print(void);
};

void Camiseria::print(void)
{
	Ropa::print();
	cout << "Sitio para hacer ropas a medida: ";
	printcheck(this->PrendasMedida);
}

#endif
