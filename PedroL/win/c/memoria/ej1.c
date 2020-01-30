#include <stdio.h>
#include <stdlib.h>

#define TAM_CADENA 50

int main(int argc, char const *argv[])
{
	int cant_cadena;
	char cadena[TAM_CADENA];
	char * cadena_ptr;

	printf("cuantas cadenas desea introducir?\n");
	scanf("%d", &cant_cadena);

	cadena_ptr = (char*)malloc(TAM_CADENA * sizeof(char) * cant_cadena);

	//strcpy

	printf("cadenas escritas:\n");

//imprime cada caracter de cada cadena
	for(int i_cadena = 0; i_cadena < cant_cadena; ++i_cadena) {
		int posicion = (i_cadena * TAM_CADENA);

		printf("%d: ", posicion);

		for(int i_cara = 0; i_cara < 3000; ++i_cara) {
			//printf("%d ", posicion);
			printf("%c", cadena_ptr[posicion]);

			++posicion;
		}

		printf("\n");
	}

	free(cadena_ptr);
	return 0;
}