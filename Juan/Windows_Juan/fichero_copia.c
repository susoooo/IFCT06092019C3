/* 4. Crear un programa capaz de copiar un fichero (word por ejemplo, o cualquier otro tipo)
en otro. El fichero creado se llamará “copia_de” y el nombre del archivo a copiar. El
fichero a copiar lo puede elegir el usuario, y si no existe debe tener la opción de escribir
otro nombre hasta que escriba el nombre de un fichero que exista.*/

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

int main()
{
// Declaramos: 2 arrays de char, un puntero de char, dos punteros de FILE,
// 2 manejadores de fichero y 2 tipos size_t.
 char nombre[35];
 char copia[35];
 char * pMemo;
 FILE * miFich;
 FILE * miCopia;
 size_t lescrito;

printf("Introduce el archivo que deseas copiar \n");
// nombre es un array de caracteres y no necesita el & de dirección.
scanf("%s", nombre);

	do
	{
		miFich = fopen(nombre,"r");
		if(miFich==NULL)
		{
			printf("El archivo no existe, introduce otro nombre ");
			scanf("%s", nombre);
		}
	}
	while(miFich==NULL);
	
	// El fichero existe, creamos otro fichero copia.
		strcpy(copia, "copia_de_");
		miCopia= fopen(strcat(copia, nombre), "w");
		perror("hola");
		// Imprimimos por pantalla el nombre del nuevo archivo.
		printf("%s\n",copia);
		pMemo=malloc(sizeof(char));

        while(!feof(miFich))
        { 
			
           lescrito = fread(pMemo,sizeof(char),1,miFich);
		   if(!feof(miFich))
		   {
		   lescrito= fwrite(pMemo, sizeof(char),1,miCopia);
		   printf("%c", *pMemo);
		   }
        }
		
		printf("\n");
        free(pMemo);
		fclose(miCopia);
		fclose(miFich);
		printf("Fin del programa");
}
