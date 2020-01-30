/* Ejercicios:
1. Crear un programa que abra un fichero llamado “prueba.txt” (previamente creado con el
block de notas y guardado en la misma carpeta donde este el programa) y que muestre el
contenido del mismo por pantalla carácter a carácter.
2. Crear un programa que abra un fichero llamado “prueba.txt” (previamente creado con el
block de notas y guardado en la misma carpeta donde este el programa) y que muestre el
contenido del mismo con los caracteres separados por guiones “-“.
3. Crear un programa que abra un fichero llamado “prueba.txt” (previamente creado con el
block de notas y guardado en la misma carpeta donde este el programa) y que muestre el
contenido del mismo por pantalla pasando a mayúscula los caracteres que estén en
minúscula.
*/

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

int main()
{
 char * pMemo;
 size_t leidos;
 FILE * miFich;

  miFich = fopen("prueba.txt","r");
  if(miFich!=0)
   {
      pMemo=malloc(sizeof(char));
      if(pMemo!=NULL)
      {
        do
        { 
           leidos = fread(pMemo,sizeof(char),1,miFich);
            if (leidos==1)
           {
			    // Ejercicio 1:
			    // printf("%c",*pMemo);
				// Ejercicio 2:
				printf("-%c",*pMemo);				
				// Ejercicio 3:
				*pMemo=toupper(*pMemo);
				printf("%c", *pMemo);
           }
           else
           {
			   if(!feof(miFich))
			   {
			    perror("No hay nada más "); 
			   }
           }
          }
          while(!feof(miFich));
        free(pMemo);
      } 
      else
      {
         perror("No he conseguido memoria. ");
      }
     fclose(miFich);
   }
  else
   {
      perror(" Esteeeeeee... Algo ha ido mal");
   }
}