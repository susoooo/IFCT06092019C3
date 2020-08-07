#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_FILE "jugadores.txt"
#define READERROR_EXCEPT if(read != 1 && !feof(dataf_jugadores)){perror("");}

struct persona{
	short int activo;
	char	nombre[15];
	char	apellidos[30];
	int		edad;
	float altura;
}Jugador;

void ImprimirDatosDe(int index);
int PersonaMasVeterana();
size_t EliminarDatos();
void ExplorarDatos();
void BuscarPorNombre();
void ListarDatos();
void ImprimirDatos();
size_t AnadirDatos();

int main(int argc, char const *argv[]){
	size_t	read, written;
	
	int	opcion, end_menu_loop;
	
	opcion = 0;
	end_menu_loop = 0;
	
	do{
		printf("opcion: ");
		scanf("%d", &opcion);
		getchar();
		
		switch(opcion) {
			case 0:
			end_menu_loop = 1;
			break;
			
			case 1:
			written = AnadirDatos();
			break;
			
			case 2:
			ListarDatos();
			break;
			
			case 3:
			BuscarPorNombre();
			break;
			
			case 4:
			PersonaMasVeterana();
			break;
			
			case 8:
			ExplorarDatos();
			break;
			
			case 11:
			written = EliminarDatos();
			break;
			
			default:
			printf("Opcion no existe.\n");
		}
	}while(!end_menu_loop);
	
	return 0;
}

void ImprimirDatosDe(int index){
	FILE			*dataf_jugadores = fopen(DATA_FILE, "+");
	size_t		read;
	
	
	fseek(dataf_jugadores, (sizeof(Jugador) * index), SEEK_SET);
	read = fread(&Jugador, sizeof(Jugador), 1, dataf_jugadores);
	ImprimirDatos();
	
	fclose(dataf_jugadores);
}

int PersonaMasVeterana(){
	FILE		*dataf_jugadores = fopen(DATA_FILE, "r");
	size_t	read;
	
	int			edadmasgrande, indexactual, indexveteran;
	
	indexactual = 0;
	edadmasgrande = 0;
	
	printf("El jugador mas veterano es:\n");
	
	while(!feof(dataf_jugadores)){
		read = fread(&Jugador, sizeof(Jugador), 1, dataf_jugadores);
		
		if(Jugador.edad > edadmasgrande){
			indexveteran = indexactual;
		}
		
		++indexactual;
	}
	
	ImprimirDatosDe(indexveteran);
	
	return indexveteran;
}

size_t EliminarDatos(){
	FILE			*dataf_jugadores = fopen(DATA_FILE, "r+");
	size_t		written;
	
	int				delindex;
	short int	falseflag;
	
	falseflag = 0;
	
	//ask for wanted register index
	printf("registro a eliminar (-1 para abortar): ");
	scanf("%d", &delindex);
	
	//abort option
	if(delindex == -1){
	} else {
		//seek to wanted register and overwrite active flag
		fseek(dataf_jugadores, (sizeof(Jugador) * delindex), SEEK_SET);
		written = fwrite(&falseflag, sizeof(short int), 1, dataf_jugadores); 
	}
	
	fclose(dataf_jugadores);
	
	return written;
}

//BUGGY
void ExplorarDatos(){
	FILE		*dataf_jugadores = fopen(DATA_FILE, "r");
	size_t	read;
	
	int direccion, salir;
	
	salir = 0;
	
	printf("explorador de datos\n[H] atras\t[L] adelante\t[0] salir\n");
	
	while(!salir){
		direccion = getchar();
		
		if(direccion == 'h' || direccion == 'H'){
			fseek(dataf_jugadores, -(sizeof(Jugador) * 2), SEEK_CUR);
			read = fread(&Jugador, sizeof(Jugador), 1, dataf_jugadores);
			ImprimirDatos();
			
		} else if(direccion == 'l'|| direccion == 'L'){
			read = fread(&Jugador, sizeof(Jugador), 1, dataf_jugadores);
			ImprimirDatos();
			
		} else if(direccion == '0'){
			salir = 1;
		}
	}
	
	fclose(dataf_jugadores);
}

void BuscarPorNombre(){
	FILE		*dataf_jugadores = fopen(DATA_FILE, "r");
	size_t	read;
	
	char		busqueda[15];
	int			cadenadiferente, indice;
	
	indice = 0;
	
	printf("nombre a buscar: ");
	gets(busqueda);
	
	while(!feof(dataf_jugadores)){
		read = fread(&Jugador, sizeof(Jugador), 1, dataf_jugadores);
		
		READERROR_EXCEPT
		else{
			cadenadiferente = strcmp(Jugador.nombre, busqueda);
			
			if(!cadenadiferente && !feof(dataf_jugadores) && Jugador.activo != 0){
				printf("%d. ", indice);
				ImprimirDatos();
				++indice;
			}
		}
	}
	
	fclose(dataf_jugadores);
}

void ListarDatos(){
	FILE		*dataf_jugadores = fopen(DATA_FILE, "r");
	size_t	read;
	
	int			indice;
	
	indice = 0;
	
	while(!feof(dataf_jugadores)){
		read = fread(&Jugador, sizeof(Jugador), 1, dataf_jugadores);
		
		READERROR_EXCEPT
		else if(!feof(dataf_jugadores) && Jugador.activo != 0){
			printf("%d. ", indice);
			ImprimirDatos();
			++indice;
		}
	}
	
	fclose(dataf_jugadores);
}

void ImprimirDatos(){
	printf("nombre: %s; ", Jugador.nombre);
	printf("apellido: %s; ", Jugador.apellidos);
	printf("edad: %d; ", Jugador.edad);
	printf("altura: %.2f;", Jugador.altura);
	printf("\n");
}

size_t AnadirDatos(){
	FILE		*dataf_jugadores = fopen(DATA_FILE, "a");
	size_t	written;
	
	Jugador.activo = 1;
	
	printf("nombre: ");
	gets(Jugador.nombre);
	
	printf("apellidos: ");
	gets(Jugador.apellidos);
	
	printf("edad: ");
	scanf("%d", &Jugador.edad);
	
	printf("altura: ");
	scanf("%f", &Jugador.altura);
	
	written = fwrite(&Jugador, sizeof(Jugador), 1, dataf_jugadores);
	
	fclose(dataf_jugadores);
	
	return written;
}