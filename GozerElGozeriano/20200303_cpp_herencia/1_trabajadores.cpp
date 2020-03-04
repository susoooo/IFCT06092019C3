/*
1-Toma la clase persona que has definido en el ejercicio 1 del boletín C++Objetos_03a.txt. A partir de ella crea una clase asalariado que guarde información sobre el sueldo que cobra la persona neto al mes y la retención que se le aplica en la nómina. Crea al menos un constructor y un los correspondientes métodos de get y set.
* 
2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. En la clase obrero, guarda el nombre del cargo que desempeña. Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los constructores y metodos get y set que creas necesarios.
*/

#include <iostream>
#include <string>
//#include "lib/dni.h"
//#include "lib/persona.h"
//#include "lib/asalariado.h"
#include "lib/obrero.h"

using namespace std;

int main(void)
{
	class Asalariado trabajador(13000.0f,22.0f,53333666,'J',"Klaatu","Barada","Nikto",11,11,1979,"Sofia","Bulgaria");
	class Obrero obrero1("peon",13000.0f,22.0f,53333666,'J',"Klaatu","Barada","Nikto",11,11,1979,"Sofia","Bulgaria");
	trabajador.print();
	obrero1.print();
	return(0);
}
