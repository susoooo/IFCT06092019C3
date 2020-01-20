/*
Puedes encontrar una especifiación del formato de archivos de imagenes bitmap en :

https://es.wikipedia.org/wiki/Windows_bitmap

Descarga un archivo bitmap de internet y crea un programa que acceda a dicho archivo y que muestre por pantalla:
-Si está comprimido o no
-El ancho en pixels
-El alto en pixels
-La resolución horizontal
-La resolución vertical

0, 1 
Tipo de fichero "BM" 
2, 3, 4, 5 
Tamaño del archivo 
6, 7 
Reservado 
8, 9 
Reservado 
10, 11, 12, 13 
Inicio de los datos de la imagen 
14, 15, 16, 17 
Tamaño de la cabecera del bitmap 
18, 19, 20, 21 
Anchura (píxels) 
22, 23, 24, 25 
Altura (píxels) 
26, 27 
Número de planos 
28, 29 
Tamaño de cada punto 
30, 31, 32, 33 
Compresión (0=no comprimido) 
34, 35, 36, 37 
Tamaño de la imagen 
38, 39, 40, 41 
Resolución horizontal 
42, 43, 44, 45 
Resolución vertical 
46, 47, 48, 49 
Tamaño de la tabla de color 
50, 51, 52, 53 
Contador de colores importantes 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <locale.h>
#include <windows.h>

#define BMPFILE "bmp.bmp"
#define DEBUG 0

/*
struct header
{
	char fileType[2];	// 0,1
	int * size;			// 2,3,4,5
	short res1;			// 6,7
	short res2;			// 8,9
	int startImage;		// 10,11,12,13
	int sizeHeader;		// 14,15,16,17
	int width;			// 18,19,20,21
	int high;			// 22,23,24,25
	short plainN;		// 26,27
	short pointSize;	// 28,29
	int zip;			// 30,31,32,33 (0=No)
	int sizeImage;		// 34,35,36,37
	int horizonRes;		// 38,39,40,41
	int verticarRes;	// 42,43,44,45
	int colorTbleSize;	// 46,47,48,49
	int advColorCount;	// 50,51,52,53
};*/

void configCodIO(void)
{
    //setlocale(LC_ALL, "spanish");
    SetConsoleCP(1252);
    //SetConsoleOutputCP(1252);	
}

int main(void)
{
	FILE * bmpFile;
	size_t reader;
	char * memo;
	int contador;
	char bmpheader[54];
	int * nPtr;
	short * sPtr;
	configCodIO();
	
	
	struct header hdr;
	
	bmpFile = fopen(BMPFILE,"r");
	if(bmpFile!=0)
	{
		memo=malloc(sizeof(char));
		if(memo!=NULL)
		{
			for(contador=0;contador<54;contador++)
			{
				reader = fread(memo,sizeof(char),1,bmpFile);
				if(reader!=1)
				{
					perror("Error lectura");
				}
				else
				{
					bmpheader[contador]=*memo;
				}
			}
			free(memo);
		}
		fclose(bmpFile);
		
		//printf("Tipo del archivo: %c%c\n",bmpheader[0],bmpheader[1]);
		nPtr = (int *)&bmpheader[30];
		printf("Compresión: %d\n",*nPtr);
		nPtr = (int *)&bmpheader[2];
		printf("Tamaño del archivo: %d\n",*nPtr);
		nPtr = (int *)&bmpheader[18];
		printf("Ancho (pxl) : %d\n",*nPtr);
		nPtr = (int *)&bmpheader[22];
		printf("Alto (pxl) : %d\n",*nPtr);
		nPtr = (int *)&bmpheader[38];
		printf("Horizontal resolution (pxl) : %d\n",*nPtr);
		nPtr = (int *)&bmpheader[42];
		printf("Vertical resolution (pxl) : %d\n",*nPtr);
	}
	
}


