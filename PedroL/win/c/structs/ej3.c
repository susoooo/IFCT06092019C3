#include <stdio.h>
#include <string.h>

#define NUM_JUGADORES 10
#define TAMANO_NOMBRE 20

struct persona {
	char nombre[TAMANO_NOMBRE];
	int edad;
	float altura;
};

void buscarPersonaEnArray(struct persona *pers_ptr);

int main(int argc, char const *argv[]) {
	int op, cerrar, success;
	struct persona jugador[NUM_JUGADORES]; 

	op = 0;
	cerrar = 0;
	success = 0;

	for(int i = 0; i < NUM_JUGADORES; i++) {
		printf("jugador %d\n", i);
		printf("nombre: ");
			getchar();
			gets(jugador[i].nombre);
		printf("edad: ");
			scanf("%d", &jugador[i].edad);
		printf("altura: ");
			scanf("%f", &jugador[i].altura);
	}

	do {
		printf("1. Listar los nombres de los jugadores\n2. Listar las alturas de los jugadores\n3. Listar las edades de los jugadores\n6. Cerrar");
		scanf("%d" ,&op);

		switch (op) {
			case 1:
			for(int i = 0; i < NUM_JUGADORES; i++)
				printf("%s\n", jugador[i].nombre);
			break;

			case 2:
			for(int i = 0; i < NUM_JUGADORES; i++)
				printf("%f\n", jugador[i].altura);
			break;

			case 3:
			for(int i = 0; i < NUM_JUGADORES; i++)
				printf("%d\n", jugador[i].edad);
			break;

			case 4:
			buscarPersonaEnArray(jugador);
			break;

			case 6:
			cerrar = 1;
			break;

			default:
			printf("Seleccion incorrecta\n"); 
		}
	} while(cerrar != 1);

	return 0;
}

void buscarPersona(struct persona *pers_ptr) {
	char search_query[TAMANO_NOMBRE];

	printf("Buscar nombre: ");
		gets(search_query);

	for(int i = 0; i < NUM_JUGADORES; i++) {
		if(strcmp(pers_ptr[i].nombre, search_query) == 0) {
			printf("altura: %f", pers_ptr[i].altura);
			printf("altura: %d", pers_ptr[i].edad);
			success++;
		}
	}

	if(success != 0)
		printf("No existe jugador\n");
}