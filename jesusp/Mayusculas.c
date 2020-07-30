#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
FILE * miFich;
FILE * Fichw;

char prueba;
miFich = fopen("C:\\Users\\Usuario\\Documents\\prueba.txt","r");
Fichw = fopen("C:\\Users\\Usuario\\Documents\\Mayusculas.txt","w");

while(!feof(miFich))
{

    fread (&prueba , sizeof(char), 1, miFich);
    prueba=toupper(prueba);
    fwrite(&prueba,sizeof(char),1, Fichw);
    printf("%c",prueba);
}

fclose(Fichw);
fclose(miFich);
}
