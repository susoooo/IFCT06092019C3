/*
2-Crea una clase asignatura. Dicha clase tendrá como propiedades, el nombre, y un código de identificación. Tambien tendrá un metodo para calcular la nota media, que devolverá siempre un 10.
Crea una clase ciencias, heredera de la clase asignatura, que tendrá como mucho 5 notas. Crea un método de calculo de la nota media que la calcule sopesando igualmente las 5 notas.
Crea una clase letras, heredada de la clase asignatura, que tendrá como mucho 10 notas. Crea un método de cálculo de la nota media que la calcule de forma que el resultado será 50% la media de las notas anteriores a la última nota, y 50% la última nota.
Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota media que devuelva la nota que figura en dicha propiedad.
Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. Calcula la nota media teniendo en cuenta que el 70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha nota debe ser la media de las notas de prácticas.
Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, una de letras, y una de música y que imprima las notas medias.
*/

#include <iostream>
#include "lib/letras.h"
#include "lib/musica.h"
#include "lib/tecnologia.h"

using namespace std;

int main(void)
{
	int n;
	float notastore;
	class Ciencias cienc1;
	class Letras letras1;
	class Musica music1;
	class Tecnologia tecno1;
	
	cout << "Notas de Ciencias." << endl;
	for(n=0;n<NOTASCIENCIAS;n++)
	{
		cout << "Nota " << n << ": ";
		cin >> notastore;
		cienc1.setNota(n,notastore);
	}
	
	cout << "Notas de Letras." << endl;
	for(n=0;n<NOTASLETRAS;n++)
	{
		cout << "Nota " << n << ": ";
		cin >> notastore;
		letras1.setNota(n,notastore);
	}
	
	cout << "Notas de Música." << endl;
	for(n=0;n<NOTASMUSICA;n++)
	{
		cout << "Nota " << n << ": ";
		cin >> notastore;
		music1.setNota(n,notastore);
	}
	
	cout << "Notas de Tecnología." << endl;
	for(n=0;n<NOTASCIENCIAS;n++)
	{
		cout << "Nota " << n << ": ";
		cin >> notastore;
		tecno1.setNota(n,notastore,false);
	}
	
	cout << "Notas de prácticas." << endl;
	for(n=0;n<NOTASPRACTICAS;n++)
	{
		cout << "Nota " << n << ": ";
		cin >> notastore;
		tecno1.setNota(n,notastore,true);
	}
	
	cout << "Nota media Ciencas: " << cienc1.getNotamedia() << endl;
	cout << "Nota media Letras: " << letras1.getNotamedia() << endl;
	cout << "Nota media Música: " << music1.getNotamedia() << endl;
	cout << "Nota media Tecnología: " << tecno1.getNotamedia() << endl;
	return(0);
}
