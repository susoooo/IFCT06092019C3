/*
1-Toma la clase persona que has definido en el ejercicio 1 del boletín C++Objetos_03a.txt. A partir de ella crea una clase asalariado que guarde información sobre el sueldo que cobra la persona neto al mes y la retención que se le aplica en la nómina. Crea al menos un constructor y un los correspondientes métodos de get y set.
* 
2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. En la clase obrero, guarda el nombre del cargo que desempeña. Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los constructores y metodos get y set que creas necesarios.
* 
3-Crea un programa que, utilizando las clases anteriores, cree un objeto para almacenar datos sobre una persona que no es asalariada, un asalariado que no es médico ni obrero, sobre dos asalariados y sobre un médico. Todos los objetos creados deberán contener datos en sus propiedades. Haz que el programa muestre los datos de los distintos objetos creados por pantalla.
*/

#include <iostream>
#include <string>
//#include "lib/dni.h"
//#include "lib/persona.h"
//#include "lib/asalariado.h"
#include "lib/obrero.h"
#include "lib/medico.h"

using namespace std;

int main(void)
{
	class Persona tipo(83434666,'T',"Ajantis","Barada","Nikto",11,11,1985,"Sofia","Bulgaria");
	class Asalariado trabajador(13000.0f,22.0f,53333666,'I',"Klaatu","Barada","Nikto",11,11,1991,"Sofia","Bulgaria");
	class Obrero obrero1("peon",13000.0f,22.0f,13333626,'R',"Glot","Barada","Nikto",11,11,1967,"Sofia","Bulgaria");
	class Obrero obrero2("capataz",16000.0f,24.0f,23343656,'J',"Minsc","Barada","Nikto",11,11,1979,"Sofia","Bulgaria");
	class Medico medico1(13,33000.0f,30.0f,53223666,'X',"Imoen","Barada","Nikto",11,1,1959,"Sofia","Bulgaria");
	tipo.print();
	trabajador.print();
	obrero1.print();
	obrero2.print();
	medico1.print();
	return(0);
}
