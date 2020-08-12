#include <stdlib.h>
#include <stdio.h>

//estructura de la cabecera de .bmp
struct bmpheader {
	unsigned short int magicnum, resv1, resv2, nplan, dotsize;
	unsigned int fsize, start, headsize, width, height, comp, isize, hres, vres, ctabsize, impclrcnt;
}Bmpheaderdump;

int main(int argc, char const *argv[])
{
	//variables de fichero
	FILE		*bmpimage;
	size_t	read;
	
	//de entrada de nombre de fichero
	char		filenamein[64];
	int			filenamefail = 0;
	
	//de formato de printf
	char		labels[16][40] = {
		"numero magico",
		"reservado1",
		"reservado2",
		"numero de planos",
		"tamano de puntos",
		"tamano de archivo",
		"inicio datos imagen",
		"tamano cabecera",
		"anchura",
		"altura",
		"compresion",
		"tamano imagen",
		"resolucion horizontal",
		"resolucion vertical",
		"tamano tabla color",
		"contador colores importantes",
	};
	
	//leer nombre de fichero
	do{
		printf("archivo a leer: ");
		gets(filenamein);
		bmpimage = fopen(filenamein, "rb");
		
		if(bmpimage == NULL){
			perror("archivo incorrecto");
			filenamefail = 1;
		} else {
			filenamefail = 0;
		}
	}while(filenamefail);
	
	//leer los bytes de cabecera en struct
	fread(&Bmpheaderdump.magicnum,	sizeof(unsigned short int), 1, bmpimage);
	fread(&Bmpheaderdump.fsize,			sizeof(unsigned int), 1, bmpimage);
	fread(&Bmpheaderdump.resv1,			sizeof(unsigned short int), 2, bmpimage);
	fread(&Bmpheaderdump.start,			sizeof(unsigned int), 4, bmpimage);
	fread(&Bmpheaderdump.nplan,			sizeof(unsigned short int), 2, bmpimage);
	fread(&Bmpheaderdump.comp,			sizeof(unsigned int), 6, bmpimage);
	
	//mostrar datos en pantalla
	for(int i = 0; i < 5; ++i){
		printf("%28s = ", labels[i]);
		printf("%u\n", *(&Bmpheaderdump.magicnum + i));
	}
	
	for(int i = 0; i < 11; ++i){
		printf("%28s = ", labels[i + 5]);
		printf("%d\n", *(&Bmpheaderdump.fsize + i));
	}
	
	//fclose
	fclose(bmpimage);
	
	return 0;
}