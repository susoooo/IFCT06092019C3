/* Un club deportivo desea realizar una aplicación para llevar
 la gestión de la información de la que dispone de las personas
 que juegan en alguno de los equipos del club. La información
 que se guarda de cada persona que juega es su nombre, apellidos, edad y altura.
 Se pide realizar un programa que almacene la información de forma permanente
 y que como mínimo permita lo siguiente:

1-Añadir datos de una persona
2-Listar los datos de todas las personas de las que se guarda información
3-Buscar por el nombre a una persona y que se listen sus datos
4-Encontrar a la persona más veterana que juega en el club y listar sus datos
5-Encontrar a la persona más joven que juega en el club y listar sus datos
6-Encontrar a la persona más alta que juega en el club y listar sus datos
7-Encontrar a la persona más baja que juega en el club y listar sus datos
8-Ver, uno a uno, los datos de todas las personas, hasta que se pulse una tecla determinada
9-Calcular la media de las edades de las personas que juegan en el club
10-Calcular la media de las alturas de las personas que juegan en el club
11-Eliminar datos de una persona determinada */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Creación del struct jugador
struct jugador
{
	char nombre[20];
	char apellidos[50];
	int edad;
	float altura;
};

// Función para caso 1
crearPersona()
{
// Declaración de una variable de tipo struct jugador
struct jugador mijugador;
// Declaración de un array de tipo struct jugador
// struct jugador club[24];
FILE * miFich;
size_t escrito;
int salir;
salir=1;
			do
            {
            miFich = fopen("C:\\Users\\Usuario\\Documents\\CF\\prueba\\datos.txt","a");
			printf("Introduce el nombre del nuevo jugador\n");
			fgets(&mijugador.nombre, 20, stdin);
			printf("Introduce los apellidos\n");
			fgets(&mijugador.apellidos,50, stdin);
		    printf("Introduce su edad\n");
			scanf("%d", &mijugador.edad);
			printf("Introduce su altura\n");
			scanf("%f", &mijugador.altura);
			escrito = fwrite(&mijugador,sizeof(struct jugador),1,miFich);
			printf("Nombre:%sApellidos:%sEdad:%d\nAltura:%f\n", mijugador.nombre, mijugador.apellidos, mijugador.edad, mijugador.altura);
            fclose(miFich);
            printf("Pulsa un número para crear otro jugador o 'cero' para salir");
            scanf("%d", &salir);
            getchar();
            }while(salir!=0);
}

// Función para caso 2
listarPersonas()
{
// Declaración de una variable de tipo struct jugador
struct jugador mijugador;
// Declaración de un array de tipo struct jugador
// struct jugador club[24];
FILE * miFich;
size_t leidos;

			miFich = fopen("C:\\Users\\Usuario\\Documents\\CF\\prueba\\datos.txt","r");
			while(!feof(miFich))
			{
            leidos = fread(&mijugador,sizeof(struct jugador),1,miFich);
			if(leidos==1)
			{
            printf("Nombre:%sApellidos:%sEdad:%d\nAltura:%f\n", mijugador.nombre, mijugador.apellidos, mijugador.edad, mijugador.altura);
            }
			}
			fclose(miFich);
}
// Función para caso 3
buscarPersona()
{
    // Declaración de una variable de tipo struct jugador
    struct jugador mijugador;
    // Declaración de un array de tipo struct jugador
    // struct jugador club[24];
    FILE * miFich;
    size_t leidos;
    char buscarJugador[20];

		    miFich = fopen("C:\\Users\\Usuario\\Documents\\CF\\prueba\\datos.txt","r");
		    printf("Introduce el nombre del jugador que quieres ver\n");
            fgets(buscarJugador,20,stdin);

            do
            {
            leidos = fread(&mijugador,sizeof(struct jugador),1,miFich);
            if(strcmp(buscarJugador, mijugador.nombre)==0)
            {
            printf("Nombre:%sApellidos:%sEdad:%d\nAltura:%f\n",
            mijugador.nombre, mijugador.apellidos, mijugador.edad, mijugador.altura);
			}
            }while(strcmp(buscarJugador,mijugador.nombre)!=0 || feof(miFich));
			fclose(miFich);
}

// Función para caso 9: Calcular la media de las edades de las personas que juegan en el club
mediaEdades()
{
 // Declaración de una variable de tipo struct jugador
    struct jugador mijugador;
    // Declaración de un array de tipo struct jugador
    // struct jugador club[24];
    FILE * miFich;
    size_t leidos;
    int buscarEdades[100];



}
main()
{
int opcion;

    do
    {
        printf("Escoge una de las siguientes opciones:\n");
        printf("Pulsa 1 Añadir datos de una persona\n");
        printf("Pulsa 2 Listar los datos de todas las personas de las que se guarda información\n");
        printf("Pulsa 3 Buscar por el nombre a una persona y que se listen sus datos\n");
        printf("Pulsa 4 Encontrar a la persona más veterana que juega en el club y listar sus datos\n");
        printf("Pulsa 5 Encontrar a la persna más joven que juega en el club y listar sus datos\n");
        printf("Pulsa 6 Encontrar a la persona más alta que juega en el club y listar sus datos\n");
        printf("Pulsa 7 Encontrar a la persona más baja que juega en el club y listar sus datos\n");
        printf("Pulsa 8 Ver, uno a uno, los datos de todas las personas, hasta que se pulse una tecla determinada\n");
        printf("Pulsa 9 Calcular la media de las edades de las personas que juegan en el club\n");
        printf("Pulsa 10 Calcular la media de las alturas de las personas que juegan en el club\n");
        printf("Pulsa 11 Eliminar datos de una persona determinada\n");
        printf("Pulsa 12 Eliminar el archivo");
        printf("Pulsa 0 para salir\n");
        scanf("%d", &opcion);
        getchar();
        switch(opcion)
        {
            case 1:
                crearPersona();
            break;
            case 2:
                listarPersonas();
            break;
            case 3:
                buscarPersona();
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
            case 8:
            break;
            case 9:
                mediaEdades();
            break;
            case 10:
            break;
            case 11:
            break;
            case 12:
            break;
            case 0:
            break;
        }
    }while(opcion!=0);
}
